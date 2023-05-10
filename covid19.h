#ifndef COVID19EVALUATION
#define COVID19EVALUATION
#include <iostream>
#include <conio.h>
#include <cassert>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

class Covid19Evaluation
{
	
	int Test_ID;
	char illness;
	char close_contact;
	char travelled;
	string typeillness;
	
	public :

		Covid19Evaluation ()
		{
			Test_ID = 0;
			typeillness = "NO DISEASE";
		}
			
		Covid19Evaluation (char ID, char ill, char cc, char travell)
		{
			Test_ID = ID;
			illness = ill;
			close_contact = cc;
			travelled = travell;
			assert (Test_ID > 0 and Test_ID < 100);
			assert (illness == 'y' or illness == 'n');
			assert (close_contact == 'y' or close_contact == 'n');
			assert (travelled == 'y' or travelled == 'n');
		}
		
		string Evaluate (int Test_ID)
		{
			int level = 0;
			int check = 4;
			if (illness == 'y')
			{
				level = 2;
			}
			if (close_contact == 'y')
			{
				level++;
			}
			if (travelled == 'y')
			{
				level++;
			}
			if (level >= check)
			{
				return "Suspected";
			}
			else 
			{
				return "Fine";
			}
			
		}
		
		void selfAssessment ()
		{
			
			srand(time(0));
			int random_number = (rand () % 30) + 1;
				
			Test_ID = random_number;	
			cout <<"\nDo you experience any kind of disease (y/n) ?\n";
			cin >>illness;
			if (illness == 'y')
			{
				cin.ignore();
				cout <<"\nWhat type of disease that you are expriencing right now ? \n";
				getline(cin, typeillness);
				cout <<"Have you been in close contact with a confirmed case COVID-19 (y/n) ?\n";
				cin >>close_contact;
				cout <<"\nThe past 14 days, did you return from travel to red zone / high risk areas (y/n) ?\n";
				cin >>travelled;
				cout <<endl;
				cout <<"Thank you for answering the question with honesty\n";
			}
			else
			{
				cout <<"Have you been in close contact with a confirmed case COVID-19 (y/n) ?\n";
				cin >>close_contact;
				cout <<"\nThe past 14 days, did you return from travel to red zone / high risk areas (y/n) ?\n";
				cin >>travelled;
				cout <<endl;
				cout <<"Thank you for answering the question with honesty\n";
			}
		}
		
		int get_testID ()
		{
			return Test_ID;
			
		}
		
		void print ()
		{
			int id;
			id = Test_ID;
			cout <<"\nTest ID : "<<Test_ID;
			cout <<endl;
			if (illness == 'y')
			{
				cout <<"\nExperince any diseases : YES"<<endl;
				cout <<"Type of disease : "<<typeillness<<endl;
			}
			else
			{
				cout <<"\nExperince any diseases : NO"<<endl;
				cout <<"Type of disease : "<<typeillness<<endl;
			}
			
			if (close_contact == 'y')
			{
				cout <<"You have been in close contact with a confirmed case of COVID-19\n";
			}
			else
			{
				cout <<"You have not been in close contact with a confirmed case of COVID-19\n";
			}
			if (travelled == 'y')
			{
				cout <<"The past 14 days, you did return from travel to red zone / high risk areas\n";
			}
			else
			{
				cout <<"The past 14 days, you did not return from travel to red zone  high risk areas\n";
			}
			
			cout <<"Result from self-Assessment is : "<<Evaluate(id)<<endl;
		}
	
};
#endif
