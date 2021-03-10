//=================================================================
// ©2021 Ryan Shoobert, all rights reserved
//=================================================================
// Author: Ryan Shoobert
// Created: 09 March, 2021; Modified: 09 March, 2021
// Filename: TaskHandler.cpp
//=================================================================

#include "TaskHandler.h"
#include <Arduino.h>

Task taskList[MAX_TASKS];

void TaskHandler::AddTask(void* function) {
    short counter = -1;

    bool spaceFound = this->FindSpace(&counter);
    if (!spaceFound)
    {
        return;
    }

    taskList[counter] = Task{
        counter,
        Ready,
        function
    };
}

bool FindSpace(short* index) {  
    Serial.write(*index);

    for (short i = 0; i < MAX_TASKS; i++)
    {
        if (taskList[i].taskState == Finished || taskList[i].taskState == Undefined)
        {
            Serial.write("Space found at:" + *index);
            *index = i;
            return true;
        }
    }    
  
    return false;
}

//!!=====================Not needed yet!!=====================
// bool ValidateTask(Task task) {
//     if (task.taskState == Running)
//     {
//         return false;
//     }

//     return true;
// }

