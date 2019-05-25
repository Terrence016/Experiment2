#include <iostream>
#include <conio.h>
#include <math.h>
#include <cstdlib>
#include <cmath>


using namespace std;

int main() 
{
	char p;
	int firstt, secondt;

	cout << " ________________________________________________________________ " << endl;	
	cout << "|          Choose a package for your subscription                |" << endl;
	cout << "|  > Package A                                                   |"<< endl;
	cout << "|  > Package B                                                   |"<< endl;
	cout << "|  > Package C                                                   |"<< endl;
	cout << "|________________________________________________________________|" << endl;
	cout << "\n";
	cout << "You pick: "<< endl;
	
	cin >> p;
	cout << "\n";	
	
		if (p =='A'|| p =='a') 
		{
			
			
			cout << "Enter the number of hours: ";
			cin >> firstt;

			if (firstt<=10)
				cout << "You are going to have a total amount for the month is 995 pesos";
				
				
			else 
				cout << "You are going to have a total amount of " << 995+((firstt-10)*20) << " pesos";
				
				
		}
		
		
		
		else if (p =='B'|| p =='b')
		{
			
			
			cout << "Enter your number of hours: ";
			cin >> secondt;

			if (secondt<=20)
				cout << "You are going to have a  total amount for the month is 1495 pesos";
			else 
				cout << "You are going to have a  total amount of " << 1495+((secondt-20)*10) << " pesos";
		}
		
		
		
		else if (p =='C'|| p =='c')
			cout << "You are going to have a  total amount of 1995 pesos for this month.";
		
		
		
		else
			cout << "Your choice is invalid!";
	
	
	
	
	
	_getch();
	return 0;

}
