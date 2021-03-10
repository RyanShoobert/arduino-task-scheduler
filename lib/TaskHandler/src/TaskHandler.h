//=================================================================
// ©2021 Ryan Shoobert, all rights reserved
//=================================================================
// Author: Ryan Shoobert
// Created: 09 March, 2021; Modified: 10 March, 2021
// Filename: TaskHandler.cpp
//=================================================================

#ifndef TASK_HANDLER
#define TASK_HANDLER
#define MAX_TASKS 3

enum TaskState {
    Undefined, Stopped, Running, Ready, Finished, Failed
};

struct Task
{
    short taskID;
    TaskState taskState;
    void* taskProgramCounter;
};

class TaskHandler
{
private:

public:
    TaskHandler();
    ~TaskHandler();

    void AddTask(void (*task)());
    void RemoveTask(Task task);
};

#endif