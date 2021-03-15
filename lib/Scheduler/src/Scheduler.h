//=================================================================
// ©2021 Ryan Shoobert, all rights reserved
//=================================================================
// Author: Ryan Shoobert
// Created: 08 March, 2021; Modified: 15 March, 2021
// Filename: Scheduler.h
//=================================================================

#ifndef SCHEDULER
#define SCHEDULER

#include "TaskHandler.h"

class Scheduler 
{
private:
    TaskHandler handler;

public:
    Scheduler(TaskHandler* taskHandler);
    ~Scheduler();

    void Start();
    void Stop();
    bool AddTask(void (*function)(), String friendlyName);
    bool RemoveTask(String friendlyName);
};

#endif