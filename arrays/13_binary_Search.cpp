#include<iostream>
using namespace std;

int binary_Search(int arr[], int size, int key) {

    int start = 0;
    int end = size - 1;

    while(start <= end) {
        int mid = (start + end) / 2;
        if(arr[mid] == key ) {
            return mid;
        } else if(arr[mid] > key) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }

    }
    return -1;
}

int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(arr) / sizeof(int);

    cout<<size << endl;
    int key = 13;

    int index = binary_Search(arr,size,key);

    if(index != -1) {
        cout<<key << " is present at " << index << endl;
    } else {
        cout<<key << " is NOT Found!" <<endl; 
    }



    return 0;
}