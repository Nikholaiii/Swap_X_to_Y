#include <string>
#include <iostream>
#include <ctime>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	int x;
	int y;
	x = 50;
	y = 20;
	cout << "X =  " << x << "\ty =  " << y << endl;
	y = x + y;
	x = y - x;
	y = y - x;
	cout << "X =  " << x << "\ty =  " << y << endl;
	system("pause");
	return 0;
}