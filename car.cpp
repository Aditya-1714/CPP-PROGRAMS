#include<iostream>
using namespace std;
class car{
    private:
    string brand;
    string model;
    int price;
    public:
    car(string brand , string model , int price){
        this->brand=brand;
        this->model=model;
        this->price=price;
    }
    void getbrand(){
        cout<<"car brand is"<<this->brand<<endl;
    }
    void getmodel(){
        cout<<"car model is"<<this->model<<endl;
    }
    void getprice(){
        cout<<"car price is"<<this->price<<endl;
    }
    void setbrand(string brand){
        this->brand=brand;
    }
    void setmodel(string model){
        this->model=model;
    }
    void setprice(int price){
        this->price=price;
    }
    
    
    int discountPrice(int discount){
        return (price - (price * discount / 100));
    }
    void display(int discount){
       cout<<"car brand is"<<this->brand<<endl; 
       cout<<"car model is"<<this->model<<endl;
       cout<<"car price is"<<this->price<<endl;
       cout<<"car price after dicsount is"<<discountPrice(discount)<<endl;
    }
};
int main(){
    car c1("toyota" , "fortuner" , 4000000);
    c1.setprice(4500000);
    c1.display(10);
    return 0;
}