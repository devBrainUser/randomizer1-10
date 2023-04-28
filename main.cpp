#include <iostream>
#include <ctime>  // connect new library
using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");

	srand(time(NULL)); 

	int const SIZE = 10; //setting const variable
	int arr[SIZE]; // make a massive

	for (int i = 0; i != SIZE; i++)
	{
		arr[i] = rand() % 10 + 1; // randomizer
		cout << " ";
		cout << arr[i];
	}
}