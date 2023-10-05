#include <iostream>
#include <string>
using namespace std;

void Test_001() 
{
	int n;
	string nums;

	cin >> n;
	cin >> nums;

	int sum = 0;

	for (int i = 0; i < n; i++)
	{
		sum += nums[i] - '0';
	}

	cout << sum << endl;
}

void Test_002() 
{
	int n = 0;
	int scores[1000];
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> scores[i];
	}

	long sum = 0;
	long max = 0;

	for (int i = 0; i < n; i++)
	{
		if (scores[i] > max)
			max = scores[i];

		sum += scores[i];
	}

	double result = sum * 100.0 / max / 3;

	cout.precision(5);
	cout << result << endl;
}

int main()
{
	Test_002();
}
