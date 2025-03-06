#include<iostream>
using namespace std;

struct Student
{
    string name;
    int grade;
    string school;
//    int notes[30]; /// статичен масив
    int *notes; /// динамично заделен
    int broiOcenki;
};

struct Klas
{
    char paralelka;
    int numberStudents;
    int maxNumberStudents;
    Student* students;
};

struct Vipusk
{
    int broiKlasove;
    int maxBroiKlasove;
    Klas* klasove;
};

void dobaviUchenik(Klas& k, Student &s)
{
    if(k.numberStudents == 0)
    {
        k.students = new Student[k.maxNumberStudents];
    }
    k.students[k.numberStudents] = s;
    k.numberStudents++;
}

void dobaviUchenici(Klas& k, Student *students)
{
    for(int i = 0; i < 5; i++)
    {
        dobaviUchenik(k, students[i]);
    }
}

void dobaviKlas(Vipusk &v, Klas &k)
{
    if(v.broiKlasove == 0)
    {
        v.klasove = new Klas[v.maxBroiKlasove];
    }
    v.klasove[v.broiKlasove] = k;
    v.broiKlasove++;
}

void removeStudent(Klas &k, string name)
{
    for(int i = 0; i < k.numberStudents; i++)
    {
        if(k.students[i].name == name)
        {
            for(int j = i; j < k.numberStudents - 1; j++)
            {
                k.students[j] = k.students[j+1];
            }
        }
    }
}

void mestene(Klas &k1, Klas &k2, Student &s)
{
    removeStudent(k1, s.name);
    dobaviUchenik(k2, s);
}

void printStudent(Student& s)
{
    cout<<s.name<<" "<<s.grade<<" "<<s.school<<" ";
    for(int i = 0; i < s.broiOcenki; i++)
    {
        cout<<s.notes[i]<<" ";
    }
}

void printKlas(Klas& k)
{
    for(int i = 0; i < k.numberStudents; i++)
    {
        printStudent(k.students[i]);
    }
}

Student* inputStudent()
{
    Student *s = new Student;
    cin>>s.name>>s.grade>>s.school>>s.broiOcenki;
    for(int i = 0 ; i < s.broiOcenki; i++)
    {
        cin>>s.notes[i];
    }
    return s;
}

int main()
{
    Vipusk v; /// {0, 0, nullptr}
//    int notes[] = {4,5,6};
//    Student s1{"Ivan Ivanov", 10,"NPMG", notes};

    Student *students = new Student[5];
    for(int i = 0; i < 5; i++)
    {
        students[i] = inputStudent();
    }

    printStudent(students[0]);

    Klas desetiA;
    dobaviUchenici(desetiA, students);

    dobaviKlas(v, desetiA);

    cout<<v.klasove[0].paralelka<<" "
        <<v.klasove[0].students[0].grade;
//    for(int i = 0; i < 5; i++)
//    {
//        dobaviUchenik(desetiA, students[i]);
//    }

    removeStudent(desetiA, "Ivan");
    removeStudent(desetiA, "Pesho");
    removeStudent(desetiA, "Martin");

    delete[] students;
//    Klas A,B,V,G;
//    dobaviKlas(v, A);
//    dobaviKlas(v, B);
//    dobaviKlas(v, V);
//    dobaviKlas(v, G);
    /// v.masivOtKlasove = new Klas[v.maxBroiKlasove];



    return 0;
}
