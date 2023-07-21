//Write a C++ program to define a class student with the data members to store name,roll no and grade of the student.
//Also write the member functions to read, display, and sort student information according to the roll number of the student.
//All the member functions will have array of objects as arguments.

#include <iostream>
#include <string>
#include<algorithm>

using namespace std;

class Student {
    private:
        string name;
        int rollNo;
        char grade;

    public:
        Student(){
        };

        Student(string n, int r, char g){
            n=name;
            r=rollNo;
            g=grade;
        }


        void read_data() {
            cout << "Enter name: ";
            getline(cin >> ws, name);
            cout << "Enter roll number: ";
            cin >> rollNo;
            cout << "Enter grade: ";
            cin >> grade;
        }


        void display_data() {
            cout << "Name:" << name << " , Roll No:" << rollNo << " , Grade:" << grade << endl;
        }

        static void sortStudentsByRollNo(Student students[], int size) {
        sort(students, students + size, [](Student& a, Student& b) {
            return a.rollNo < b.rollNo;});
        }
};

int main() {
    int num;
    cout<<"Enter the number of students:";
    cin>>num;
    cout<<endl;
    Student students[num];

    for (int i = 0; i < num; ++i) {
        cout << "Enter details for student " << i + 1 << ":"<<endl;
        students[i].read_data();
        cout<<endl;
    }

    cout <<endl<< "Student Information:"<<endl;
    for (int i = 0; i < num; ++i) {
        students[i].display_data();
    }

    Student::sortStudentsByRollNo(students, num);

    cout <<endl<< "Sorted Student Information (based on Roll No):"<<endl;
    for (int i = 0; i < num; ++i) {
        students[i].display_data();
    }

    return 0;
}
