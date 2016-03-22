#include "bmi.h"
#include <fstream>


using namespace std;
int main()
{
	float weight_kg;
	float height_cm;
	BMI bmi;
	float B;
	string CAT;
	
	

	ifstream inFile("file.in",ios::in);
	if(!inFile)
	{
		cerr<<"Failed opening"<<endl;
		exit(1);
	}

	ofstream outFile("file.out",ios::out);
	if(!outFile)
	{
		cerr<<"Failed opening"<<endl;
		exit(1);
	}

	
	while(1)
	{

	inFile>>height_cm>>weight_kg;
	

	if(height_cm==0&&weight_kg==0)
	break;
	

	bmi.setheight(height_cm);
	bmi.setweight(weight_kg);

	
	B=bmi.getbmi();
	CAT=bmi.category(B);

	outFile<<B<<"  "<<CAT<<endl;
	
	}
}
	
	
	

