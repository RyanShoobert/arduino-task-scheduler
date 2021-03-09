//=================================================================
// ©2021 Ryan Shoobert, all rights reserved
//=================================================================
// Author: Ryan Shoobert
// Created: 09 March, 2021; Modified: 09 March, 2021
// Filename: TaskHandler.cpp
//=================================================================

#include "TaskHandler.h"

void TaskHandler::AddTask(void* function) {
    short i = -1;
    bool isValid = this->FindSpace(&i);
    if (!isValid)
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
    short indexToInsert = *index;
    
    for (short i = 0; i < MAX_TASKS; i++)
    {
        Task t = taskList[i];

        if (t.taskState == Finished)
        {
            return true;
        }
    }    
  
    return false;
}

bool ValidateTask(Task task) {
    if (task.taskState == Running)
    {
        return false;
    }

    return true;
}

