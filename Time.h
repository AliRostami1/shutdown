#ifndef TIME_H_
#define TIME_H_
#include <iostream>
#include <ctime>
#include "MainHeader.h"

	time_t currentTime = time(0);
	char* c_currentTime = ctime (&currentTime);
	struct tm * ptm = localtime(&currentTime);
    	
	

void ShowTime()
{
	std::cout << "Your System's Current Time :  " << c_currentTime;
};
#endif
