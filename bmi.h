#include <string>
using namespace std;
class BMI{
	private:
		float height;
		int mass;
		float bmi;
		string range;
	public:
		void setheight(int h);
		void setmass(int m);
		void setbmi();
		float getbmi();
		void setrange();
		string getrange();
};
