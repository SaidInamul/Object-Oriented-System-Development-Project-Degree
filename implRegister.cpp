#include "register.h"


registration :: registration ()
{
	registerID = 0;
	Name = "Empty";
	id = "";
	nophone = "";
	HomeAddress = "Empty";
	EmailAddress = "Empty";
	password = "";
}

string registration :: get_id ()
{
	return id;
}

void registration :: add (vector <registration> Rtraveler)
{
	int i;
	int size = Rtraveler.size();
	srand(time(0));
	int random_number = (rand () % 30) + 1;
	
	registerID = random_number;
	cin.ignore();
	cout <<"Please Enter your Name : ";
	getline(cin, Name);
	cout <<"\nPlease Enter your identity card number without dash : ";
	cin >> id;
	
	for (i = 0; i < size; ++i)
	{
		if (id == Rtraveler[i].get_id())
		{
			cout <<"\n\nYou have registered before. Please log in to proceed. Thank you.\n";
			return;
		}
	}
	
	cout <<"\nPlease enter your telephone number +60 - ";
	cin >> nophone;
	cin.ignore();
	cout <<"\nPlease enter your home address : \n";
	getline(cin, HomeAddress);
	cout <<"\nPlease enter your office address if you have one : \n";
	getline(cin, OfficeAddress);
	cout <<"\nPlease enter your email here : ";
	getline(cin, EmailAddress);
	cout <<"\nPlease Enter your password : ";
	getline(cin, password);
	cout<<endl<<"\nThank you for filling your information. Now you may sign in to the system by enter your email and password";
	cout<<endl<<"Your registration ID is : ";
	cout<<registerID;
	return;
}
void registration :: printdetails ()
{
	cout<<"\n\n";
	cout<<"Name : "<<Name<<endl;
	cout<<"Identity card : "<<id<<endl;
	cout<<"Telephone number : +60"<<nophone<<endl;
	cout<<"Home Address : "<<HomeAddress<<endl;
	cout<<"OfficeAdress : "<<OfficeAddress<<endl;
	cout<<"Email : "<<EmailAddress<<endl;
	cout<<"Password : "<<password<<endl;
	cout<<"Registered ID : "<<registerID;
	cout<<endl<<endl;
	
}

int registration :: get_register_id ()
{
	return registerID;
}

string registration :: getemail ()
{
	return EmailAddress;
}

string registration :: getpassword ()
{
	return password;
}

int registration :: keepregisterID (int regid)
{
	return registerID = regid;
}

void registration :: modifydata ()
{
	cin.ignore();
	cout <<"Please Enter your Name : ";
	getline(cin, Name);
	cout <<"\nPlease Enter your identity card number without dash : ";
	cin >> id;
	cout <<"\nPlease enter your telephone number +60 - ";
	cin >> nophone;
	cin.ignore();
	cout <<"\nPlease enter your home address : \n";
	getline(cin, HomeAddress);
	cout <<"\nPlease enter your office address if you have one : \n";
	getline(cin, OfficeAddress);
	cout <<"\nPlease enter your email here : ";
	getline(cin, EmailAddress);
	cout <<"\nPlease Enter your password : ";
	getline(cin, password);
	cout<<endl<<endl;
	registerID = get_register_id ();
	
}

