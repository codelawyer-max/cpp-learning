#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <iterator>
#include <string>

using namespace std;

struct employee
{
    int id;
    string name;
    double salary;
};

void displayemployeedetails(const employee &emp)
{
    cout << "ID: " << emp.id << " , NAME: " << emp.name << " , SALARY: " << emp.salary << endl;
}

int main()
{
    vector<employee> employees = {
        {101, "kartik", 5677889.00},
        {102, "prince", 4577889.00},
        {103, "rohit", 6789012.00},
        {104, "aman", 5432109.00},
        {105, "sumit", 7890123.00}};

    sort(employees.begin(), employees.end(), [](const employee &e1, const employee &e2)
         {
             return e1.salary > e2.salary;
         });

    cout << "employees sorted by salary/n";

    for_each(employees.begin(), employees.end(), displayemployeedetails);

    vector<employee> highsalaryemployees;

    copy_if(employees.begin(), employees.end(), back_inserter(highsalaryemployees), [](const employee &e)
            { return e.salary > 5000000.00; });

    cout << "employees who have high salary/n";

    for_each(highsalaryemployees.begin(), highsalaryemployees.end(), displayemployeedetails);

    double totalsalary = accumulate(employees.begin(), employees.end(), 0.0, [](double sum, const employee &e)
                                    { return sum + e.salary; });

    double averagesalary = totalsalary / employees.size();

    cout << "total salary of employees: " << totalsalary << endl;
    cout << "average salary of employees: " << averagesalary;

    auto highestpaidemployee = max_element(employees.begin(), employees.end(), [](const employee &e1, const employee &e2)
                                           { return e1.salary < e2.salary; });

    cout << "Highest paid employee: ";
    displayemployeedetails(*highestpaidemployee);

    return 0;
}