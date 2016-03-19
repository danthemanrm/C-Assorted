#include <iostream>
using namespace std;

bool restart()
{
	cout << "do you want to restart? (y/n) ";
	char answer;
	cin >> answer;

	if (answer == 'y')
	{
		return true;
	}

	else if (answer == 'n')
	{
		return false;
	}

	else
	{
		cout << "you can only answer with y or n\n";
		restart();
	}
}

int main()
{
	int i=1;
	int fizz;
	int buzz;
	int number;

	cout << "What number do you want Fizz to be? ";
	cin >> fizz;

	cout << "What number do you want Buzz to be? ";
	cin >> buzz;

	cout << "What number do you want to Fizz Buzz to? ";
	cin >> number;

	while (i<=number)
	{
		if (i%fizz==0)
		{
			cout << "Fizz ";
		}

		if (i%buzz==0)
		{
			cout << "Buzz";
		}

		if (i%fizz!=0 && i%buzz!= 0)
		{
			cout << i;
		}

		cout << endl;
		i++;
	}

	if (restart()==true)
	{
		main();
	}
	return 0;
}
