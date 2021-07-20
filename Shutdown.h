#ifndef SHUTDOWN_H_
#define SHUTDOWN_H_
#include <iostream>
#include <cstdlib>
#include "Time.h"
#include "Menu.h"
#include <cstdlib>
#include <ctime>

void Shutdown()
{
	while(true)
	{
    	time_t ct = time(0);
    	struct tm * ctm = localtime(&ct);
    	if (ctm->tm_hour == ShutdownTime.tm_hour && ctm->tm_min == ShutdownTime.tm_min)
    	{
		cout << "\a";
		system("C:\\windows\\system32\\shutdown ");
		break;
    	}
    	else 
    	{
    		continue;
		}
    }  
}

#endif
//C:\windows\system32\shutdown

