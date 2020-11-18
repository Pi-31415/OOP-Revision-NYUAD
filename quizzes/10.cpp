#include<iostream>
#include<string>
 #define NUM_EMPLOYEES 10
using namespace std;

class Employee{
private:
    string name;
    double salary;
    int hire_day;
    int hire_month;
    int hire_year;

public:
    void setHireDate(int hire_day, int hire_month, int hire_year){
        hire_day = hire_day;
        hire_month = hire_month;
        hire_year = hire_year;

    }

    void setSalary(int amount){
        salary = amount;
    }

Employee(){
    name = "";
    salary = 0;
    hire_day = 1;
    hire_month = 1;
    hire_year = 2020;
}
};

int main(){
    Employee company_employees[NUM_EMPLOYEES];
    for(int i = 0; i < NUM_EMPLOYEES; i++){
        company_employees[i].setSalary(i*10);
    }
    return 0;
}