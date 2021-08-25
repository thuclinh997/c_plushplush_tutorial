#include <iostream>
using std::string;

class Employee
{
private:
    string name;
    string company;
    int age;
public:
    
    void introductYourself()
    {
        std::cout<<"name - " << name << std::endl;
        std::cout<<"company - "<<company<<std::endl;
        std::cout<<"age - "<<age<<std::endl;
    }
};
int main()
{
    Employee employee1;
    // employee1.name = "thuc linh";
    // employee1.company = "youtube";
    // employee1.age = 17;
    employee1.introductYourself();
    Employee employee2;
    // employee2.name = "my ngoc";
    // employee2.company = "google";
    // employee2.age = 23;
    employee2.introductYourself();

}