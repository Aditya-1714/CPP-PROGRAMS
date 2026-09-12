#include<iostream>
using namespace std;
class student{
    private:
    string name;
    int rollno;
    int marks;
    public:
    student(string n , int roll , int mark){
        this->name=n;
        this->rollno=roll;
        this->marks=mark;
    }
    void getname(){
        cout<<"name of student is"<<this->name<<endl;

    }
    void getrollno(){
        cout<<"roll number is"<<this->rollno<<endl;

    }
    void getmarks(){
        cout<<"marks obtained by studnet is "<<this->marks<<endl; 
    }
    void setmarks(int marks){
        this->marks=marks;
    }
    void display(){
         cout<<"name of student is"<<this->name<<endl;
         cout<<"roll number is"<<this->rollno<<endl;
         cout<<"marks obtained by studnet is "<<this->marks<<endl; 
    }
};
int main(){
    student s1("adi", 13 , 99);
    s1.display();
    return 0;

}
