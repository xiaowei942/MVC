/**
 * Project Untitled
 */


#ifndef __OBSERVER_H__
#define __OBSERVER_H__

#include<iostream>
#include<vector>

//get namespace related stuff
using std::cin;
using std::cout;
using std::endl;
using std::flush;
using std::string;
using std::vector;

//struct Observer, modeled after java.utils.Observer
struct Observer
/*
 * AK: This could be a template (C++) or generic (Java 5),
 * however the original Smalltalk MVC didn‘t do that.
 */
{
	//update
	virtual void update(void*)=0;
};
#endif
