//Give an example of :(i) Constructors(ii) Encapsulation(iii) Inheritance(iv) Polymorphism

#include<iostream>
using namespace std;

class Person {

    public :

        //constructor
        Person(string n, int a) {
        name = n;
        age = a;}

        //encaspulation
        string GetName() {
        return name;}

        void SetName(string new_name) {
        name = new_name;}

        int GetAge() {
        return age;}

        void SetAge(int new_age) {
        age = new_age;}

    private:

        string name;
        int age;
};


//inheritance
class Student : public Person{
    public:
        Student(string n,int a,int m):Person(n,a){
        marks=m;}

        int GetMarks() {
        return marks;}

        void SetMarks(int new_marks) {
        marks = new_marks;}

        //polymorphism
        void printProfession(){
        cout<<"Student"<<endl;
        }

    private:
        int marks;

};

class Actor : public Person{

    public:
        //polymorphism
        Actor(string n,int a):Person(n,a){};

        void printProfession(){
        cout<<"Actor"<<endl;
        }

};

int main()
{
    Person p1("Kavish", 18);
    cout << p1.GetName() << " is " << p1.GetAge() <<" years old." << endl;

    p1.SetAge(19);
    cout << p1.GetName() << " is " << p1.GetAge() <<" years old." << endl;

    Student s1("Kavish",19,98);
    cout << s1.GetName() << " scored " << s1.GetMarks() << " marks."<<endl;

    Actor a1("Tom",60);

    s1.printProfession();
    a1.printProfession();

}
