#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;
    char grade;

public:
    
    Student(string studentName, int studentAge, char studentGrade) {
        name = studentName;
        age = studentAge;
        grade = studentGrade;
    }
    
    void getdata() {
        cout << "Student Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Grade: " << grade << endl;
    }
};

int main() {
    
    Student student1("IMRAN ALI", 19, 'A');
    student1.getdata();

    return 0;
}