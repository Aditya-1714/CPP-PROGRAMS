#include<iostream>
using namespace std;
int binarysearch(int arr[], int n, int key){
    int start =0;
    int end = n-1;
    while(start <=end){
        int mid = (start + end)/2;
        if (arr[mid] == key){
            
            return mid;
        }
        else if(key>arr[mid]){
            start = mid+1;
        }
        else {
            end=mid-1;
        }
        mid=(start+end)/2;
        
    }
    return -1;
}
int main(){
    int arr[5]={1,2,3,4,5};
    int brr[6]={4,5,6,7,8,9};
    int oddsearch=  binarysearch(arr, 5 , 2);
    int evensearch= binarysearch(brr , 6 , 9);
    cout<<oddsearch<<endl;
    cout<<evensearch<<endl;


}