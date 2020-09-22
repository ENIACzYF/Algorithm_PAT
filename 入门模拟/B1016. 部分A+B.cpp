#include <iostream>
using namespace std;

int get_Px(int x, int Dx)
{
	int Px = 0;
	int counter = 1; //用来辅助统计Dx需要的位数
	while (x != 0)
	{
		int tmp;
		tmp = x % 10;
		x /= 10;
		if (tmp == Dx)
		{
			Px += (counter * Dx);
			counter *= 10;
		}
	}

	return Px;
}

int main()
{
	int A, PA, PB, DA, B, DB; //Dx is in, Px is out
	cin >> A >> DA >> B >> DB;
	PA = get_Px(A, DA);
	PB = get_Px(B, DB);
	cout << (PA + PB);
	return 0;
}