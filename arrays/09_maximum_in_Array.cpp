#include<iostream>
#include <algorithm>  

using namespace std;

// Wrost logic ever

// int maximum_in_an_array(int arr[], int size) {

//     sort(arr, arr + size);

//     int maximum;

//     for(int i = 0; i < size; i++) {
//         maximum = arr[size - 1];
//     }

//     return maximum;

// }

// logic 1

int maximum_in_an_array(int arr[], int size) {
    for(int i = 1; i < size; i++) {
        if(arr[0] < arr[i]) {
            arr[0] = arr[i];
        }
    }
    return arr[0];
}

// logic 2

// int maximum_in_an_array(int arr[], int size) {
//     int maximum;
//     for(int i = 0 ; i < size; i++) {
//         maximum = *max_element(arr, arr + size);
//     }

//     return maximum;
// }

int main() {

    int arr[] = {1,4,2,8,100};

    int size = sizeof(arr) / sizeof(arr[0]);

    cout<< maximum_in_an_array(arr, size) << " ";



    return 0;
}