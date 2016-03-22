#include <string>
#include <iostream>
#include <cstdlib>
using namespace std;

class BMI
{
	public:
		void setweight(float weight_kg);
		void setheight(float height_cm);
		void setbmi();

		float getweight();
		float getheight();
		float getbmi();
		string category(float bmi);
	private:
		float h;
		float w;
		float bmi;
};



