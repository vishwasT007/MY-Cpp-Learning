#include<iostream>
using namespace std;

int linear_Search(int arr[], int size, int key) {

    for(int i = 0; i < size; i++) {
        if(arr[i] == key) {
            return i;
        }
    }
    //out of the loop
    return -1;   
}

int main() {

    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(arr) / sizeof(int);
    int key = 13;

    int index = linear_Search(arr,size,key);

    if(index != -1) {
        cout<<key << " is present at index " << index << endl;
    } else {
        cout<<key << " is not found!! " << endl;
    }

    // time complexity O(N) 



    return 0;
}