#include<iostream>
#include<fstream>
using namespace std;

struct Student
{
    string name;
    string familyName;
    int grade;
    double averageNote;
};

void write(const string &filename, Student &s)
{
    fstream out(filename, ios::app);
    if(!out.is_open())
    {
        cout<<"Error";
        return;
    }

    out << s.name<<" "<<s.familyName<<" ";
    out << s.grade<<" "<<s.averageNote<<endl;

    out.close();
}

void average(const string &filename, Student s[], int sz)
{
    double av = 0.0;
    fstream file(filename, ios::app);
    if(!file.is_open())
    {
        cout<<"Error";
        return;
    }

    for(int i = 0; i < sz; i++)
    {
        av += s[i].averageNote;
    }
    av /= sz;
    file << "Average is: "<<av<<endl;
    file.close();
}


void writeStudents(const string &filename, Student s[], int sz)
{
    for(int i = 0; i < sz; i++)
    {
        write(filename, s[i]);
    }
}


void inputStudent(Student students[], int sz)
{
    for(int i = 0; i < sz; i++)
    {
        cin>>students[i].name;
        cin>>students[i].familyName;
        cin>>students[i].grade;
        cin>>students[i].averageNote;
    }
}

void printAverage(Student s[], int sz)
{
    for(int i = 0; i < sz; i++)
    {
        if(s[i].averageNote >= 5.50)
        {
            cout<<s[i].name<<" "<<s[i].familyName<<endl;
        }
    }
}

int main()
{
    int sz;
    cin>>sz;
    Student students[sz];

    inputStudent(students, sz);

    writeStudents("students_task02.txt", students, sz);

    average("students_task02.txt", students, sz);

    printAverage(students, sz);

    return 0;
}
