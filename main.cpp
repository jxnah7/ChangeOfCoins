
#include <typeinfo>
#include <iostream>

using namespace std;

void coinChanger(int cents, int & c25, int & c10, int & c05, int & c01, int & coincount);
void printChange(int cents, int c25, int c10, int c05, int c01, int coincount);


int main()
{
	int amount, count25, count10, count5, count1, count;

	cout << "Enter amount in cents to be returned as change: ";

	cin >> amount;

    coinChanger(amount, count25, count10, count5, count1, count);

    printChange(amount, count25, count10, count5, count1, count);
	
	return 0;
}

void coinChanger(int cents, int & c25, int & c10, int & c05, int & c01, int & coincount)
{
    c25 = cents / 25;
    cents = cents % 25;
    
    c10 = cents / 10;
    cents = cents % 10;
    
    c05 = cents / 5;
    c01 = cents % 5;
    
    coincount = c25 + c10 + c05 + c01;
}

void printChange(int cents, int c25, int c10, int c05, int c01, int coincount)
{
    cout << endl << "You need to use " << coincount << " for a change of " << cents << " cents:" << endl;
    cout << c25 << " Quarters" << endl;
    cout << c10 << " Dimes" << endl;
    cout << c05 << " Nickels" << endl;
    cout << c01 << " Pennies" << endl;
}
