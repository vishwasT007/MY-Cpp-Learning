#include <iostream>
using namespace std;

int main() {
    int k[5] ={};

    int size = sizeof(k) / sizeof(k[0]);

    for(int i = 0; i < size; i++) {
        int j = 2;
        cin>>k[i];
        cout<<k[i] << " Dekh lo " << endl;
        j = k[i];
        cout<<j<<" Kaisa laga mera majhaak ";
        j++;

    } 
  

    



    return 0;
}