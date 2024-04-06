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
    void setDepartment(Department* dep);
    void display();
    std::string getName() const;
};

class Department
{
    private:
    std::string dname;
    std::vector<Employee*> employees;
    public:
    Department(std::string nm) : dname(nm) {}
    void addEmployee(Employee* employee);
    void display();
    std::string getName() const;
};

void Employee::setDepartment(Department* dep){
    department = dep;
}

void Employee::display(){
    std::cout << "Employee: " << name << ", Department: ";
    if (department != nullptr) {
        std::cout << department->getName();
    } else {
        std::cout << "No department assigned";
    }
    std::cout << std::endl;
}

void Department::addEmployee(Employee* employee)
{
    employees.push_back(employee);
    employee->setDepartment(this);
}
std::string Department::getName() const {
    return dname;
}
std::string Employee::getName() const {
    return name;
}

void Department::display(){
    std::cout << "Department: " << dname << ", Employees: ";
    if (employees.empty()) {
        std::cout << "No employees";
    } else {
        for (Employee* employee : employees) {
            std::cout<< employee->getName()<< ", ";
        }
    }
    std::cout << std::endl;
}

int main()
{
    Employee* O= new Employee("Omar");
    Employee* Z= new Employee("Zain");
    Employee* MI= new Employee("Mia");
    Department* M = new Department("Mechanical");
    Department* E = new Department("Electrical");
    M->addEmployee(O);
    M->addEmployee(Z);
    E->addEmployee(MI);
    O->display();
    Z->display();
    M->display();
    E->display();
    MI->display();
}
