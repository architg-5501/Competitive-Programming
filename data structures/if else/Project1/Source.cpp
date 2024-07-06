#include<iostream>
using namespace std;
int main()
{
	float amt, disc, total;
	cout << "enter the amount";
	cin >> amt;
	if (amt > 3000)
		disc = 10;
	else
		disc = 5;
	total = amt * disc / 100;
	cout << endl << "total amount to be paid" << total;
	return 0;
}