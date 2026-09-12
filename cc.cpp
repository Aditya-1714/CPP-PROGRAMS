#include <iostream>
using namespace std;
int main(){
    int a , b ;
     cout<<"------------------------------------------"<<endl;
     cout<<"enter first number  :";
     cin>> a;
     cout<<"------------------------------------------"<<endl;
     cout<<"enter second number  :"; 
     cin>> b;
     cout<<"------------------------------------------"<<endl;
     char op ;
     cout<<"enter operator you want to perform  :"; 
     cin>> op;
     cout<<"------------------------------------------"<<endl;
     switch(op){
        
        case '+': cout<<"------------------------------------------"<<endl; 
                 cout<<"your answer is :"<<(a+b)<<endl;
                  cout<<"------------------------------------------"<<endl;
                  break;
        case '-': cout<<"------------------------------------------"<<endl;
                 cout<<"your answer is :"<<(a-b)<<endl;
                  cout<<"------------------------------------------"<<endl;
                  break;
        case '*': cout<<"------------------------------------------"<<endl; 
                cout<<"your answer is :"<<(a*b)<<endl;
                 cout<<"------------------------------------------"<<endl;
                  break;
        case '/': cout<<"------------------------------------------"<<endl;
                 cout<<"your answer is :"<<(a/b)<<endl;
                  cout<<"------------------------------------------"<<endl;
                  break;
        default :cout<<"------------------------------------------"<<endl;
                 cout<<"default case"<<endl;
                 cout<<"------------------------------------------"<<endl;
     }
     return 0;

}