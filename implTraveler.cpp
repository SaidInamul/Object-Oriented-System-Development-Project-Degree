#include "traveler.h"

void Traveler :: Registration_Traveler (vector <registration>& Rtraveler) 
{
	registration newuser;
	newuser.add(Rtraveler);
	Rtraveler.push_back (newuser);
	cout<<endl;
	cout<<endl;
	cout<<"Your have registered. You may continue to login\n";
	return;
}

void Traveler :: login (vector <registration>& logtraveler)
{
	loginManager loginTraveler;
	loginTraveler.login(logtraveler);
	return;
	
}

void Traveler :: change_details(vector <registration>& traveler)
{
	int registerID,i;
	int size = traveler.size();
	registration newuser;
	
	again :
	cout <<"Please enter your registered ID to continue : ";
	cin >> registerID;
	
	for (i = 0; i < size; ++i)
	{
		if (registerID == traveler[i].get_register_id ())
		{
			traveler.erase(traveler.begin() + i);
			newuser.modifydata ();
			traveler.insert (traveler.begin() + i, newuser);
			traveler[i].get_register_id () == traveler[i].keepregisterID (registerID);
			traveler[i].printdetails();
			return;
		}
	}
	
	cout <<"Registration ID is invalid";
	goto again;
	
}

void Traveler :: application (vector <Permit>& Papplication)
{
	Permit newpermit;
	newpermit.application ();
	Papplication.push_back (newpermit);
	cout<<endl;
	cout<<endl;
	cout<<"Application is submitted. Wait for the result\n\n";
	
}

void Traveler :: permit_details (vector <Permit> Display_Permit)
{
	int permitID,i;
	int size = Display_Permit.size();
	
	again :
	cout <<"Please enter your permit ID to continue : ";
	cin >> permitID;
	
	for (i = 0; i < size; ++i)
	{
		if (permitID == Display_Permit[i].get_permit_id ())
		{
			Display_Permit[i].print ();
			return;
		}
	}
	
	cout <<"\n\nRegistration ID is invalid\n\n";
	goto again;
	
	
}

void Traveler :: cancel (vector <Permit>& CancelTravel)
{
	int PermitID;
	char answer;
	unsigned int size = CancelTravel.size();
	again :
	cout <<"\nEnter your Permit ID to continue :  ";
	cin >> PermitID;
	
	for (unsigned int j = 0; j < size; ++j)
	{
		if (PermitID == CancelTravel[j].get_permit_id ())
		{
			cout <<"\n\nDo you want to cancel your application ? (y/n)\n";
			cin >> answer;
			
			if (answer == 'y')
			{
				CancelTravel[j].set_Result ("I have cancelled my application. I will stay at my current position. Thank you");
				return;
			}
			else
			{
				return;
			}
		}
	}
	
	cout <<"\n\nInvalid Permit ID. Try again\n";
	goto again;
	
}

void Traveler :: checkresult (vector <Permit> PermitResult)
{
	
	Result result;
	result.Display_result(PermitResult);
	return;
	
}

void Traveler :: display_details (vector <registration> showdetails)
{
	int registerID,i;
	int size = showdetails.size();
	
	again :
	cout <<"Please enter your registered ID to continue : ";
	cin >> registerID;
	
	for (i = 0; i < size; ++i)
	{
		if (registerID == showdetails[i].get_register_id ())
		{
			showdetails[i].printdetails();
			
			return;
		}
	}
	
	cout <<"Registration ID is invalid";
	goto again;
}
