//=================================================================
// ©2021 Ryan Shoobert, all rights reserved
//=================================================================
// Author: Ryan Shoobert
// Created: 09 March, 2021; Modified: 09 March, 2021
// Filename: TaskHandler.cpp
//=================================================================

#ifndef TASK_HANDLER
#define TASK_HANDLER
#define MAX_TASKS 3

enum TaskState {
    Stopped, Running, Ready, Finished, Failed
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
    bool ValidateTask(Task function);
    short FindSpace(short* index);
public:
    TaskHandler();
    ~TaskHandler();

    void AddTask(void* task);
    void RemoveTask(Task task);
};

TaskHandler::TaskHandler()
{
}

TaskHandler::~TaskHandler()
{
}

#endif