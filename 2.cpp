#include <iostream>
using std::string;
class AbstractEmployee
{
    virtual void askForPromtion() = 0;
};
class Employee : AbstractEmployee
{
private:
    string name;
    string company;
    int age;

public:
    Employee(string getName, string getCompany, int getAge)
    {
        name = getName;
        company = getCompany;
        age = getAge;
    }

public:
    void setName(string setName)
    {
        name = setName;
    }
    string getName()
    {
        return name;
    }
    void setCompany(string setCompany)
    {
        company = setCompany;
    }
    string getCompany()
    {
        return company;
    }
    void setAge(int setAge)
    {
        age = setAge;
    }
    int getAge()
    {
        return age;
    }
    void introductYourself()
    {
        std::cout << "name - " << name << std::endl;
        std::cout << "company - " << company << std::endl;
        std::cout << "age - " << age << std::endl;
    }
    void askForPromtion()
    {
        if (age > 30)
        {
            std::cout << name << " got promoted!" << std::endl;
        }else{
            std::cout<<name<<" sorry no promotion for you"<<std::endl;
        }
    }
};
int main()
{
    Employee employee1 = Employee("thuclinh", "youtube", 33);
    // employee1.name = "thuc linh";
    // employee1.company = "youtube";
    // employee1.age = 17;
    // employee1.introductYourself();
    Employee employee2 = Employee("myngoc", "facebook", 23);
    // employee2.name = "my ngoc";
    // employee2.company = "google";
    // employee2.age = 23;
    // employee2.introductYourself();
    employee1.setAge(34);
    employee1.setCompany("zalo");
    employee1.setName("Mario");
    std::cout << "name: " << employee1.getName() << ", company: " << employee1.getCompany() << ", age: " << employee1.getAge() << " year old!" << std::endl;
    employee1.askForPromtion();
    employee2.askForPromtion();
}