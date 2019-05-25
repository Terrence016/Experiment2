#include <iostream>
#include <conio.h>
#include <math.h>
#include <cstdlib>
#include <cmath>
#include <iomanip>


using namespace std;

int main()
{

	int x , sum = 0;
	cout << " __________________________________________ "<<endl;
	cout << "|                                          |"<<endl;
	cout << "|       Input any positive integer         |"<<endl;
	cout << "|__________________________________________|"<<endl;
	cout << "\n\n";
	
	cout << "The number you choose is ";
	cin >> x;
	cout << "\n\n";
	

	while (x > 0)
	
	{
			for (int i = 1; i <= x; i++)
			{
				sum = (x * (x + 1)) / 2;
			}
		cout << "The summation of positive integers from 1 to " << x << " is " << sum << "." << endl;
		
		
		
		cout << " __________________________________________ "<<endl;
		cout << "|                                          |"<<endl;
		cout << "|       Input any positive integer         |"<<endl;
		cout << "|__________________________________________|"<<endl;
		cout << "\n\n";
	
		cout << "The number you choose is ";
		cin >> x;
		cout << "\n\n";
	}
	
	cout << "The number is not a positive integer so goodbye and thank you :)";

	_getch();
	return 0;
}
