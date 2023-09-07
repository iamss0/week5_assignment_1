// Calculate the product of all the elements in the given array.
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

    int product = 1;// initializing a variable to store product
    //for loop to calculate product
    for(int i =0; i<=n-1; i++){
        product *= arr[i];
    }
    cout<<"The product of all the elements of the array is: "<<product;
}