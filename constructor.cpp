#include <iostream>
using namespace std;

class Employee {
private:
    string name;
    int salary;
    static int employeeCount;

public:
  
    Employee() {
        name = "Default";
        salary = 0;
        employeeCount++;
    }

  
    Employee(string name, int salary) {
        this->name = name;
        this->salary = salary;
        employeeCount++;
    }
 
    void display() {
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
        cout << endl;
    }

    static void showEmployeeCount() {
        cout << "Total Employees: " << employeeCount << endl;
    }
};


int Employee::employeeCount = 0;

int main() {
    Employee e1;
    Employee e2("Aadi", 50000);
    Employee e3("Rahul", 40000);

    e1.display();
    e2.display();
    e3.display();

    Employee::showEmployeeCount();

    return 0;
}