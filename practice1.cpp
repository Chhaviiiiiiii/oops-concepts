#include <iostream>
using namespace std;

class teacher {

private:
    double teacher_salary;

public:
    int teacher_id;
    string teacher_name;
    string teacher_subject;

    // Constructor
    teacher() {
        cout << "Constructor is called beta\n";
    }

    // Set teacher details
    void setValues() {

        cout << "\nGive Teacher ID: ";
        cin >> teacher_id;

        cout << "\nGive Teacher Name: ";
        cin >> teacher_name;

        cout << "\nGive Teacher Subject: ";
        cin >> teacher_subject;
    }

    // Get teacher details
    void getValues() {

        cout << "\n\n---------- Details ----------";

        cout << "\nTeacher ID: " << teacher_id;
        cout << "\nTeacher Name: " << teacher_name;
        cout << "\nSubject: " << teacher_subject;
    }

    // Setter
    void setSalary(double s) {
        teacher_salary = s;
    }

    // Getter
    double getSalary() {
        return teacher_salary;
    }
};

int main() {

    teacher t;

    t.setValues();

    t.setSalary(40000);

    t.getValues();

    cout << "\nSalary using getter: " << t.getSalary();

    return 0;
}