/**
 * Project Untitled
 */


#ifndef __TITLEVIEW_H__
#define __TITLEVIEW_H__

#include "Observer.h"

//struct TitleView, specialized Observer
struct TitleView:Observer
{
	/*
	 * AK:
	 * I like to get a reference to the model via a constructor to avoid
	 * a static_cast in update and to avoid creating zombie objects.
	 *
	 * A zombie object is instantiated but is unusable because it
	 * is missing vital elements. Dangerous. Getting model via the
	 * constructor solves this problem.

	 Model model;
	// Cons.
	TitleView (Model* m) ....

	RE-USABILITY.
	Some views are better off working with the full Model, yet others are
	better off being dumber.

	I like to have two kinds of Views. Those that work with full Model (A)
	and those that only work with a limited more abstract data type (B).

	Type A.
	Complex application specific views are better off getting the full
	model, they can then just pick and choose what they need from the full
	model without missing something all the time. Convenient.

	Type B.
	These only require abstract or generic data types.

	Consider a PieChartView, it doesn‘t really need to know about the full
	Model of a particular application, it can get by with just float
	 *values[] or vector<float>;

	 By avoiding Model you can then reuse PieChartView in other applications
	 with different models.

	 For this to be possible you must use the 2 argument version of
	 notifyObservers. See comments on Observer class.

	 See my Java example NameView. That view only knows about a String, not
	 the full Model.
	 */


	//update
	void update(void*a)
		/*
		 *AK:void update(void*a, void*arg) is often better. As per discussion
		 above.
		 */
	{
		cout<<static_cast<Model*>(a)->getTitle_Caption();
		cout<<static_cast<Model*>(a)->getTitle();
		cout<<endl;
	}
};

#endif
