#include<iostream>

using namespace std;

int main() {
    int arr[] = {10,9,20,48,2};
    int size = sizeof(arr) / sizeof(arr[0]);


    for(int i = 1; i < size; i++) {
        if(arr[0] < arr[i]) {
            arr[0] = arr[i];
        }
    } 

    cout<<arr[0] << " ";

    

    return 0;
}