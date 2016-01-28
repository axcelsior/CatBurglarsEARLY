#include "Channel.h"
#include <iostream>



Channel::Channel(int id) :
	mID(id),
	mActive(false),
	mTimer(0){


}

bool Channel::isActive() {
	return mActive;
}

int Channel::getID() {
	return mID;
}
void Channel::setActive(bool toggle, float holdlength) {

	bool istoggle = toggle;
	float HOLD = holdlength;
	
	if (istoggle) {
		mActive = true;
		mToggled = true;
	}

	if (HOLD > 0 && istoggle == false) {

		mToggled = false;
		mSetActiveTime(HOLD);
		
	}

}

void Channel::mSetActiveTime(float holdlength) {

	mTimer = holdlength;

}


void Channel::runTimer() {


	if (mTimer > 0) {
		mTimer-= 0.02;
	}
	if (mTimer > 0) {
		mActive = true;
	}
	else if (!mToggled) {
		mActive = false;
	}
}