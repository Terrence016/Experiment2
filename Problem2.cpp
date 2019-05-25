#include <iostream>
#include <conio.h>
#include <math.h>
#include <cstdlib>
#include <cmath>


using namespace std;

int main()
{
	
	float tg, ub, unpaid, b;

	
	cout << " _______________________________________________________ " << endl;
	cout << "|                                                       |" << endl;
	cout << "|           Enter amount of consumed gallon             |" << endl;
	cout << "|_______________________________________________________|" << endl;
	cout << "\n";
	cout << "It is: ";
	cin >> tg;cout << " gallons";
	cout << "\n\n";
	
	cout << " _______________________________________________________ " << endl;
	cout << "|                                                       |" << endl;
	cout << "|                Enter unpaid balance                   |" << endl;
	cout << "|_______________________________________________________|" << endl;
	cout << "\n";
	cout << "It is: ";
	cin >> ub;cout << " pesos";
	cout << "\n\n";
		
	b = ( 1.10 * tg ) + 35;
	unpaid = 20 + ub ;
	cout<< "The unpaid balance is " << unpaid << " pesos" <<endl;
	
	
	
		if ( ub > 0 )
		{
			
			cout << "The amount to be paid along with the unpaid balance is " << unpaid + b << " pesos" << endl;
	
		}
		
		
		
			else if( ub == 0 )
		{
		
			cout << "The amount to be paid is " << b << " pesos" <<endl;
		
		}
		
		
		
			else
			
			cout<< "Invalid input. Sorry :(" << endl;
			
	
		
	_getch();
	return 0;	
}

