#ifndef OFFICER_H
#define OFFICER_H
#include <iostream>
#include <conio.h>
#include <cassert>
#include <string>
#include "permit.h"
#include "result.h"
#include <vector>
using namespace std;
class Officer
{
	int Officer_ID;
	string EmailOfficer;
	string PasswordOfficer;
	vector <Permit> evaluatePermit;

	public :
		
		void personal_details  ()
		{
			cout <<"\nHello there\n";
			cout <<"Officer ID	: "<<getID()<<endl;
			cout <<"Email Officer	: "<<getEmail()<<endl;
			cout <<"Password Officer: "<<getPassword()<<endl<<endl;
		}
		
		string getEmail ()
		{
			return EmailOfficer;
		}
		
		string getPassword ()
		{
			return PasswordOfficer;
		}
		
		int getID ()
		{
			return Officer_ID;
		}
		
		void login(int ID, string EOfficer, string POfficer)
		{
			Officer_ID = ID;
			EmailOfficer = EOfficer;
			PasswordOfficer = POfficer;
			string email;
			string password;
			
			again :
			cout << endl;
			cout <<"Enter your Email : ";
			cin >> email;
			cout <<"\n\nEnter your Password : ";
			cin >> password;
			
			while (email != EmailOfficer || password != PasswordOfficer)
			{
				cout <<"\nYou have entered the wrong email or password. Please try again"<<endl;
				cout <<"Enter your email here."<<endl;
				cin >> email;
				cout <<"\nEnter your password here."<<endl;
				cin >> password;
			}
				cout <<"Hello. Your Office ID is "<<Officer_ID<<endl;
				return;
		}
		
		void checkresult (vector <Permit> evaluatePermit)
		{
			vector <Permit> ResultPermit = evaluatePermit;
			Result result;
			result.Display_result(ResultPermit);
		}
		
	
};

class PoliceStation : public Officer
{	
	public :
		void personal_details  ()
		{
			cout <<"\nHello there\n";
			cout <<"You are from Police Station\n";
			cout <<"Officer ID	: "<<getID()<<endl;
			cout <<"Email Officer	: "<<getEmail()<<endl;
			cout <<"Password Officer: "<<getPassword()<<endl<<endl;
		}
	

};

class JettyCheckPoint : public Officer
{
	public :
		void personal_details  ()
		{
			cout <<"\nHello there\n";
			cout <<"You are from Jetty Check Point Department\n";
			cout <<"Officer ID	: "<<getID()<<endl;
			cout <<"Email Officer	: "<<getEmail()<<endl;
			cout <<"Password Officer: "<<getPassword()<<endl<<endl;
		}

};

class Airport : public Officer
{
	public :
		void personal_details  ()
		{
			cout <<"\nHello there\n";
			cout <<"You are from Airport Department\n";
			cout <<"Officer ID	: "<<getID()<<endl;
			cout <<"Email Officer	: "<<getEmail()<<endl;
			cout <<"Password Officer: "<<getPassword()<<endl<<endl;
		}

};

class DisasterControl : public Officer
{
	
	public :
		void evaluateApplication (vector <Permit>& evaluatePermit)
		{
			int PermitID;
			char answer;
			unsigned int size = evaluatePermit.size();
			for (unsigned int i = 0; i < size; i++)
			{
				cout<<endl<<endl;
				evaluatePermit[i].print ();
				cout<<endl<<endl;
			}
			
			again :
			cout <<"\nWhich application do you want to evaluate ? Enter the Permit ID :  ";
			cin >> PermitID;
			
			for (int j = 0; j < size; ++j)
			{
				if (PermitID == evaluatePermit[j].get_permit_id ())
				{
					cout <<"\n\nDo you allow the traveler to travel interstate ?(y/n)\n";
					cin >> answer;
					if (answer == 'y')
					{
						evaluatePermit[j].set_Result("Your application is approved. You may travel to your destination");
						return;
					}
					else
					{
						evaluatePermit[j].set_Result("Your application is rejected. You can not travel to your destination");
						return ;
					}
				}
			}
			
			cout <<"\n\nInvalid Permit ID. Try again\n";
			goto again;
			
		}
		
		void personal_details  ()
		{
			cout <<"\nHello there\n";
			cout <<"You are from Disaster Control Department\n";
			cout <<"Officer ID	: "<<getID()<<endl;
			cout <<"Email Officer	: "<<getEmail()<<endl;
			cout <<"Password Officer: "<<getPassword()<<endl<<endl;
		}
};
#endif

