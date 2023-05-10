#ifndef APPLICATIONFORM
#define APPLICATIONFORM
#include <iostream>
#include <conio.h>
#include <cassert>
#include <string>

using namespace std;

class ApplicationFrm
{
	
		int form_id;
		string travelpurpose;
		string start_destination;
		string end_destination;
		string transportation;
		string date;
		string travel_history;
		
		public :

			ApplicationFrm ()
			{
				
			}
			
			~ApplicationFrm ()
			{
				cout <<endl<<"Delete object"<<endl;
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
















/*

#include "AppForm.h"
#include "co19.h"
#include "pmit.h"
#include <iostream>

int main ()
{
	ApplicationFrm form1;
	form1.answerfrm();
	Covid19Evaluation test1;
	test1.selfAssessment ();
	Permit permit1 (15, form1, test1);
	permit1.print();
	cout <<endl<<endl;
	cout <<"The result of the self-assessment is : "<<test1.Evaluate(1);
	cout <<endl<<endl;
	
	return 0;
	
}*/
