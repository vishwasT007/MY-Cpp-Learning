#include <iostream>
using namespace std;

int main()
{
	int x = 10;
    int *p;

    p = &x; // address

    cout<< x << endl;
    cout<< p << endl;
    cout<< *p;
	return 0;
}
