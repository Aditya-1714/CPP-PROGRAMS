#include<iostream>
using namespace std;
class employee{
    private:
    string name;
    int id;
    int salary;
    public:
    employee(string name , int id , int salary){
        this->name=name;
        this->id=id;
        this->salary=salary;
    }
    void getname(){
        cout<<"name of employee"<<this->name<<endl;
    }
    void getid(){
        cout<<"emp id"<<this->id<<endl;
    }
    void getsalary(){
        cout<<"salary of employee"<<this->salary<<endl;
    }
    void setsalary(int salary){
        this->salary=salary;
    }
    void display(){
        cout<<"name of employee"<<this->name<<endl;
         cout<<"emp id"<<this->id<<endl;
         cout<<"salary of employee"<<this->salary<<endl;
    }
};
int main(){
    employee e1("rahul" , 101 , 30000);
    e1.setsalary(35000);
    e1.display();
    return 0;
}
