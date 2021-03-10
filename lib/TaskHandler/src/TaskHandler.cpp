//=================================================================
// ©2021 Ryan Shoobert, all rights reserved
//=================================================================
// Author: Ryan Shoobert
// Created: 09 March, 2021; Modified: 10 March, 2021
// Filename: TaskHandler.cpp
//=================================================================

#include "TaskHandler.h"
#include <Arduino.h>

Task taskList[MAX_TASKS];


TaskHandler::TaskHandler(/* args */)
{
}

bool FindSpace(short* index) {  
    Serial.write(*index);

    for (short i = 0; i < MAX_TASKS; i++)
    {
        if (taskList[i].taskState == Finished || taskList[i].taskState == Undefined)
        {
           *index = i;

            return true;
        }
    }    
  
    return false;
}

void TaskHandler::AddTask(void (*task)()) {
    short counter = -1;

    bool spaceFound = FindSpace(&counter);
    if (!spaceFound)
    {
        return;
    }
    
    taskList[counter] = Task{
        counter,
        Ready,
        &*task
    };
}

//!!=====================Not needed yet!!=====================
// bool ValidateTask(Task task) {
//     if (task.taskState == Running)
//     {
//         return false;
//     }

//     return true;
// }

TaskHandler::~TaskHandler()
{
}