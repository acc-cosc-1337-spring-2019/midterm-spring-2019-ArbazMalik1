#include <string>
#include <iostream>
#include "dna_hamming.h"

using namespace std;

int main() 
{
	int i, distance;
	int str1_size, str2_size;
	string str1, str2;
	char userprompt;

	do
	{
		distance = 0;
		cout << "Enter string 1: ";
		std::cin >> str1;
		cout << "You entered: " << str1 << endl;
		str1_size = str1.length();

		cout << "Enter string 2: ";
		cin >> str2;
		cout << "You entered: " << str2 << endl;
		distance = get_dna_hamming_distance(str1, str2);
		cout << "distance will be " << distance << endl;
		
		cout << "Do you want to continue? (Y/N)";
		cin >> userprompt;
	} while(userprompt == 'y' || userprompt == 'Y');

	return 0;
}