#include<iostream>
using namespace std;

void print_Subarrays(int arr[], int size) {
     for(int i = 0; i < size; i++) {
        for(int j = i; j < size; j++) {
            for(int k = i; k <= j; k++) {
                cout<<arr[k] << "  ";
            }
            cout<< endl;
        }
    }
}


int main() {

    int arr[] = {1,2,3,4};
    int size = sizeof(arr) / sizeof(int);

    print_Subarrays(arr,size);



    return 0;
}

// Time complexity : O(N^3)