#include <iostream>
#include <string>
#include "register.h"
#include "admin.h"
#include "login.h"
#include "vector"
#include "traveler.h"
#include "officer.h"
#include "permit.h"
#include "result.h"
using namespace std;
//VERSION 2.0 
//All codes are implemented by Said Mohammad Inamul Hafizzan bin Saidsaripudin (72658)
//3rd January 2020

void Traveler_page (vector<registration>&); 
void admin_page (); 
void loginsystemOfficer (); 
Traveler travel; 
vector<registration> Rtraveler; 
vector <Permit> application_permit; 


int main ()
{	
	int choose;
	main_page :
	cout<<"Hello there. Insert integer value to continue.\n";
	
	cout <<"1. Registration"<<endl<<"2. Login"<<endl<<"3. Officer\n"<<"4. Admin"<<endl<<"5. Exit\n";
	cout << endl;
	cin >> choose;
	
	switch (choose)
	{
		case 1 : 
		{
			travel.Registration_Traveler (Rtraveler); 
			cout<<endl;
			goto main_page;
			break;
		}
		case 2 :
		{
			travel.login(Rtraveler); 
			Traveler_page (Rtraveler); 
			cout << endl;
			break;
		}
		case 3 :
		{
			loginsystemOfficer ();
			cout <<endl;
			break;
		}
		case 4 :
		{
			admin_page ();
			cout <<endl;
			break;
		}
		case 5 : 
		{
			cout<<endl<<"Bye2x. Program is terminating\n";
			cout <<endl;
			break;
		}
		default :
		{
			cout <<endl;
			goto main_page;
		}
		
	}
	return 0;


}

void admin_page ()
{
	int choose;
	loginManager login1;
	Admin admin(15,"Abu@gmail.com", "12345"); 
	login1.login(admin); 
	
	main_page_admin :
	cout <<endl<<endl;
	cout <<"1.View user\n2.Add user\n3.Delete user\n4.Admin details\n5.Log out\n";
	cin >> choose;
	switch (choose)
	{
		case 1 : 
		{
			admin.detailuser(Rtraveler); 
			goto main_page_admin;
			break;
		}
		case 2 :
		{
			cout<<endl<<endl;
			admin.adduser(Rtraveler); 
			goto main_page_admin;
			break;
		}
		case 3 : 
		{
			admin.deluser(Rtraveler); 
			cout<<endl<<endl;
			goto main_page_admin;
			break;
		}
		case 4 :
		{ 
			admin.print(); 
			goto main_page_admin;
			break;
		}
		case 5 :
		{
			cout<<endl;
			main();
			break;	
		}	
		
		default :
		{
			goto main_page_admin;
			break;
		}
	}	
	
}


void Traveler_page (vector<registration>& Rtraveler)
{
	int choose;
	main_page_user :
	cout<<endl<<endl<<"Welcome !!!";
	cout<<endl;
	cout <<"1.Apply Permit\n2.Permit details\n3.Cancel Permit\n4.Check Result\n5.Modify Details\n6.Display Details\n7.Log out\n";
	cout <<endl;
	cin >> choose;
	switch (choose)
	{
		case 1 : 
		{
			travel.application(application_permit); 
			cout << endl;
			goto main_page_user;
			break;
		}
		case 2 :
		{
			travel.permit_details (application_permit);
			cout << endl;
			goto main_page_user;
			break;
		}
		case 3 : 
		{
			travel.cancel(application_permit);
			cout << endl;
			goto main_page_user;
			break;
		}
		case 4 :
		{ 
			travel.checkresult(application_permit);
			cout << endl;
			goto main_page_user;
			break;
		}
		case 5 :
		{
			travel.change_details(Rtraveler);
			cout << endl;
			goto main_page_user;
			break;
		}
		case 6 :
		{
			travel.display_details (Rtraveler);
			cout << endl;
			goto main_page_user;
		}
		case 7 :
		{
			cout << endl;
			main ();
			break;
		}
		default :
		{
			cout << endl;
			goto main_page_user;
			break;
		}
	}	
		
}

void loginsystemOfficer ()
{
	int choose;
	int typeofficer;
	Officer office;
	PoliceStation PP1;
	JettyCheckPoint JCP1;
	Airport A1;
	DisasterControl DCO1;
	
	again :
	cout <<"Which station are you ?\n";
	cout <<"1. Police Station	2. Jetty Check Point	3. Airport	4. Disaster Control\n";
	cin >> typeofficer;
	if (typeofficer == 1)
	{
		cout << endl;
		PP1.login(10,"Police@gmail.com", "15");	
	}
	else if (typeofficer == 2)
	{
		cout << endl;
		JCP1.login(1,"JCP@gmail.com", "11");
	}
	else if (typeofficer == 3)
	{
		cout << endl;
		A1.login(5,"A1@gmail.com", "20");
	}
	else if (typeofficer == 4)
	{
		cout << endl;
		DCO1.login(13,"DCO@gmail.com", "10");
	}
	else
	{
		cout << endl;
		goto again;
	}
	
	main_page_officer :		
	cout<<endl<<endl;
	cout <<"1.Check Result\n2.Officer Details\n3.Evaluate Application\n4.Log out";
	cout << endl;
	cin >> choose;
	switch (choose)
	{
		case 1 : 
		{
			office.checkresult(application_permit);
			cout << endl;
			goto main_page_officer;
			break;
		}
		case 2 :
		{
			if (typeofficer == 1)
			{
				cout << endl;
				PP1.personal_details();
				cout << endl;
			}
			else if (typeofficer == 2)
			{
				cout << endl;
				JCP1.personal_details();
				cout << endl;
			}
			else if (typeofficer == 3)
			{
				cout << endl;
				A1.personal_details();
				cout << endl;
			}
			else if (typeofficer = 4)
			{
				cout << endl;
				DCO1.personal_details();
				cout << endl;
			}
			cout << endl;
			goto main_page_officer;
			break;
		}
		case 3 : 
		{
			if (typeofficer == 4)
			{
				cout << endl;
				DCO1.evaluateApplication (application_permit);
				cout << endl;
			}
			else
			{
				cout << endl;
				cout <<"\n\nYour are not from the Disaster Control Department\n\n";
			}
			goto main_page_officer;
			break;
		}
		
		case 4 :
		{
			cout << endl;
			main ();
			break;
		}
		default :
		{
			cout << endl;
			goto main_page_officer;
			break;
		}
	}	
}


