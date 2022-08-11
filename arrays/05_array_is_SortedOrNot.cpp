#include<iostream>

using namespace std;

bool is_Sorted(int arr[], int size) {
    if(size == 0) {
        return true;
    }
    for(int i = 1; i < size; i++) {
        if(arr[i-1] > arr[i]) {
            return false;
        } 
    } return true;
}

int main() {

    int arr[] = {10,20,30};
    int size = sizeof(arr) / sizeof(arr[0]);



    if(is_Sorted(arr,size)) {
        cout<<"Ayyay is Sorted" << " ";
    } else {
        cout<<"Array is not sorted";
    }


    return 0;
}


