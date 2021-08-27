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
    void work()
    {
        std::cout << name << " is checking email, task backlog, performing tasks..." << std::endl;
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
    void work()
    {
        std::cout << name << " is writting " << favProgrammingLangue << " code" << std::endl;
    }
};
class Teacher : public Employee
{
public:
    string Subject;
    void PrepareLesson()
    {
        std::cout << name << " is preparing " << Subject << " lesson" << std::endl;
    }
    Teacher(string getName, string getCompany, int getAge, string getSubject)
        : Employee(getName, getCompany, getAge)
    {
        Subject = getSubject;
    }
    void work()
    {
        std::cout << name << " is teacher " << Subject << std::endl;
    }
};
int main()
{
    Teacher teacher = Teacher("Jack", "Cool School", 35, "History");
    // teacher.PrepareLesson();
    // teacher.askForPromtion();
    Developer developer = Developer("thucLinh", "google", 31, "C++");
    // developer.work();
    // teacher.work();
    Employee *employee1 = &developer;
    Employee *employee2 = &teacher;
    employee1->work();
}