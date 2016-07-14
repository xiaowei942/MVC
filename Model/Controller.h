/**
 * Project Untitled
 */


#ifndef __CONTROLLER_H__
#define __CONTROLLER_H__

struct Controller
/*
 * AK: Controller can also be an Observer.
 *
 * There is much to say about Controller but IMHO we should defer
 * that to another version.
 */
{
	//data member model
	Model*model;

	//setModel
	void setModel(Model &a){model=&a;}

	//MessageLoop
	void MessageLoop()
	{
		char c=' ';
		string s;
		while(c!='q')
		{
			cin>>c;
			cin.ignore(256,'\n');
			cin.clear();
			switch(c)
			{
				case 'c':
				case 't':
				case 'v':
					getline(cin, s);
					break;
			}
			switch(c)
			{
				case 'c':
					model->setCredits(s);
					break;
				case 't':
					model->setTitle(s);
					break;
				case 'v':
					model->setVersion(s);
					break;
			}
		}
	}
};
#endif
