#include <iostream>
#include <string>
using namespace std;
int main()
{
	int age;
	float tall;
	int money;
	string status;
	cout << "Enter your age : ";
	cin >> age;
	if(age < 20)
	{
		cout << "Enter your tall : ";
		cin >> tall;
		if(tall < 160)
		{
			status = "UNFRIEND";
		}
		else
		{
			if(tall < 175)
			{
				status = "FRIEND";
			}
			else
			{
				cout << "Enter your money : ";
				cin >> money;
				if(money >= 69000000)
				{
					status = "MARRIED";
				}
				else
				{
					status = "ONE NIGHT STAND";
				}
			}
		}
	}
	else
	{
		if(age < 30)
		{
			cout << "Enter your money : ";
			cin >> money;
			if(money > 10000000)
			{
				status = "BEST FRIEND";
			}
			else
			{
				status = "UNFRIEND";
			}
		}
		else
		{
			status = "UNFRIEND";
		}
	}
	cout << status;

}
