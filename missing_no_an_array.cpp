#include<iostream>
using namespace std; 

int main(){
 
    int arr[5]={1,3,4,5,6};
    int sum=0;
    for(int i=0;i<5;i++){
        sum+=arr[i];
        
    }
    cout<<"The sum of array"<<" ";
    cout<<sum<<endl;
    int n=6;
    int ans= n*(n+1)/2;
    cout<<"the missing element of an array is:";
    cout<<ans-sum;
return 0;
}