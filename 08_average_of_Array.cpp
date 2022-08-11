#include<iostream>

using namespace std;

double average_of_arrays(int arr[], int size) {
    int sum = 0;
    int average;

    for(int i = 0; i < size; i++) {
        sum += arr[i];
        average = sum / size;
    }

    return average;
}

int main() {

    int arr[] = {5, 3, 6, 7, 5, 3};

    int size = sizeof(arr) / sizeof(arr[0]);

    cout<< average_of_arrays(arr, size) << " ";


    return 0;
}