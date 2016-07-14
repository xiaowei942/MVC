/**
 * Project Untitled
 */


#ifndef __CREDITSVIEW_H__
#define __CREDITSVIEW_H__

#include "Observer.h"

struct CreditsView:Observer
{
	void update(void*a)
	{
		cout<<static_cast<Model*>(a)->getCredits_Caption();
		cout<<static_cast<Model*>(a)->getCredits();
		cout<<endl;
	}
};
#endif
