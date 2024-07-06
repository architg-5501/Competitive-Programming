#include<iostream>
using namespace std;
int main()
{
	char n;
	cout << "enter grade from a - f" << endl;
	cin >> n ; 
		switch (n) {
		case 'a':cout << "a"; break;
		case 'b':cout << "b"; break;
		case 'c':cout << "c"; break;
		case 'd':cout << "d"; break;
		case 'e':cout << "e"; break;
		case 'f':cout << "f"; break;
		default:cout << "invalid";
			return 0;
		}
}