#include "Time.h"
#include<iostream>
//default constructor
Time::Time(int hours_in, int mins_in, int secs_in){

}
//accessor method
void Time::setTime(int hours_in, int mins_in, int secs_in){
	hours = 0;	//use sensible default values in case invalid parameters are entered
	mins = 0;
	secs = 0;
	
	if (hours_in < 23 && hours_in >= 0)
		hours = hours_in;
	else
		cout << "invalid value of hours entered:" << hours_in << endl;

	if (mins_in < 59 && mins_in >= 0)
		mins = mins_in;
	else
		cout << "invalid value of minutes entered:" << mins_in << endl;

	if (secs_in < 59 && secs_in >= 0)
		secs = secs_in;
	else
		cout << "invalid value of second entered:" << secs_in << endl;


}

void Time::getTime(int &hours_out, int &mins_out, int &secs_out){

}

void Time::print(void){
	cout << hours << mins << secs << endl;
}


Time::~Time()
{
}
