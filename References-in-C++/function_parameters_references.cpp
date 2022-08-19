#include <iostream>
using namespace std;

int fun_references(int &x) { // using references we have created alias of x variable
    return x += 20;
}

int main()
{
	int x = 10;

    fun_references(x);
    cout<<x << endl; // reference get reflected

	return 0;
}
