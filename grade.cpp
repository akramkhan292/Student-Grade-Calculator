#include <iostream>
using namespace std;

class Student {
private:
    int rollno, sub1, sub2, sub3;
    string name;

public:
    Student(int r, string n, int s1, int s2, int s3);

    int totalMarks() const {
        return sub1 + sub2 + sub3;
    }

    void grade() const {
        float percentage = (totalMarks() * 100.0) / 300;
        if (percentage > 60) {
            cout << "Grade: A" << endl;
        } else if (percentage <= 40) {
            cout << "Grade: C" << endl;
        } else {
            cout << "Grade: B" << endl;
        }
    }

    ~Student();
};

Student::Student(int r, string n, int s1, int s2, int s3) {
    rollno = r;
    name = n;
    sub1 = s1;
    sub2 = s2;
    sub3 = s3;
}

Student::~Student() {
    // Destructor
}

int main() {
    int rollno, sub1, sub2, sub3;
    string name;

    cout << "Enter roll number: ";
    cin >> rollno;
    cout << "Enter name: ";
    cin.ignore();  // Ignore the newline character left by cin
    getline(cin, name);
    cout << "Enter marks for subject 1: ";
    cin >> sub1;
    cout << "Enter marks for subject 2: ";
    cin >> sub2;
    cout << "Enter marks for subject 3: ";
    cin >> sub3;

    Student st(rollno, name, sub1, sub2, sub3);
    cout << "Total marks: " << st.totalMarks() << endl;
    st.grade();
    
    return 0;
}
