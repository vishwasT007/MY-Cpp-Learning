#include<iostream>
using namespace std;

void printing_Pairs(int arr[], int size) {

    for(int i = 0; i < size; i++) {
        for(int j = i+1; j < size; j++) {
            cout<<arr[i] << "," << arr[j] << " " <<endl;
        }

        cout<<endl;
        
    }
    

}
//time complexity : O(N^2)

int main() {

    int arr[] = {1,2,3,4};
    int size = sizeof(arr) / sizeof(int);
    printing_Pairs(arr,size);


    return 0;
}