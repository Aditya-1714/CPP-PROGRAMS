#include<iostream>
using namespace std;
class addition{
    public:
    void add(int a , int b){
        
        cout<<"2 int"<<a+b<<endl;
        
    }
   void add(float a, float b){
        cout<<"2 float"<<a+b<<endl;
        
   }
   void add(int a, int b, int c){
    cout<<"3 int"<<a+b+c<<endl;
       
   }
};
int main(){
    addition a1;

    a1.add(2 ,3);
    a1.add(3.3f , 3.2f);
    a1.add(2,3,4);

    return 0;
}
