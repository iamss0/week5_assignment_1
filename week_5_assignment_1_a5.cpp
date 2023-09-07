//WAP to find the smallest missing positive element in the sorted Array that contains only positive elements.

#include<iostream>
using namespace std;
int main(){
    int sorted_arr[7] = {1,2,4,5,6,90,100};
    int x = 1;
    for(int i=0;i<=6;i++){
        if(x!=sorted_arr[i]){
            cout<<x<<endl;
            break;
        }
        else{
            x++;
        }
    }
    
}