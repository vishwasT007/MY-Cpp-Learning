#include<iostream>
using namespace std;

void array_Reverse(int arr[], int size) {
    int start = 0;
    int end = size - 1;

    while(start < end) {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

int main() {

    int arr[] = {10,20,30,45,60,80,90,100};
    int size = sizeof(arr) / sizeof(int);

    for(int i = 0; i < size; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    array_Reverse(arr,size);

    for(int i=0; i < size; i++) {
        cout<<arr[i] << " ";
    }
    cout<<endl;



    //Time Complexity : O(N)

    return 0;
}