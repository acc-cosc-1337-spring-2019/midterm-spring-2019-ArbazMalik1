#include <string>
#include <vector>
#include <iostream>
#include <algorithm>   
#include "dna_consensus.h";

using namespace std;

int main()
{
	int x;
	int countA = 0, countT = 0, countC = 0, countG = 0;
	vector<int> A;
	vector<int> T;
	vector<int> C;
	vector<int> G;
	string consensus;
	cout << "Vector: " << endl;
	vector<vector<char> > vect{ { 'A', 'T', 'C', 'C', 'A', 'G', 'C', 'T' },
								{ 'G', 'G', 'G', 'C', 'A', 'A', 'C', 'T' },
								{ 'A', 'T', 'G', 'G', 'A', 'T', 'C', 'T' },
								{ 'A', 'A', 'G', 'C', 'A', 'A', 'C', 'C' },
								{ 'T', 'T', 'G', 'C', 'A', 'A', 'C', 'T' },
								{ 'A', 'T', 'G', 'C', 'C', 'A', 'T', 'T' },
								{ 'A', 'T', 'G', 'G', 'C', 'A', 'C', 'T' }, };
	
	for (int i = 0; i < vect.size(); i++) {
		for (int j = 0; j < vect[i].size(); j++)
		{
			cout << vect[i][j] << " ";

			if (vect[i][j] == 'A')
				countA = countA + 1;
			if (vect[i][j] == 'C')
				countC = countC + 1;
			if (vect[i][j] == 'G')
				countG = countG + 1;
			if (vect[i][j] == 'T')
				countT = countT + 1;

			/*
			A.push_back(countA);
			C.push_back(countC);
			G.push_back(countG);
			T.push_back(countT);
			*/
			
			
		} 

		cout << endl;
		cout << "consensus ";
		if (countA >= maximum(countC, countG, countT))
			cout << "A" << endl;
		else if (countC >= maximum(countA, countG, countT))
			cout << "C" << endl;
		else if (countG >= maximum(countA, countC, countT))
			cout << "G" << endl;
		else if (countT >= maximum(countA, countC, countG))
			cout << "T" << endl;
	}
		
		cin >> x;
}