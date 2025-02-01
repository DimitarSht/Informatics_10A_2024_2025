#include<iostream>
using namespace std;
struct Person
{
    string name;
    int age;
    double height;
    double weight;
    string colorOfEyes;
};

/// Въвежда стойности на разл. член-данни
void input(Person &p)
{
    cin>>p.name>>p.age>>p.height>>p.weight>>p.colorOfEyes;
}

/// Извежда стойностите на разл. член-данни
void output(Person &p)
{
    cout<<p.name<<" "
        <<p.age<<" "
        <<p.height<<" "
        <<p.weight<<" "
        <<p.colorOfEyes;
}

int main()
{
    /// dynamic allocation of memory
//    int *arr = new int[n];
    /// Създаваме 1 човек
//    Person *gosho = new Person;

    /// Създаваме масив от n на брой
    /// хора
    Person *hora = new Person[5];

    Person gosho;
    input(gosho);

    output(gosho);







    /// .... ///

//    delete gosho;   /// Освобождаваме памет за 1 човек
    delete[] hora; /// Освобождаваме памет за всички хора

//    Person person1;
//    cin>>person1.name>>person1.age....
    return 0;
}
