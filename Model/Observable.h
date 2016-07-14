/**
 * Project Untitled
 */


#ifndef __OBSERVABLE_H__
#define __OBSERVABLE_H__

#include "Observer.h"

//struct Observable, modeled after java.utils.Observable
struct Observable
{
	//observers
	vector<Observer*>observers;

	//addObserver
	void addObserver(Observer*a){observers.push_back(a);}

	//notifyObservers
	void notifyObservers()
	{
		for (vector<Observer*>::const_iterator observer_iterator=observers.begin();observer_iterator!=observers.end();observer_iterator++)
			(*observer_iterator)->update(this);
	}

	/*
		AK: If you had a method which takes an extra "ARG" argument like this
		notifyObservers(void* ARG), you can pass that arg to each Observer via
		the call (*observer_iterator)->update(this,ARG);


		This can significantly increase your View‘s reusablity down the track.
		I‘ll explain why below in the View.
	*/

};
#endif
