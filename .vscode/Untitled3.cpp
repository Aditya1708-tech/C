#include<iostream>
using namespace std;

class Employee{
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

int main()
{
	Employee emp;
	emp.setEmpId(10);
	emp.setEmpName("Aditya");
	emp.setEmpSalary(8000);
	
	cout<<"\n Employee Id: "<<emp.getEmpId();
	cout<<"\n Employee Name: "<<emp.getEmpName();
	cout<<"\n Employee Salary: "<<emp.getEmpSalary();
	
	return 0;
}
