#ifndef LOGIN_H
#define LOGIN_H
#include <iostream>
#include <conio.h>
#include <cassert>
#include <string>
#include <ctime>
#include <cstdlib>
#include "admin.h"
#include <vector>
#include "register.h"
using namespace std;

class loginManager
{
	string Password;
	string Email;
	vector <registration> Traveler;
	
	
	public :
		loginManager ();
		
		void login (Admin ad1);
		
		void login (vector<registration>& logTraveler);

};
#endif
