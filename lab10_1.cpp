#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	double l , r , p, IT , TT;
	int i = 0 ;
	cout << "Enter initial loan: ";
	cin >> l ;
	cout << "Enter interest rate per year (%): ";
	cin >> r ;
	cout << "Enter amount you can pay per year: ";
	cin >> p ;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect

	while(l > 0)
	{
		IT = l*r/100 ;
		TT = l + IT ;
		cout << fixed << setprecision(2); 
		cout << setw(13) << left << i+1; 
		cout << setw(13) << left << l;
		cout << setw(13) << left << IT;
		cout << setw(13) << left << TT;
		if (TT <= p)
		{
			p = TT;
			l = TT - TT;
			cout << setw(13) << left << p;
			cout << setw(13) << left << l;
			break;
		}
		cout << setw(13) << left << p;
		l = TT - p ;
		cout << setw(13) << left << l;
		cout << "\n";
		i++;
	}
	return 0;
}
