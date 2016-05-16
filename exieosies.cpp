#include <iostream>
using namespace std;

int main()
{
	char array[][] = {}; //initialises 2D matrix, will be either x or o
	int user = 1;
	int answer;
	while (true)
	{	
		cout << "3 " << array[0][2] << " | " << array[1][2] << " | " << array[2][2] << endl;
		cout << "  _________" << endl;
		cout << "2 " << array[0][1] << " | " << array[1][1] << " | " << array[2][1] << endl;
		cout << "  _________" << endl;
		cout << "1 " << array[0][0] << " | " << array[1][0] << " | " << array[2][0] << endl;
		cout << " 1    2    3 << endl;
		
		if (user % 2 != 0)
		{
			usrl = x;
		}
		else
		{
			usrl = y;
		}
		
		cout << "x, enter your answer as xy << endl;
		cin >> answer;
			
		array[answer % 100 / 10][answer % 10] = usrl;
		
		//if (array[0][0] == array[0][1] == array[0][2] or array[1][0] == array[1][1] == array[1][2] or array[2][0] == array[2][1] == array[2][2] or array
		++user;
	}
}
