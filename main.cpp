#include <iostream>
#include <cstdlib>
#include <fstream>
#include "bmi.h"
#include <cstdlib>
#include <iomanip>
int main(){
	int height;
	int mass;
	BMI bmi1;
	
	ifstream inFile("file.in",ios::in);
	ofstream outFile("file.out",ios::out);
	if(!inFile || !outFile){
		cerr<<"Failed opening"<<endl;
		exit(1);
	}

	while(inFile>>height>>mass){
		bmi1.setheight(height);
		bmi1.setmass(mass);
		bmi1.setbmi();
		bmi1.setrange();
		outFile<<setprecision(4)<<bmi1.getbmi()<<"\t"<<bmi1.getrange()<<endl;
	}
}
