#ifndef PERMIT
#define PERMIT
#include <iostream>
#include <conio.h>
#include <cassert>
#include <string>
#include <ctime>
#include <cstdlib>
#include "applicationfrm.h"
#include "covid19.h"
using namespace std;
class Permit
{
	ApplicationFrm Form1;
	Covid19Evaluation testCOVID19;
	int Permit_ID;
	string result;
	public :
		int get_permit_id ()
		{
			return Permit_ID;
			
		}
		
		void application ()
		{
			srand(time(0));
			int random_number = (rand () % 30) + 1;
				
			Permit_ID = random_number;
			cout <<endl;
			Form1.answerfrm();
			cout <<endl;
			testCOVID19.selfAssessment ();
			
			cout <<"Your Permit ID : "<<Permit_ID<<endl;
			return;
			
		}
		
		void covid19_Result ()
		{
			int id, i;
			cout <<"Please enter test ID : ";
			cin >> id;
			here :
			if (id == testCOVID19.get_testID())
			{
				cout <<"Covid-19 result : "<<testCOVID19.Evaluate(id);
				
			}
		}
		
		
		void print () 
		{
			cout <<"Permit ID is : "<<Permit_ID<<endl;
			Form1.print();
			cout<<endl;
			testCOVID19.print ();
		}
		
		void set_Result (string result_fromDCO)
		{
			result = result_fromDCO;
		}
		
		string application_result ()
		{
			return result;
		}
};
#endif

