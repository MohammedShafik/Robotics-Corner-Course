#include<iostream>
#include<vector>

class Department;

class Employee
{
private:
std::string name;
Department* department;
public:
Employee(std::string n) : name(n), department(nullptr){}
void setDepartment(Department* dep){
department = dep;
}
};

class Department
{
private:
std::string name;
std::vector<Employee*> employees;
public:
Department(std::string nm) : name(nm) {}
void addEmployee(Employee* employee){
employees.push_back(employee);
employee->setDepartment(this);
}
};

int main()
{
Employee* O= new Employee("Omar");
Employee* Z= new Employee("Zain");
Department* M = new Department("Mechanical");
Department* E = new Department("Electrical");
M->addEmployee(O);
M->addEmployee(Z);

return 0;
}