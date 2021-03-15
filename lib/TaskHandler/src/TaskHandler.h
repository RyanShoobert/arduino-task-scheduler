//=================================================================
// ©2021 Ryan Shoobert, all rights reserved
//=================================================================
// Author: Ryan Shoobert
// Created: 09 March, 2021; Modified: 15 March, 2021
// Filename: TaskHandler.cpp
//=================================================================

#ifndef TASK_HANDLER
#define TASK_HANDLER
#define MAX_TASKS 3

#include "Arduino.h"

enum TaskState {
    Undefined, Stopped, Running, Ready, Finished, Failed
};

struct Task
{
    short taskID;
    TaskState taskState;
    void* taskProgramCounter;
    String name;
};

class TaskHandler
{
private:

public:
    TaskHandler();
    ~TaskHandler();

    void AddTask(void (*task)(), String friendlyName);
    void RemoveTask(Task task);

    //hacky solution
    Task* GetTasks(Task tasks[]);
};

#endif