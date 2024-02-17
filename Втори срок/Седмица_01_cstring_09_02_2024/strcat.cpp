#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	// Define a char array
	char example[100];

	// Copy the first char array into the example array
	strcpy(example, "Hello");

	// Concatenate this char array to the end of the first one
	strncat(example, " Students!", 5);

	// Display the concatenated char arrays
	cout<<example;

	return 0;
}
