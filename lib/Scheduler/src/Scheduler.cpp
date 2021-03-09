//=================================================================
// ©2021 Ryan Shoobert, all rights reserved
//=================================================================
// Author: Ryan Shoobert
// Created: 08 March, 2021; Modified: 09 March, 2021
// Filename: Scheduler.cpp
//=================================================================

#include "Scheduler.h"

void Start() {
    //when interupt a not raised run tasks
}

void Stop() {
}

bool Scheduler::AddTask(void* function) {
    if (function == nullptr)
    {
        return false;
    }

    this->taskHandler.AddTask(function);
    return true;
}

bool Scheduler::RemoveTask(void* function) {
    return true;
}

void RunTask(Task task) {
    //run task until interupt b is raised
}