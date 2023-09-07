// Given an array, predict if the array contains duplicates or not.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    //input the elements of array
    for(int i =0; i<=n-1; i++){
        cout<<"Enter the element at index "<<i<<" : ";
        cin>>arr[i];
    }
    bool check = false;
    for(int i =0; i<=n-1; i++){
         for(int j =i+1; j<=n-1; j++){
            if(arr[i]==arr[j]) check=true;
         }
    }
    if(check == false) cout<<"No duplicate values";
    else cout<<"duplicate values exists";
}