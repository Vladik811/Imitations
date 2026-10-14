//#include <iostream>
//#include <string>
//using namespace std;
//
//class Student {
//    string name;
//    string surname;
//    int age;
//    string gradebook;
//public:
//    Student() {
//        name = "no set name";
//        surname = "no set surname";
//        age = 0;
//        gradebook = "no set gradebook";
//    }
//
//    Student(string name, string surname, int age, string gradebook) {
//        this->name = name;
//        this->surname = surname;
//        this->age = age;
//        this->gradebook = gradebook;
//    }
//
//    void print()const {
//        cout << "Name: " << name << '\n';
//        cout << "Surname: " << surname << '\n';
//        cout << "Age: " << age << '\n';
//        cout << "Gradebook: " << gradebook << '\n';
//    }
//    ~Student() {
//        cout << "Student Destructor\n";
//    }
//};
//
//class Aspirant : public Student {
//    string diploma;
//public:
//    Aspirant() : Student() {
//        diploma = "no set diplom";
//    }
//
//    Aspirant(string name, string surname, int age, string gradebook, string diploma) :
//        Student(name, surname, age, gradebook) {
//        this->diploma = diploma;
//    }
//
//    void print()const {
//        Student::print();
//        cout << "Diploma: " << diploma << '\n';
//    }
//    ~Aspirant() {
//        cout << "Aspirant Destructor\n";
//    }
//};
//
////task 2
//
//class Passport {
//    string name;
//    string surname;
//    int age;
//    string date_of_birth;
//public:
//    Passport() {
//        name = "no set name";
//        surname = "no set surname";
//        age = 0;
//        date_of_birth = "no set date of birth";
//    }
//
//    Passport(string name, string surname, int age, string date_of_birth) {
//        this->name = name;
//        this->surname = surname;
//        this->age = age;
//        this->date_of_birth = date_of_birth;
//    }
//
//    void print()const {
//        cout << "Name: " << name << '\n';
//        cout << "Surname: " << surname << '\n';
//        cout << "Age: " << age << '\n';
//        cout << "Date of birth: " << date_of_birth << '\n';
//    }
//    ~Passport() {
//        cout << "Passport Destructor\n";
//    }
//};
//
//class Foreign_passport : public Passport {
//    string viza;
//    int number;
//public:
//    Foreign_passport() : Passport() {
//        viza = "no set viza";
//        number = 0;
//    }
//
//    Foreign_passport(string name, string surname, int age, string date_of_birth, string viza, int number) :
//        Passport(name, surname, age, date_of_birth) {
//        this->viza = viza;
//        this->number = number;
//    }
//
//    void print()const {
//        Passport::print();
//        cout << "Viza: " << viza << '\n';
//        cout << "Number: " << number << '\n';
//    }
//    ~Foreign_passport() {
//        cout << "Foreign Passport Destructor\n";
//    }
//};
//
////task 3 
//
//class Pet {
//    string name;
//    int age;
//public:
//    Pet() {
//        name = "no set name";
//        age = 0;
//    }
//
//    Pet(string name, int age) {
//        this->name = name;
//        this->age = age;
//    }
//
//    void say() {}
//};
//
//class Dog : public Pet {
//public:
//    Dog() : Pet(){}
//    Dog(string name, int age) : Pet(name, age){}
//    void say() {
//        cout << "Gav Gav";
//    }
//};
//
//class Cat : public Pet {
//public:
//    Cat() : Pet() {}
//    Cat(string name, int age) : Pet(name, age) {}
//    void say() {
//        cout << "Meow Meow";
//    }
//};
//
//class Parrot : public Pet {
//public:
//    Parrot() : Pet() {}
//    Parrot(string name, int age) : Pet(name, age) {}
//    void say() {
//        cout << "Chirp chirp";
//    }
//};
//
//
//int main()
//{
//   
//}