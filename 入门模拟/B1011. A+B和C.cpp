#include <iostream>
using namespace std;

int main()
{
	int A, B, C;
	int T;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		cin >> A >> B >> C;
		if ((A + B) > C)
			cout << "Case#" << i + 1 << ":true" << endl;
		else
			cout << "Case#" << i + 1 << ":false" << endl;
	}
	return 0;
}