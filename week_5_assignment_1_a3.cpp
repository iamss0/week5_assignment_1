// Find the minimum value out of all elements in the array.

#include<iostream>
#include<climits>
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
    
    int min_num = INT_MAX;//initilaizing the largest num with a very large int value


    for(int i =0; i<=n-1; i++){
        if(min_num>arr[i]) min_num = arr[i];
    }
    
    cout<<"Smallest num is: "<<min_num;
}