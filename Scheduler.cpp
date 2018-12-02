/**
 * AUTHOR:: 	Ryan Shoobert
 * CREATED::	29th November, 2018
 * MODIFIED::	29th November, 2018
 *
 *
 */

#include "Scheduler.h"

/**
 * TODO Comment me
 */
Scheduler::Scheduler() {
	//Allocate enough memory to hold MAX_TASKS number of Task instances
	taskList = (Task*) malloc(MAX_TASKS * sizeof(Task));

	ID_Counter = 0;
}

/**
 * TODO Comment me
 */
void Scheduler::AddTask(void* t) {
	unsigned short tmpID = AutoAssign();

	if (tmpID == MAX_TASKS) {
		SetMaxTasks(MAX_TASKS * 2);
	}

	taskList[tmpID].taskID = tmpID;
	taskList[tmpID].initPC = &t;
	taskList[tmpID].taskState = Ready;

	asm volatile(
		"\n"
	);
}

/**
 * TODO Comment me
 */
char Scheduler::AutoAssign() {
	return ID_Counter++;
}

void Scheduler::SetMaxTasks(unsigned short numTasks) {
	MAX_TASKS = numTasks;

	//TODO introduce some reallocation here to increase size of
	//taskList and form an arraylist-like structure
	realloc(taskList, (MAX_TASKS * sizeof(Task)));
}

/**
 * TODO Comment me
 */
Scheduler::~Scheduler() {
	//Free allocated memory
	free(taskList);
}

