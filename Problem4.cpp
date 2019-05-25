#include <iostream>
#include <conio.h>
#include <math.h>
#include <cstdlib>
#include <cmath>
#include <iomanip>


using namespace std;

int main()
{
	int count;
	
	cout << "\t ________________________________ " << endl;
	cout << "\t|                                |" << endl;
	cout << "\t|      Lets start counting...    |" << endl;
	cout << "\t|________________________________|" << endl;
	
	for (count = 1; count <= 30; count ++)
	{
		if (count > 10)
		{
			
			count = 1 + count;
			cout << count << ",";
			
		}
		
		
		else
		{
			
			cout << count << ",";
			
		}
	}
	
	cout << "\b ";
	
	
	_getch();
	return 0;
}
