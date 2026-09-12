#include<iostream>
using namespace std;

bool searching(int arr[] , int n , int  key){
    for (int i=0; i<n ; i++){
        if (arr[i]==key){
            return true;
         }       
    }
    return false;
 }
 int main(){
    int arr[10]={12,23,54,34,23,34,54,34,4,3};
    int key;
    cout<<"enter the number you want to find"<<endl;
    cin>>key;
    bool result=searching(arr , 10 , key);
    if (result){
        cout<<"number found"<<endl;
    }
    else{
        cout<<"number not found"<<endl;
    }
 }


