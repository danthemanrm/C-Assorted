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
