#include <iostream>
using std::string;
class AbstractEmployee
{
    virtual void askForPromtion() = 0;
};
class Employee : AbstractEmployee
{
private:
    string company;
    int age;

protected:
    string name;

public:
    Employee(string getName, string getCompany, int getAge)
    {
        name = getName;
        company = getCompany;
        age = getAge;
    }
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
        }
        else
        {
            std::cout << name << " sorry no promotion for you" << std::endl;
        }
    }
};
class Developer : public Employee
{
public:
    string favProgrammingLangue;
    Developer(string getName, string getCompany, int getAge, string getfavProgrammingLangue)
        : Employee(getName, getCompany, getAge)
    {
        favProgrammingLangue = getfavProgrammingLangue;
    }
    void fixBug()
    {
        std::cout << getName() << " fix bug using " << favProgrammingLangue << std::endl;
    }
};

int main()
{
    Developer developer = Developer("thucLinh", "google", 31, "C++");
    developer.fixBug();
    developer.askForPromtion();
}