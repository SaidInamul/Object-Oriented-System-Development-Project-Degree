#ifndef RESULT_H
#define RESULT_H
#include <iostream>
#include <conio.h>
#include <cassert>
#include <string>
#include "permit.h"
#include <vector>
using namespace std;
class Result
{
	vector <Permit> resultPermit;
	
	public :
		
		void Display_result (vector <Permit> resultPermit);
	
};
#endif
