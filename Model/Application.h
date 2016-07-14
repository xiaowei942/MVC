#ifndef __APPLICATION_H__
#define __APPLICATION_H__
#include "Model.h"
#include "Views.h"
#include "Controller.h"
//struct Application, get Model, Views and Controller together
struct Application
{
	//data member model
	Model model;

	//data member views
	Views views;

	//data member controller
	Controller controller;

	//constructor
	Application()
	{
		views.setModel(model);
		controller.setModel(model);
		model.notifyObservers();
	}

	//run
	void run()
	{
		controller.MessageLoop();
	}
};
#endif
