//MEDIUM
/*Write a program that demonstrates function overloading to calculate the salary of employees at different levels in a company hierarchy. Implement overloaded functions to compute salary for:
-	Intern (basic stipend).
-	Regular employee (base salary + bonuses).
-	Manager (base salary + bonuses + performance incentives).*/

#include <iostream>
using namespace std;

class Employee {
public:
    double calculateSalary(double stipend) {
        return stipend;
    }

    double calculateSalary(double baseSalary, double bonus) {
        return baseSalary + bonus;
    }

    double calculateSalary(double baseSalary, double bonus, double incentive) {
        return baseSalary + bonus + incentive;
    }
};

int main() {
    Employee emp;
    double internSalary = emp.calculateSalary(10000);
    cout << "Intern's Salary: Rs." << internSalary << endl;

    double regularEmployeeSalary = emp.calculateSalary(30000, 5000);
    cout << "Regular Employee's Salary: Rs." << regularEmployeeSalary << endl;

    double managerSalary = emp.calculateSalary(50000, 10000, 5000);
    cout << "Manager's Salary: Rs." << managerSalary << endl;

    return 0;
}


