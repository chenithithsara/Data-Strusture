#include <iostream>
#include <vector>

using namespace std;

void insertion(int arr[] , int n){
    for (int i=1 ; i<n ; i++){
        int key = arr[i];
        int j = i-1;
        while (j>=0  && arr[j]>key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}


void display (int arr[] , int n){
    for (int i=0 ; i<n ; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int n;
    cout << "Enter the number of elements : ";
    cin >> n;
    cout << "Enter the array : ";

    int arr[n];
    for (int i=0 ; i< n ; i++){
        cin >> arr[i];
    }
    insertion(arr,n);
    display(arr,n);


    return 0;
}