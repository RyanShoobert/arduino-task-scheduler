/**
 * AUTHOR:: 	Ryan Shoobert
 * CREATED::	29th November, 2018
 * MODIFIED::	29th November, 2018
 *
 *
 */

#ifndef SCHEDULER
#define SCHEDULER

//Defines the maximum number of tasks (The size of the taskList array when set up)
//Change this if you want to break everything
unsigned short MAX_TASKS = 5;

//Include structure definitions file
#include "Struct_Def.h"
#include <stdlib.h>

class Scheduler {
//-------------------------------------------------------------------------------
//	Public functions/state
//-------------------------------------------------------------------------------
public:
	//Constructor/Destructor
	Scheduler();
	virtual ~Scheduler();

	//Scheduler settings
	void SetMaxTasks(unsigned short numTasks);

	//Scheduler commands
	bool Start();
	bool Stop();

	//Task functions
	void AddTask(void* t);
//-------------------------------------------------------------------------------
//	Private functions/state
//-------------------------------------------------------------------------------
private:
	Task* taskList;

	char ID_Counter;
	char AutoAssign();

	void Run();
};

#endif /* SCHEDULER_H */
