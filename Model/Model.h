/**
 * Project Untitled
 */

#ifndef __MODEL_H__
#define __MODEL_H__

#include "Observable.h"

struct Model:Observable
{
	//data members title_caption, version_caption, credits_caption
	string title_caption;
	string version_caption;
	string credits_caption;

	//data members title, version, credits
	string title;
	string version;
	string credits;

	//constructor
	Model() :
		title_caption("Title: "),
		version_caption("Version: "),
		credits_caption("Credits: "),
		title("Simple Model-View-Controller Implementation"),
		version("0.2"),
		credits("(put your name here)")
	{ }

	//getCredits_Caption, getTitle_Caption, getVersion_Caption
	string getCredits_Caption(){return credits_caption;}
	string getTitle_Caption(){return title_caption;}
	string getVersion_Caption(){return version_caption;}

	//getCredits, getTitle, getVersion
	string getCredits(){return credits;}
	string getTitle(){return title;}
	string getVersion(){return version;}

	//setCredits, setTitle, setVersion
	void setCredits(string a)
	{
		credits=a;
		notifyObservers();
	}

	void setTitle(string a)
	{
		title=a;
		notifyObservers();
	}

	void setVersion(string a)
	{
		version=a;
		notifyObservers();
	}

	/*
	 * AK notifyObservers(a) for credit, title and version.
	 * All as per discussion in View and Observer *
	 */
};


/*
	AK:
	Great stuff ;-) This satisfies a major principle of the MVC
	architecture, the separation of model and view.

	The model now has NO View material in it, this model can now be used in
	other applications.
	You can use it with command line apps (batch, testing, reports, ...),
	web, gui, etc.

	Mind you "MVC with Passive Model" is a variation of MVC where the model
	doesn‘t get even involved with the Observer pattern.

	In that case the Controller would trigger a model update *and it* could
	also supply the latest info do the Views. This is a fairly common MVC
	variation, especially with we apps.
*/
#endif
