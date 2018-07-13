#include <iostream>

using namespace std;

void Umntwo(int a)
{
	int p = 1;
	for (int i = 1; i <= a; i++)
	{
		cout << p << " ";
		p *= 2;
	}
	cout << endl;
}

int main()
{
	Umntwo(10);
	return 0;
}
