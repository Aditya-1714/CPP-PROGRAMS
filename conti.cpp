//it will skip the current iteration of the loop and continue with the next iteration
#include<iostream>
using namespace std;
int main(){
    for(int i=0; i<=10; i++){
        if(i==4){
            continue;
        
        }
        cout<<i<<" ";
    }
}