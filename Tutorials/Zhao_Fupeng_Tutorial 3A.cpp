#include <iostream>
#include <string>

using namespace std;

int main()
{
	double n1 = 7;
	double aRes = n1 / 3;
	// when transitioning from double to int, data value after the decimal is lost.
	int res = n1;
	// when using short int , it has max data value limit of 32767. - Overflow error may occur when using ++ onto a short int
	double z = 5.5;
	z = (int)z;
	// you can change your variable type.
	cout << "Your result is: " << res << endl << "In reality, your answer is actually: " << aRes <<endl;
	return 0;

}