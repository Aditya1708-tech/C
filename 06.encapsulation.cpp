#include <iostream>  
using namespace std;    
class Employee 
{  
private:  
    int empId;  
    string empName;  
    float empSalary;  
  
public:  
    void setEmpId(int id) 
	{  
        empId = id;  
    }  
  
    void setEmpName(string name)
	 {  
        empName = name;  
    }  
  
    void setEmpSalary(float salary)
	 {  
        empSalary = salary;  
    }  
  
    int getEmpId()
	 {  
        return empId;  
     }  
  
    string getEmpName() 
	{  
        return empName;  
    }  
  
    float getEmpSalary()
	{  
        return empSalary;  
    }  
};  
  
int main() {  
    Employee emp;  
    emp.setEmpId(153);  
    emp.setEmpName("pranav");  
    emp.setEmpSalary(8000.0);  
  
    cout << "Employee ID: " << emp.getEmpId() << endl;  
    cout << "Employee Name: " << emp.getEmpName() << endl;  
    cout << "Employee Salary: " << emp.getEmpSalary() << endl;  
  
    return 0;  
}
