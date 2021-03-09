//=================================================================
// ©2021 Ryan Shoobert, all rights reserved
//=================================================================
// Author: Ryan Shoobert
// Created: 08 March, 2021; Modified: 09 March, 2021
// Filename: Scheduler.cpp
//=================================================================

#include "Scheduler.h"

Task taskList[0];

Scheduler::Scheduler() {
    taskList[MAX_TASKS];
}

Scheduler::~Scheduler() {
    delete(taskList);
}