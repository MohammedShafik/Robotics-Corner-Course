#include <iostream>

class Person
{
    private:
        std::string name;
        std::string gender;
        float age;
    public:
    Person(std::string n, std::string g, float a): name(n), gender(g), age(a)
    {}

    void setName(std::string n)
    {
        name = n;
    }
      
    void setGender(std::string g)
    {
        gender = g;
    }
    
    void setAge(float a)
    {
        age = a;
    }  

    virtual void display()
    {
        std::cout<< "Name:" << name << " Gender:" << gender << " Age:" << age << " ";
    }
};

class Student : public Person
{
    private:
        int level;
        float GPA;
    public:
    Student(std::string n, std::string g, float a, int lv, float gp): Person(n, g, a), level(lv), GPA(gp)
    {}
    void setLevel(float l)
    {
        level = l;
    }
    
    void setGpa(float gpa)
    {
        GPA = gpa;
    }
     void display()
    {
        Person::display();
        std::cout<< "Level:" << level << " GPA:" << GPA << " ";
    }
    
};

class PGstudent : public Student
{
    private:
    std::string ResIntrst;
    public:
    PGstudent(std::string n, std::string g, float a, int lv, float gp, std::string ri): Student(n,g,a,lv,gp), ResIntrst(ri)
    {}
    
    void setResInt(std::string ri)
    {
        ResIntrst = ri;
    }

     void display()
    {
        Student::display();
        std::cout<< "Research Interest:" << ResIntrst << std::endl;
    }
    
};

int main()
{
    Person Ali("Ali", "M", 17);
    Ali.display();
    std::cout<<std::endl;
    Student S1("Walaa", "F", 16, 5, 3.258);
    S1.display();
    std::cout<<std::endl;
    S1.setName("Ahmed"); S1.setAge(14);  S1.setGender("M");  S1.setLevel(7); S1.setGpa(2.89);
    S1.display();
    std::cout<<std::endl;
    PGstudent Mia("Mia", "F", 22, 6, 3.658, "Cycling");
    Mia.setAge(24);
    Mia.display();
    return 0;
}