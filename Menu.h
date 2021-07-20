#ifndef MENU_H_
#define MENU_H_
#include <iostream>
#include <ctime>
#include <cstdlib>
#include "Time.h"
#include "MainHeader.h"
using namespace std;
struct tm ShutdownTime;

void Menu()
{
ShowTime();
cout << "What do you wanna do now?(Enter 1 or 2)\n" << "1 >> Create shedulle to Shutdown your PC ";
cout <<"\n2 >> EXIT \n";
int input;
ShutdownTime = *ptm;
if (cin >> input)
{ 
    while (cin.good())
    {
	if (input == 1)
	{
		cout << "enter the time u wanna shut down your pc(24 hour format):\n";
		cout << "Hour:  ";
		while (cin >> ShutdownTime.tm_hour)
	    {
	    	if (ShutdownTime.tm_hour<=23 && 0<=ShutdownTime.tm_hour)
			{
			cout << "Minutes:  ";
			break;
			}
	    	else 
	    	{
	 		    cerr << "\aTRY AGAIN -> \nHour:  ";
		    	continue;
	    	}
     	}
		while (cin >> ShutdownTime.tm_min)
		{
			if( ShutdownTime.tm_min<=59 && 0<=ShutdownTime.tm_min )
			{
         	    cout << "your computer Will Shut down today/tommorow at " << ShutdownTime.tm_hour << ":" << ShutdownTime.tm_min ;
         	    break;
        	}
		
	    	else
	    	{
			cerr << "\aTRY AGAIN -> \nMinutes:  ";
			continue;
    		}
	   }
	}
	else if(input == 2)
	{
	 exit(EXIT_FAILURE) ;
    }
	else
	{
		cerr << "\aplease enter 1 or 2\n";
		continue;
	}
    cout << "\n\n\n";
    break;
    }
}
else 
{
	cout << "dont try to mess with application please...";
}
}
#endif
