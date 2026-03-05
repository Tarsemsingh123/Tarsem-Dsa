#include<iostream>
#include<climits>
using namespace std; 

int main(){
    //first max element found an array;
    int arr[7]={2,6,4,3,8,5,11};
    int ans=INT_MIN;
    for(int i=0;i<7;i++){
        if(arr[i]>ans){
            ans=arr[i];
          
        }
    }
    cout<<"the first maximum element on an array is:";
    cout<<ans<<endl;
    //second max element an array is
    int second=INT_MIN;
      
    for(int i=0;i<7;i++){
        if(arr[i]!=ans){
            second=max(second,arr[i]);
        }
    }
    cout<<" the second maximum element of an array is:";
    cout<<second;

return 0;
}