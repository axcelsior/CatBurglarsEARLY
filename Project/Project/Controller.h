#ifndef INCLUDED_CONTROLLER
#define INCLUDED_CONTROLLER

#include "Cat1.h"

class Controller
{
public:
	Controller();
	~Controller();
	void assignController(int player, Cat1 *cat);
	void move(Cat1 *cat);
private:
	Cat1 *mCat;
};

#endif