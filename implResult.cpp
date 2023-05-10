#include "result.h"

void Result :: Display_result (vector <Permit> resultPermit)
{
	int size = resultPermit.size();
	int permitID;
	
	again :
		
	cout <<"\nPlease enter your Permit ID to continue :  ";
	cin >> permitID;
	
	for (unsigned int i = 0; i < size; ++i)
	{
		if (permitID == resultPermit[i].get_permit_id ())
		{
			resultPermit[i].print ();
			cout <<"\n\nResult : \n"<<resultPermit[i].application_result();
			return;
		}
	}
	
	cout <<"\n\nPermit ID is invalid. Try again\n";
	goto again;
}
