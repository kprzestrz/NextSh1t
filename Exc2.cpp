#include <iostream>
using namespace std;

int main()
{
	int a;
	cout << "Prosze podac dlugosc: \n";
	cin >> a;
	cout << "\n\n/   \/   \ \n" << "\__    __/ \n";
	
	for (int i; i < a;a++)
	{
		cout << "  |    |   \n";
	}
	cout << "  \__]_/";
	cout << "\n\n Dlugosc Twojego siusiaka to: " << a << " jednostek.";
}
