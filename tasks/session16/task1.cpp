#include<iostream>

class Employee{
    private:
    std::string name;
    int emp_id;
    double salary;
    public:
    Employee(std::string n, int id, double s) : name(n), emp_id(id), salary(s) {}
    double get_total_salary(){
        return salary;
    }
    virtual void print(){
        std::cout << "Name:" << name << ", ID:" << emp_id << ", Salary:"<< salary<<std::endl;
    }
};

class Sales: public Employee{
    private:
    float gross_sales, comm_rate;
    public:
    Sales(std::string n, int id, double s, float gs, float cmr) : Employee(n,id,s), gross_sales(gs), comm_rate(cmr) {}
    void set_gross_sales(float gross){
        gross_sales = gross;
    }
    void set_common_rate(float rate){
        comm_rate = rate;
    }
    void print(){
        Employee::print();
        std::cout << "Gross Sales:" << gross_sales << ", Commission:" << comm_rate << std::endl;
    }
};

class Engineer: public Employee{
    private:
    std::string specialty;
    int exp, overtime_hrs;
    float overtime_hr_rate;
    public:
    Engineer(std::string n, int id, double s, std::string sp, int ex, int oTh, float oThR) : Employee(n,id,s), specialty(sp), exp(ex), overtime_hrs(oTh), overtime_hr_rate(oThR) {}
    void set_overtime_hours(int over){
        overtime_hrs = over;
    }
    void set_overttime_hours_rate(float hrrate){
        overtime_hr_rate = hrrate;
    }
    void print(){
        Employee::print();
        std::cout << "Speciality:" << specialty << ", Experience:"<< exp << ", Over-time Hours:" << overtime_hrs << ", Over-time Hours Rate:" << std::endl;
    }
};



int main()
{
    Sales A("Ahmed",123,2250,12.5,10.5);
    A.print();
    Engineer B("Bassem",12,5200, "SOftWare", 3,2, 12.5);
    B.print();
    return 0;
}