#include<iostream>
#include<algorithm>

using namespace std;


int count_Distinct(int arr[], int size) {

    sort(arr, arr + size);
    int count = 0;
    for(int i = 0; i < size; i++ ) {
        while( i < size - 1 && arr[i] == arr[i + 1] ) {
            i++;
        }
        count++;
    }

    return count;

} 


int main() {

    int arr[] = { 10,20,10,30,10 };

    int size = sizeof(arr) / sizeof(arr[0]);
    
    cout<< "Count is " << count_Distinct(arr,size) << " ";

    return 0;
}