#ifndef REGISTER_H
#define REGISTER_H
#include <iostream>
#include <conio.h>
#include <cassert>
#include <string>
#include <ctime>
#include <cstdlib>
#include <vector>
#include "permit.h"
using namespace std;

class registration
{
	vector <registration> Rtraveler;
	int registerID;
	string Name;
	string id;
	string nophone;
	string HomeAddress;
	string OfficeAddress;
	string EmailAddress;
	string password;
	
		
	public :
		registration ();
		void add (vector <registration> Rtraveler);
		void printdetails ();
		int get_register_id ();
		string get_id ();
		string getemail ();
		string getpassword ();
		int keepregisterID (int regid);
		void modifydata ();
};
#endif

