#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[], int l, int r){
    //base condition
    if(l<r) {
    //swap l and r and then calling fn. again till the bc is reached 
    swap(arr[l], arr[r]);

    reverse(arr, l+1, r-1);
    }
}
void printArray(int arr[], int n) {
   cout << "The reversed array is:- " << endl;
   for (int i = 0; i < n; i++) {
      cout << arr[i] << " ";
   }
}

int main(){
    int arr[]={1, 3, 5, 6};
    int n= 4;
    printArray(arr, n);
    reverse(arr, 0, n-1);
    printArray(arr, n);
    
    return 0;
}