#include "login.h"

loginManager :: loginManager ()
{
	Password = "";
	Email = "";
}

void loginManager :: login (Admin ad1)
{
	cout <<"Enter your email here."<<endl;
	cin >> Email;
	cout <<"\nEnter your password here."<<endl;
	cin >> Password;
	
	while (Email != ad1.getEmail() || Password != ad1.getPass())
	{
		cout <<"\nYou have entered the wrong email or password. Please try again"<<endl;
		cout <<"Enter your email here."<<endl;
		cin >> Email;
		cout <<"\nEnter your password here."<<endl;
		cin >> Password;
	}
		cout <<"Hello. Your Admin ID is "<<ad1.getID()<<endl;
		return;
		
}

void loginManager :: login (vector<registration>& logTraveler)
{
	
	int i;
	int flag=0;
	int size = logTraveler.size();
	again :
	cout <<"\nEnter your email here\n";
	cin >> Email;
	cout <<"\nEnter your password here."<<endl;
	cin >> Password;
	
	for (i = 0; i < size; ++i)
	{
		if (Email == logTraveler[i].getemail() and Password == logTraveler[i].getpassword())
		{
			return;
		}
	}
	
	cout <<endl<<"\nYou have entered the wrong email or password. Please try again";
	goto again;
}
