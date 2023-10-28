#include <iostream>
#include <string>

using namespace std;

string reversText(string Revers);

int main()
{
	string EnterText;


	cout << "Enter text " << endl;
	getline( cin, EnterText);

	cout << reversText(EnterText) << endl;





}

string reversText(string Revers)
{
	const size_t Chars{ Revers.length()};

	for (size_t i{}; i < Chars / 2; ++i)
	{
		char InputChar = Revers[i];
		Revers[i] = Revers[Chars - i - 1];
		Revers[Chars - i - 1] = InputChar;
	}

	return Revers;

}
