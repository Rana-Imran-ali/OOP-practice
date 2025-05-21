#include <iostream>
#include <string>

using namespace std;

class Employee {
private:
    string name, phone, address, department;
    int cnic, Eno, payscale;

public:
    void setName() {
        cout << "Enter name: ";
        cin >> name;
    }

    void setPhone() {
        cout << "Enter phone: ";
        cin >> phone;
    }

    void setAddress() {
        cout << "Enter address: ";
        cin >> address;
    }

    void setDepartment() {
        cout << "Enter department: ";
        cin >> department;
    }

    void setCnic() {
        cout << "Enter CNIC: ";
        cin >> cnic;
    }

    void setEno() {
        cout << "Enter Employee Number: ";
        cin >> Eno;
    }

    void setPayscale() {
        cout << "Enter payscale: ";
        cin >> payscale;
    }

    void displayInfo() {
        cout << "\nEmployee Information:\n";
        cout << "Name: " << name << endl;
        cout << "Phone: " << phone << endl;
        cout << "Address: " << address << endl;
        cout << "Department: " << department << endl;
        cout << "CNIC: " << cnic << endl;
        cout << "Employee Number: " << Eno << endl;
        cout << "Payscale: " << payscale << endl;
    }
};

int main() {
    Employee emp;

    emp.setName();
    emp.setPhone();
    emp.setAddress();
    emp.setDepartment();
    emp.setCnic();
    emp.setEno();
    emp.setPayscale();

    emp.displayInfo();

    return 0;
}

