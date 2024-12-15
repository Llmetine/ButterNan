#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	double loan,rate,pay,total,prev,inter,nb;
	int year=1;
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> rate;
	cout << "Enter amount you can pay per year: ";
	cin >> pay;

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
	prev=loan;
	do{
	
	inter=prev*(rate/100);
	total=prev+inter;
	nb=total-pay;
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << year; 
	cout << setw(13) << left << prev;
	cout << setw(13) << left << inter;
	cout << setw(13) << left << total;
	if(pay>=total){
		cout << setw(13) << left << total;
		cout << setw(13) << left << "0.00";
		break;
	}
	cout << setw(13) << left << pay;
	cout << setw(13) << left << nb;
	cout << "\n";	
	prev=nb;
	year++;
	}
	while(nb>=0);
	return 0;
}
