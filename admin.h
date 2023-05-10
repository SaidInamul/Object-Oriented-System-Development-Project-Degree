#ifndef ADMIN_H
#define ADMIN_H
#include <iostream>
#include <conio.h>
#include <cassert>
#include <string>
#include "register.h"
#include <vector>
//#include "login.h"
using namespace std;

class Admin {
	
	int Admin_ID;
	string EmailAdmin;
	string PasswordAdmin;
	vector <registration> Traveler;
	
	public :
		Admin (int ID, string EAdmin, string PAdmin)
		{
			Admin_ID = ID;
			EmailAdmin = EAdmin;
			PasswordAdmin = PAdmin;
			assert (Admin_ID >=0 && Admin_ID <= 100);
			assert (PasswordAdmin.length() > 0 && PasswordAdmin.length() <= 10);
		}
		
		string getEmail () const
		{
			return EmailAdmin;
		}
		string getPass () const
		{
			return PasswordAdmin;
		}
		
		int getID () const
		{
			return Admin_ID;
		}
		
		void detailuser (vector <registration> detailTraveler)
		{
			unsigned int size = detailTraveler.size();
			for (unsigned int i = 0; i < size; i++)
			{
				detailTraveler[i].printdetails();
				cout<<endl;
			}
			
		}
		void print () const
		{
			cout <<"Admin ID : "<<Admin_ID<<endl;
			cout <<"Email Admin : "<<EmailAdmin<<endl;
			cout <<"Password Admin : "<<PasswordAdmin<<endl;
			cout <<endl;
			
			return;
		}
		
		void adduser (vector<registration>& newRtraveler)
		{
			
			registration newuser;
			newuser.add(newRtraveler);
			newRtraveler.push_back (newuser);
			cout<<endl;
			cout<<endl;
			cout<<"New user added\n";
			
		
		}
		
		void deluser (vector<registration>& delRtraveler)
		{
			int userID, i;
			int size = delRtraveler.size();
			again :
			cout <<"\nEnter the registered ID : ";
			cin >> userID;
			
			for (i = 0; i < size; ++i)
			{
				if (userID == delRtraveler[i].get_register_id ())
				{
					delRtraveler.erase(delRtraveler.begin() + i);
					cout <<"Acount with ID ("<<userID<<") has been deleted\n";
					return;
				}
			}
			
			cout <<"Registration ID is invalid";
			goto again;
			
		}
		
};
#endif

