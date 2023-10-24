#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <ctime>


using namespace std;

int main()
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	
	srand(time(0));
	
	const int size = 10;
	int arr[size];
	//for (size_t i = 0; i < size; i++)
	//{
	//	arr[i] = -10 + rand()%20;
	//}
	for (size_t i = 0; i < 10000000; i++)
		
	{
		SetConsoleTextAttribute(hConsole, 10);
		cout << char(rand() % 255) << '\t';
		for (size_t i=0; i < 1000000; i++)
		{ }
	}
	cout << endl;
	return  0;
}
