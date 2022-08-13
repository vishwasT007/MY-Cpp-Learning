#include <iostream>
using namespace std;
 
int main()
{
    int x = 15;
    int &y = x;

    cout<<y <<endl;
    x += 20;
    cout<<x <<endl;
    cout<<y << " hm";
 
    return 0;
}