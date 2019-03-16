
#include <string.h>
#include <iostream>
#include "dna_hamming.h"
/*
Write code for value-return function get_dna_hamming_distance with two const string
reference parameters that returns an int.


Problem
Figure 2. The Hamming distance between these two strings is 7. Mismatched symbols are 
colored red. Given two strings s and t of equal length, the Hamming distance between
s and t, denoted dH(s,t), is the number ofcorresponding symbols that differ in s and t.

Sample for function call 
int distance = get_dna_hamming_distance("GAGCCTACTAACGGGAT", "CATCGTAATGACGGCCT");

distance will be 7

*/


int get_dna_hamming_distance(const std::string str1, const std::string str2)
{
	int i, str1_size, str2_size, distance = 0;

	str1_size = str1.length();
	str2_size = str2.length();
	if (str1_size == str2_size)
	{
		for (i = 0; i < str1_size; i++)
		{
			if (str1[i] != str2[i])
				distance++;

		}
	}
	else
		std::cout << "Error: str1 and str2 not same size" << std::endl;

	return(distance);

}

