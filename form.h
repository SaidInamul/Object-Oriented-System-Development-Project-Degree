#ifndef APPLICATIONFORM
#define APPLICATIONFORM
#include <iostream>
#include <conio.h>
#include <cassert>
#include <string>

using namespace std;

class ApplicationFrm
{
	
		string travelpurpose;
		string start_destination;
		string end_destination;
		string transportation;
		string date;
		string travel_history;
		
		public :

			ApplicationFrm ()
			{
				travelpurpose = "Empty";
				start_destination = "Empty";
				end_destination = "Empty";
				transportation = "Empty";
				date = "Empty";
				travel_history = "Empty";
			}
					
			void answerfrm ()
			{
				cin.ignore();
				cout <<"State your purpose for travelling.\n";
				getline(cin, travelpurpose);
				cout <<"State your start destination : \n";
				getline(cin, start_destination);
				cout <<"State your end destination : \n";
				getline(cin, end_destination);
				cout <<"State your transportation mode : ";
				getline(cin, transportation);
				cout <<"Date travel : ";
				getline(cin, date);
				cout <<"State your travel history : \n";
				getline(cin, travel_history);
			
			}
				
			void print () const
			{
				cout <<endl;
				cout <<"Travel purpose : "<<travelpurpose<<endl;
				cout <<"Start destination ("<<start_destination<<") and end destination ("<<end_destination<<")"<<endl;
				cout <<"Transportation mode : "<<transportation<<endl;
				cout <<"Date travel : "<<date<<endl;
				cout <<"Travel history : "<<endl<<travel_history;
				
			}
};
#endif

