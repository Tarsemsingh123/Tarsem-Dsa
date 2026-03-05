#include<iostream>
using namespace std; 

int main(){
    int target=8;
    int arr[5]={3,4,5,6,8};
    int index=-1;
    for(int i=0;i<5;i++){
        if(arr[i]==target){
            index=i;
          break;
        }
    }
    cout<<index;


return 0;
}
