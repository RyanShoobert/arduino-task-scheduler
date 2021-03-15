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

bool Scheduler::AddTask(void (*function)(), String friendlyName) {
    if (function == nullptr)
    {
        return false;
    }

    handler.AddTask(function, friendlyName);
    return true;
}

bool Scheduler::RemoveTask(String friendlyName) {
    //TODO implement logic later to get correct task    
    handler.RemoveTask(Task{1, Ready, nullptr, friendlyName});
    return true;
}

Scheduler::~Scheduler() {

}