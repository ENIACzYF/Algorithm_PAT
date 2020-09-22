#include <iostream>
using namespace std;

int main()
{
	int n;
	int step_count = 0;
	cin >> n;
	while (n != 1)
	{
		if (n % 2 == 0) 
		{
			n /= 2;
		}
		else
		{
			n = (3 * n + 1) / 2;
		}
		step_count++;
	}
	cout << step_count;
	return 0;
}