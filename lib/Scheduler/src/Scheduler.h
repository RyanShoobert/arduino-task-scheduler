//=================================================================
// ©2021 Ryan Shoobert, all rights reserved
//=================================================================
// Author: Ryan Shoobert
// Created: 08 March, 2021; Modified: 08 March, 2021
// Filename: Scheduler.h
//=================================================================

#ifndef SCHEDULER
#define SCHEDULER
#define MAX_TASKS 3

class Scheduler 
{
private:
    /* data */

public:
    Scheduler();
    ~Scheduler();

    bool Start();
    bool Stop();
    void AddTask(Task task);
    void RemoveTask(Task task);
};

#endif