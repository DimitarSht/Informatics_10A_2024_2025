#include<iostream>
#include<fstream>
#include<string>
using namespace std;

struct Student
{
    int number;
    string name;
    double averageNote;
};

void write(ofstream &of, Student &s)
{
    of << s.number<<" ";
    of << s.averageNote<<" ";
    of << s.name << endl;
}

void read(const string &filename, Student &s)
{
    ifstream in(filename);
    if(!in.is_open())
    {
        cout<<"Error";
        return;
    }

    in >> s.number;
    in >> s.averageNote;
    in.ignore();
    getline(in, s.name);
    in.close();
}

void writeStudents(Student s[], int sz, ofstream &of)
{
    for(int i = 0; i < sz; i++)
    {
        write(of, s[i]);
    }
}

void readStudents(Student s[], int sz, const string &filename)
{
    for(int i = 0; i < sz; i++)
    {
        read(filename, s[i]);
    }
}


int main()
{
    const string file = "students_task01.txt";

    ofstream out("students_task01.txt");
    if(!out.is_open())
    {
        cout<<"Error";
        return -1;
    }

    int sz;
    cin>>sz;
    Student s[sz];
    for(int i = 0; i < sz; i++)
    {
        cin>>s[i].number;
        cin.ignore();
        getline(cin, s[i].name);
        cin>>s[i].averageNote;
    }

    writeStudents(s, sz, out);

    readStudents(s, sz, file);

    for(int i = 0; i < sz; i++)
    {
        cout<<s[i].name<<" "<<s[i].number<<" "<<s[i].averageNote<<endl;
    }
    out.close();



    return 0;
}
