#include<iostream>
#include<climits>
using namespace std; 

int main(){
    
    // write a program to find min or max element an array
    int i;
    int arr[6]={31,42,5,6,17,80};
    int ans=INT_MIN;
    for(i=0;i<6;i++){
    if(arr[i]>ans){
        ans=arr[i];
    }
    
    }
    cout<<ans;



     int ans1=INT_MAX;
    for(i=0;i<6;i++){
    if(arr[i]<ans1){
        ans1=arr[i];
    }
    
    }
    cout<<ans1;



return 0;
}