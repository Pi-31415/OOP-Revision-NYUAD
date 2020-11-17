#include<iostream>
#include<string>
using namespace std;

class Person{
    private:
    string name;
    int birth_day;
    int birth_year;
    int birth_month;
    static int num_people;

    public:
    int getNumPeople(){
        return num_people;
    }

    Person(){
        name = "";
        birth_year = 1;
        birth_day = 1;
        birth_month = 1;
        num_people++;
    }
};

int Person::num_people = 0;

int main(){
    Person* people = new Person[5];
    Person Sarah = Person();
    cout << Sarah.getNumPeople() << endl;
    delete [] people;
}