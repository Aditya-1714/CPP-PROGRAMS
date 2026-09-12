#include<iostream>
using namespace std;
class person{
    string name;
    int age;
    public:
    person (string name , int age){
        this->name=name;
        this->age=age;
    }
    void getname(){
        cout<<"name is"<<this->name<<endl;
    }
     void getage(){
        cout<<"age is"<<this->age<<endl;
    }
    void displayperson(){
        cout<<"name is"<<this->name<<endl;
        cout<<"age is"<<this->age<<endl;
    }
};
class student : public person{
    int rollno;
    int marks;
    public: 
    student (string name , int age , int rollno , int marks):person(name,age){
        this->rollno=rollno;
        this->marks=marks;
    }
    void getmarks(){
        cout<<"marks obtained are"<<this->marks<<endl;
    }
    void getrollno(){
        cout<<"roll no is"<<this->rollno<<endl;
    }
    void displaystudent(){
        cout<<"marks obtained are"<<this->marks<<endl;
        cout<<"roll no is"<<this->rollno<<endl;
    }
};
class result : public student{
    string grade;
    public:
    result(string name , int age , int rollno , int marks, string grade):student(name , age , rollno , marks){
        this->grade=grade;
    }
    void getgrade(){
        cout<<"grade obtained are"<<this->grade<<endl;
    }
    void displayresult(){
        cout<<"grade obtained are"<<this->grade<<endl;
    }
};
int main(){
    result s1("adi",18 , 13 , 99,"a+");
    s1.displayperson();
    s1.displaystudent();
    s1.displayresult();
    return 0;
}