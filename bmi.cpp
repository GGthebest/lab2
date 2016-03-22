#include "bmi.h"

void BMI::setweight(float weight_kg)
{
	w=weight_kg;
}
void BMI::setheight(float height_cm)
{
	h=height_cm;

}

float BMI::getweight()
{
	return w;
}

float BMI::getheight()
{
	return h;
}


float BMI::getbmi()
{
	float bmi=w/(h*h/10000);
	return bmi;
}

string BMI::category(float bmi)
{
	string category;
	
	if(bmi<15)
	category="very underweight";
	
	else if(bmi>=15&&bmi<16)
	category="severely underweight";
	
	else if(bmi>=16&&bmi<18.5)
	category="underweight";
	
	else if(bmi>=18.5&&bmi<25)
	category="normal";

	else if(bmi>=25&&bmi<30)
	category="overweight";

	else if(bmi>=30&&bmi<35)
	category="obese class I(moderately obese)";

	else if(bmi>=35&&bmi<40)
	category="obese class II(severely obese)";

	else if(bmi>=40)
	category="obese class III(very severely obese)";

	return category;
}
