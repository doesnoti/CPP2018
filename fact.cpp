#include <iostream>
#include <cstdlib>

using namespace std;

void fact(int a)
{
	int b = 1;
	if (a == 0){
		cout << b << endl;
		return;
	}
	if (a > 0){
		for(int i = 1; i <= a; i++)
			b *= i;
	}else
		{
			cout << "Error, the number is less than zero" << endl;
			return;
		}
	cout << b << endl;
}

void testF()
{
	fact(2);
	fact(3);
	fact(-4);
	fact(3);
	fact(0);
}

int main()
{
  testF();
}
