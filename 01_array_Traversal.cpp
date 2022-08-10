#include<iostream>

using namespace std;

int main() {
   
    int arr[] = {10,20,30,40,50};
    int size = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0; i <= size; i++) {
        cout<<arr[i]<<" ";
    }

    return 0;
}