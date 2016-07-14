/**
 * Project Untitled
 */


#ifndef __VIEWS_H__
#define __VIEWS_H__

#include "Observer.h"
#include "TitleView.h"
#include "VersionView.h"
#include "CreditsView.h"

struct Views : Observer
{
	//data members titleview, versionview, creditsview
	TitleView titleview;
	VersionView versionview;
	CreditsView creditsview;
	/*
	 * AK:
	 * Views are often hierarchical and composed of other Views. See
	 Composite pattern.
	 * vector<View*> views;
	 *
	 * Views often manage (create and own) a Controller.
	 *
	 * Views may include their own Controller code (Delegate).
	 *
	 */
	//setModel
	void setModel(Observable &a)
	{
		a.addObserver(&titleview);
		a.addObserver(&versionview);
		a.addObserver(&creditsview);
		a.addObserver(this);
	}

	//update
	void update(void*a)
	{
		cout<<"_____________________________";
		cout<<"\nType t to edit Title, ";
		cout<<"v to edit Version, ";
		cout<<"c to edit Credits. ";
		cout<<"Type q to quit.\n>>";
	}
};
#endif
