//=================================================================
// ©2021 Ryan Shoobert, all rights reserved
//=================================================================
// Author: Ryan Shoobert
// Created: 08 March, 2021; Modified: 09 March, 2021
// Filename: Scheduler.h
//=================================================================

#ifndef SCHEDULER
#define SCHEDULER

#include "TaskHandler.h"

class Scheduler 
{
private:
    TaskHandler taskHandler;

    void RunTask(Task task);

public:
    Scheduler(TaskHandler* taskHandler);
    ~Scheduler();

    void Start();
    void Stop();
    bool AddTask(void* task);
    bool RemoveTask(void* task);
};

Scheduler::Scheduler(TaskHandler* taskHandler) {
    this->taskHandler = *taskHandler;
}

Scheduler::~Scheduler() {
    delete(&taskHandler);
}

#endif