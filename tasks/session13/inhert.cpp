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
    std::string getName()
    {
        return name;
    }    
    void setGender(std::string g)
    {
        gender = g;
    }
    std::string getGender()
    {
        return gender;
    }
    void setAge(float a)
    {
        age = a;
    }  

    float getAge()
    {
        return age;
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
    float getLevel()
    {
        return level;
    }
    void setGpa(float gpa)
    {
        GPA = gpa;
    }
    float getGPA()
    {
        return GPA;
    }
};

int main()
{
    Person P1 ("Ali", "M", 17);
    std::cout<< "*Person* " << "Name:" << P1.getName() << " Gender:" << P1.getGender() << " Age:" << P1.getAge() << std::endl;
    Student S1 ("Walaa", "F", 16, 5, 3.258);
    std::cout<< "*Student* " << "Name:" << S1.getName() << " Gender:" << S1.getGender() << " Age:" << S1.getAge() <<  " Level:" << S1.getLevel() <<  " GPA:" << S1.getGPA()<< std::endl;
    S1.setName("Ahmed");
    S1.setAge(14);
    S1.setGender("M");
    S1.setLevel(7);
    S1.setGpa(2.89);
    std::cout<< "*Student* " << "Name:" << S1.getName() << " Gender:" << S1.getGender() << " Age:" << S1.getAge() <<  " Level:" << S1.getLevel() <<  " GPA:" << S1.getGPA()<< std::endl;

    return 0;
}