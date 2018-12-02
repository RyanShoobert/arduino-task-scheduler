/**
 * AUTHOR:: 	Ryan Shoobert
 * CREATED::	29th November, 2018
 * MODIFIED::	29th November, 2018
 *
 * Class for containing all structure and enum definitions for easy reference.
 */

#ifndef STRUCT_DEF
#define STRUCT_DEF

//-------------------------------------------------------------------------------
//	ENUM Definitions
//-------------------------------------------------------------------------------
enum State {
	Stopped, Running, Ready
};

//-------------------------------------------------------------------------------
//	Structure Definitions
//-------------------------------------------------------------------------------
struct Task {
	char taskID;

	//TODO not sure about this yet -- think about it some
	void* initPC;

	State taskState;
};

#endif /* STRUCT_DEF */
