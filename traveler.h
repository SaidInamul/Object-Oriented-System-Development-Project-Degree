#ifndef TRAVELER_H
#define TRAVELER_H
#include <iostream>
#include <conio.h>
#include <cassert>
#include <string>
#include <ctime>
#include <cstdlib>
#include "register.h"
#include "permit.h"
#include "result.h"
#include "login.h"
#include <vector>
using namespace std;

class Traveler
{
	vector <registration> Traveler;
	vector <Permit> PermitApplication;
	
	
	public :
		void Registration_Traveler (vector <registration>& Rtraveler);
		
		void login (vector <registration>& logtraveler);
		
		void change_details(vector <registration>& traveler);
		
		void application (vector <Permit>& Papplication);
		
		void permit_details (vector <Permit> Display_Permit);
		
		void cancel (vector <Permit>& CancelTravel);
		
		void checkresult (vector <Permit> PermitResult);
		
		void display_details (vector <registration> showdetails);
		
};
#endif
