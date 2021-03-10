//=================================================================
// ©2021 Ryan Shoobert, all rights reserved
//=================================================================
// Author: Ryan Shoobert
// Created: 08 March, 2021; Modified: 10 March, 2021
// Filename: Scheduler.cpp
//=================================================================

#include "Scheduler.h"

Scheduler::Scheduler(TaskHandler* taskHandler) {
    handler = *taskHandler;
}

void RunTask(Task task) {
    //run task until interupt b is raised
}

void Scheduler::Start() {
    //when interupt a not raised run tasks
}

void Scheduler::Stop() {
}

bool Scheduler::AddTask(void (*function)()) {
    if (function == nullptr)
    {
        return false;
    }

    handler.AddTask(function);
    return true;
}

bool Scheduler::RemoveTask(void (*function)()) {
    return true;
}

Scheduler::~Scheduler() {

}