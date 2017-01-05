/*============================================================================
Name        : Basics - Iterations.cpp
Author      : Matt Murphy
Contact		: mqm5507@gmail.com
Created		: 04 January 2017
Version     : 1.0
Description : Repeatedly prints a statement based on user input.
Known Issues: None
	- Note: Application has been developed on a Linux operating system. There
		are no apparent problems executing the code on other operating
		systems, but if an issue does arise in regards to compiling, please
		contact me and let me know.
Build		:
	- Open the terminal and navigate to the application folder.
	- Build the file by running 'make'.
	- Run the program with './basics-iterations'. The program will run in the
		terminal.
============================================================================*/
#include <iostream>
using namespace std;

int main() {

	string phrase;
	int iter;

	cout << "What do you want to say? ";
	cin.ignore();
	getline(cin, phrase);

	cout << "How many times shall it be said? ";
	cin >> iter;

	for (int i = 0; i < iter; ++i) {

		cout << phrase << endl;
	}

	cout << endl << "Thank you for trying." << endl;
	return 0;
}
