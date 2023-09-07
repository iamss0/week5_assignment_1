// Find the second largest element in the given Array in one pass.

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
    
    int largest_num = INT_MIN;//initilaizing the largest num with a very small int value
    int slargest_num = INT_MIN;//initilaizing the second largest num with a very small int value


    for(int i =0; i<=n-1; i++){
        if(largest_num<arr[i]){
            slargest_num = largest_num;
            largest_num = arr[i];
        }
        else if(slargest_num<arr[i] && arr[i] != largest_num) slargest_num= arr[i];
    }
    
    cout<<"Second Largest num is: "<<slargest_num;
}