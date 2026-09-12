#include<iostream>
using namespace std;
class rectangle{
    private:
    float length;
    float width;
    public:
   
    
    rectangle(float length , float width){
        this->length=length;
        this->width=width;
    }
    void getlength(){
        cout<<"length od rectangle is"<<this->length<<endl;

    }
    void getwidth(){
        cout<<"width od rectangle is"<<this->width<<endl;
    }
    void setlength(float length){
        this->length=length;
    }
    void setwidth(float width){
        this->width=width;
    }
    float area(){
      return(length*width);
        
    }
    float parameter(){
        return(2*(width+length));
    }
    void display(){
                cout<<"length of rectangle is"<<this->length<<endl;
                cout<<"width of rectangle is"<<this->width<<endl;
                cout<<"area is"<<area();
                cout<<"parameteris"<<parameter();
    }
};
int main(){
    rectangle r1(10 , 20);
    r1.display();
    return 0;


}