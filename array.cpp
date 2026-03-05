#include<iostream>
using namespace std; 

int main(){
    // how to initilize an array
    // first 
    // first program in c++
    cout<<"hello world"<<endl;
    int arr[5]={3,4,5,6,7};
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    //second method
 
    int arr[6],i;
    for(int i=0; i<5;i++){
        cin>>arr[i];
    }
    for(int i=0; i<5;i++){
     cout<<arr[i];

    }
      
return 0;
}