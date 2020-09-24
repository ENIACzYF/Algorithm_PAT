#include <iostream>
#include <stdio.h>
using namespace std;

const int CLK_TCK = 100;
int main()
{
	int C1, C2;
	cin >> C1 >> C2;
	int time;
	time = (C2 - C1) / CLK_TCK;

	if (((C2 - C1) % CLK_TCK) != 0)
		time++;

	int hour, minute, second;
	hour = time / 3600;
	time = time - hour * 3600; //减去小时部分
	minute = time / 60;
	time = time - minute * 60; //减去分钟部分,剩下的time就是秒
	second = time;
	printf("%2.d:%2.d:%2.d", hour, minute, second);
	return 0;
}