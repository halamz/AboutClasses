#include<iostream>
#include "Time.h"

using namespace std;

int main()
{
	Time teaTime(10, 15, 0);		//create an object to represent tea timeas10 :15
	Time midnight;

	teaTime.print();
	midnight.print();

	teaTime.setTime(11, 0, 0);
	teaTime.print();

}