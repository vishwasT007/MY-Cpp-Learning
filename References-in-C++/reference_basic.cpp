#include <iostream>
using namespace std;

int main()
{
	int x = 10, y = 20;
    int &z = x;

    cout<< z << endl;

    z = y;
    z = z + 5;

    cout<< x << " " << y << " " << z << " " << endl;

	return 0;
}
