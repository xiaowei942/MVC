/**
 * Project Untitled
 */


#ifndef __VERSIONVIEW_H__
#define __VERSIONVIEW_H__

#include "Observer.h"

struct VersionView:Observer
{
	void update(void*a)
	{
		cout<<static_cast<Model*>(a)->getVersion_Caption();
		cout<<static_cast<Model*>(a)->getVersion();
		cout<<endl;
	}
};
#endif
