#include<iostream>
using namespace std;

int searchingmax(int arr[] , int n ){
    int max=-1;
    for (int i=0; i<n ; i++){
        if (arr[i]>max){
            max=arr[i];
         }       
    }
    return max;
 }

int main(){
    int ans;
    int arr[10]={1,2,3,4,5,4,3,2,1,0};
    ans=searchingmax(arr , 10 );
    cout<<ans<<endl;
   
  
    }
 
