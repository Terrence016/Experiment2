#include <iostream>
#include <conio.h>
#include <math.h>
#include <cstdlib>
#include <cmath>
#include <iomanip>


using namespace std;

int main()


{
	int n, f, a, b;
	a = 0;
	b = 1;
	
	cout << "\t\t _______________________________ " << endl;
	cout << "\t\t|                               |" << endl;
	cout << "\t\t|       Fibonacci Numbers       |" << endl;
	cout << "\t\t|_______________________________|" << endl;
	
	cout << "\n\n";
	
	for (n=0; n <= 20; n++)
	{
		
		f = a + b;
		a = b;
		b = f;
		
		if (n==0)
		{
			cout << a << ", ";
			continue;
		}
		if (n==1)
		{
			cout << b << ", ";
			continue;
		}
		

		
		cout << f << ", ";
	}
	
	cout << "and on...";
	
	
	_getch();
	return 0;
}


