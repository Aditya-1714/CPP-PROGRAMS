#include<iostream>
using namespace std;
int main()
{
    int weight;
    cout<<"enter your weight"<<endl;
    cin>>weight;
    int height;
    cout<<"enter your height"<<endl;
    cin>>height;
    if(height>150){
        if(weight>50){
            cout<<"your bmi is normal:"<<endl;
        } 
        else{
            cout<<"your bmi is underweight:"<<endl;
        }
    }
}