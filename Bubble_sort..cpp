#include <iostream>
using namespace std;

void bubbleSort(int arr[] , int n){
    for (int i=0 ; i<n-1 ; i++){
        bool swapped = false;
        for (int j=0 ; j<n-i-1 ; j++){
            if (arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if (!swapped){
            break;
        }
    }
}

void display(int arr[] , int n){
    for (int i=0 ; i<n ; i++){
        cout << arr[i] <<  " ";
    }
}

int main(){
    int n;
    cin >> n;

    int arr[n];
    int x;

    for (int i=0 ; i<n ; i++){
        cin >> x;
        arr[i] = x;
    }

    bubbleSort(arr , n);

    display(arr , n);
    cout << "Im chenith Ithsara";
}