#ifndef INCLUDED_CHANNEL
#define INCLUDED_CHANNEL

class Channel {
public:
	Channel(int channelID);
	bool isActive();
	void setActive(bool toggle , float length);
	int getID();

	void runTimer();
private:
	bool mActive;
	bool mToggled;
	int mID;
	void mSetActiveTime(float holdlength);
	float mTimer;

};


#endif