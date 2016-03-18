#include "bmi.h"
#include <cmath>
#include <cstdlib>
#include <iostream>
using namespace std;
void BMI::setheight(int h){
	height = h;
}

void BMI::setmass(int m){
	mass = m;
}

void BMI::setbmi(){
	height = height/100;
	bmi = mass/pow(height,2);
	if(height == 0 && mass == 0){
		exit(1);
	}
}

float BMI::getbmi(){
	return bmi;
}

void BMI::setrange(){
	if(bmi<15){
		range = "Very severly underweight";
	}
	else if(bmi>=15 && bmi <16){
		range = "Severely underweight";
	}
	else if(bmi>=16 && bmi<18.5){
		range = "Underweight";
	}
	else if(bmi>=18.5 && bmi<25){
		range = ("Normal");
	}
	else if(bmi>=25 && bmi<30){
		range = "Overweight";
	}
	else if(bmi>=30 && bmi<35){
		range = "Obese Class I (Moderately obese)";
	}
	else if(bmi>=35 && bmi<40){
		range = "Obese Class II (Severely obese)";
	}
	else if(bmi>=40){
		range = "Obese Class III (Very severely obese)";
	}
	
}
string BMI::getrange(){
	return range;
}
