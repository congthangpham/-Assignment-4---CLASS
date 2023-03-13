#include <iostream>
#include <string>
using namespace std;

class Employee {
    private:
        string name;
        int idNumber;
        string department;
        string position;
    public:
        Employee(string n, int id, string dept, string pos) {
            name = n;
            idNumber = id;
            department = dept;
            position = pos;
        }
        Employee(string n, int id) {
            name = n;
            idNumber = id;
            department = "";
            position = "";
        }
        Employee() {
            name = "";
            idNumber = 0;
            department = "";
            position = "";
        }
        void setName(string n) {
            name = n;
        }
        string getName() const {
            return name;
        }
        void setIdNumber(int id) {
            idNumber = id;
        }
        int getIdNumber() const {
            return idNumber;
        }
        void setDepartment(string dept) {
            department = dept;
        }
        string getDepartment() const {
            return department;
        }
        void setPosition(string pos) {
            position = pos;
        }
        string getPosition() const {
            return position;
        }
};

int main() {
    Employee e1("Susan Meyers", 47899, "Accounting", "Vice President");
    Employee e2("Mark Jones", 39119, "IT", "Programmer");
    Employee e3("Joy Rogers", 81774, "Manufacturing", "Engineer");

    cout << "Name\t\tID Number\tDepartment\tPosition" << endl;
    cout << e1.getName() << "\t" << e1.getIdNumber() << "\t\t"
         << e1.getDepartment() << "\t" << e1.getPosition() << endl;
    cout << e2.getName() << "\t" << e2.getIdNumber() << "\t\t"
         << e2.getDepartment() << "\t\t" << e2.getPosition() << endl;
    cout << e3.getName() << "\t" << e3.getIdNumber() << "\t\t"
         << e3.getDepartment() << "\t" << e3.getPosition() << endl;

    return 0;
}