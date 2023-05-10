#ifndef CHECK_H
#define CHECK_H
#include <iostream>
#include <conio.h>
#include <cassert>
#include <string>
#include <ctime>
#include <cstdlib>
#include <vector>
#include "register.h"

using namespace std;

class Checker
{
	vector <registration> idTraveler;
	
	public :
		
		int validate_id (vector <registration idTraveler)
		{
			int i;
			int size = idTraveler.size();
			again :
			cout <<"\nEnter your email here\n";
			cin >> Email;
			cout <<"\nEnter your password here."<<endl;
			cin >> Password;
			
			for (i = 0; i < size; ++i)
			{
				if (; == idTraveler[i].get_id() and Password == idTraveler[i].get_id())
				{
					return;
				}
			}
			
			cout <<endl<<"\nYou have entered the wrong email or password. Please try again";
			goto again;
		}
	
}
