#include <iostream>
#include <conio.h>
#include <math.h>
#include <cstdlib>
#include <cmath>
#include <iomanip>


using namespace std;

int main()
{
	int x,y;
	const float z=2.5;
	float V;
	
	

	cout << "\t Enter the values for x: \n";
	cout << "\t x: ";
	cin >> x;
	
	cout << "\t Enter the values for y: \n";
	cout << "\t y: ";
	cin >> y;
	
	
	switch (x)
	{
		case 1:
		{
			
			if ( y <= 5)
			cout << setprecision(2) << fixed << "\t V = \n" << abs((x+y)/z);
			
			
			else
			cout << setprecision(2) << fixed << "\t V = \n" << x - sqrt(y+z);
			break;
			
		}
		
		case 2:
		{
			
			if ( y > 1 &&  y < 5)
			cout << setprecision(2) << fixed << "\t V = \n" <<  x*y*z;
			
			
			else
			cout << setprecision(2) << fixed << "\t V = \n" << (x+y)/z;
			break;
			
		}
		break;

	
		default:
	
		cout << setprecision(2) << fixed  << "\t V = " << x+y+z;
		break;

	}

	_getch();
	return 0;
}
