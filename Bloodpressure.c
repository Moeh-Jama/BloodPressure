#include <stdio.h>
/*
	Author: Mohamed Jama.
	Student Number: 16355491
	Date: 01/02/17.
*/
void Systolic (double systolic, double Diastolic){
	// once we get the diastolic in the righ region we find the correct range of systolic range.
	//I made the diastolic limited so it would be the primary focus of the blood pressure type
	if(systolic<90 && Diastolic<=59)
	{
		printf("Low Blood Pressure");
	}
	else if(systolic<120 && Diastolic <=120)
	{

		printf("Ideal Blood Pressure");
	}
	else if(systolic<=140 && Diastolic <=140)
	{
		printf("Pre-High Blood Pressure");
	}
	else{
		printf("HIGH Blood Pressure");
	}
}

int main(void)
{
	//variables are created.
	double systolic, Diastolic;
	
	//have the user input the variable.
	printf("please enter the systolic measurements");
	scanf("%lf", &systolic);
	
	printf("Please enter the Diastolic measurements");
	scanf("%lf", &Diastolic);
	
	//focus on in the diastolic input.
	if(Diastolic<=59){
		//I created a function to then find the range, with a limiting diastolic range.
		Systolic(systolic, Diastolic);
	}
	else if(Diastolic<=79 &&  Diastolic>=60)
	{
		Systolic(systolic, Diastolic);
	}
	else if(Diastolic<=89 && Diastolic>=80)
	{
		Systolic(systolic, Diastolic);
	}
	else if(Diastolic>=90)
	{
		printf("High Blood Pressure");
	}
	
	return 0;
}
