#include <iostream>
#include <ctime>
using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");

	srand(time(NULL));

	int const SIZE = 10;
	int arr[SIZE];

	for (int i = 0; i != SIZE; i++)
	{
		arr[i] = rand() % 10 + 1;
		cout << " ";
		cout << arr[i];
	}
}