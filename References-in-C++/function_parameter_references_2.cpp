#include <iostream>
using namespace std;

void fun_references(const string s) { // using references we have created alias of x variable
    cout<<s;
}

int main()
{
	string s = "hey how are you";

    fun_references(s);
    // cout<<s << endl; // reference get reflected

	return 0;
}
