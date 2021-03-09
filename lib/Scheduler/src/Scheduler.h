//=================================================================
// ©2021 Ryan Shoobert, all rights reserved
//=================================================================
// Author: Ryan Shoobert
// Created: 08 March, 2021; Modified: 08 March, 2021
// Filename: Scheduler.h
//=================================================================

#ifndef SCHEDULER
#define SCHEDULER

class Scheduler 
{
private:
    /* data */

public:
    Scheduler(/* TaskHandler taskHandler */);
    ~Scheduler();

    bool Start();
    bool Stop();
};

#endif