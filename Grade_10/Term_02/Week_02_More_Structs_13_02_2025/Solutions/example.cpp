struct Grade
{
    string subject;
    int grade;
};

struct Student
{
    string name;
    Grade*  grades;
    int countGrades;
    int year;
    Student()
    {
        countGrades = 0;
        grades = new Grade[10];
    }
    ~Student()
    {
        delete[]grades;
    }
    Student(const Student& other)
    {
        name = other.name;
        year = other.year;
        countGrades = other.countGrades;
        grades = new Grade[10];
        for (int i = 0; i < countGrades; i++)
        {
            grades[i] = other.grades[i];
        }
    }
    Student& operator=(const Student& other)   // operator za prisvoqvane
    {
        if (this != &other)
        {
            delete[] grades;
            name = other.name;
            year = other.year;
            countGrades = other.countGrades;
            grades = new Grade[10];
            for (int i = 0; i < countGrades; i++)
            {
                grades[i] = other.grades[i];
            }
        }
        return *this;
    }
};

struct School
{
    string name;
    Student* students;
    int countStudents;
    School()
    {
        countStudents = 0;
        students = new Student[5];
    }
    ~School()
    {
        delete[]students;
    }
    School(const School& other)
    {
        name = other.name;
        countStudents = other.countStudents;
        for (int i = 0; i < countStudents; i++)
        {
            students[i] = other.students[i];
        }
    }
};

void add_student(School& school, Student uch)
{
    school.students[school.countStudents] = uch;
    school.countStudents++;
    cout << "Student added:" << school.name << " (" << uch.name << ")" << endl;;
}

void add_mark(School& school, const string& name, const Grade& ocenka)
{
    for (int i = 0; i < school.countStudents; i++)
    {
        Student& student = school.students[i];
        if (student.name == name)
        {
            student.grades[student.countGrades] = ocenka;
            student.countGrades++;
            return;
        }
    }
    cout << "Student does not exist" << endl;
}

Student* get_by_year(const School& school, int year, int& count)
{
    Student* result = new Student[school.countStudents];
    count = 0;
    for (int i = 0; i < school.countStudents; i++)
    {
        if (school.students[i].year == year)
        {
            result[count] = school.students[i];
            count++;
        }
    }
    return result;
}

Student* get_by_subject(School& school, const string& subject, int& count)
{
    Student* result = new Student[school.countStudents];
    count = 0;
    for (int i = 0; i < school.countStudents; i++)
    {
        for (int j = 0; j < school.students[i].countGrades; j++)
        {
            if (school.students[i].grades[j].subject == subject)
            {
                result[count] = school.students[i];
                count++;
                break;
            }
        }
    }
    return result;
}

Student* get_results_for_subject(School school, const string& subject, int start, int end, int& count)
{
    Student* result = new Student[school.countStudents];
    count = 0;
    for (int i = 0; i < school.countStudents; i++)
    {
        for (int j = 0; j < school.students[i].countGrades; j++)
        {
            Grade k = school.students[i].grades[j];
            if (k.subject == subject && k.grade>=start && k.grade<=end)
            {
                result[count] = school.students[i];
                count++;
                break;
            }
        }
    }
    return result;
}

void graduate_year(School& school,const string* names, int countNames)
{
    Student* result = new Student[school.countStudents];
    int count = 0;
    for (int i = 0; i < school.countStudents; i++)
    {
        for (int j = 0; j < countNames; j++)
        {
            if (school.students[i].name == names[j])
            {
                school.students[i].year++;
                if (school.students[i].year <= 12)
                {
                    result[count] = school.students[i];
                    count++;
                }
            }
        }
    }
    delete[] school.students;
    school.students = result;
    school.countStudents = count;
}

void printStudents(const Student* students, int countStudents)
{
    for (int i = 0; i < countStudents; i++)
    {
        cout << "Name: " << students[i].name << "Year:" << students[i].year << "\n Grades:";
        for (int j = 0; j < students[i].countGrades; j++)
        {
            cout << "Subject: " << students[i].grades[j].subject <<"Grade: "<<students[i].grades[j].grade << endl;
        }
    }
}

int main()
{
    School sch;
    cout << "Enter school name:";
    cin >> sch.name;
    cout << "How many studnets?";
    int count;
    cin >> count;
    for (int i = 0; i < count; i++)
    {
        Student s;
        cin.ignore();
        cout << "Name: ";
        getline(cin, s.name);
        cout << "Year:";
        cin >> s.year;
        add_student(sch, s);
    }
    cout << "How many grades?" << endl;
    cin >> count;
    for (int i = 0; i < count; i++)
    {
        string studentName;
        Grade grade;
        cout << "Student name:";
        cin.ignore();
        getline(cin, studentName);
        cout << "Subject:";
        getline(cin,grade.subject);
        cout << "Enter grade: ";
        cin >> grade.grade;
        add_mark(sch, studentName, grade);
    }
    cout << "Which year? "<<endl;
    int year;
    cin >> year;
    int countStudByYear;
    Student* studentsByYear = get_by_year(sch, year, countStudByYear);
    printStudents(studentsByYear, countStudByYear);
    cout << "Check which students have a grade in this subject: " << endl;
    cin.ignore();
    string subject;
    cin >> subject;
    int countStudentsthathaveagrade;
    Student* studentswhohaveagrade = get_by_subject(sch, subject,countStudentsthathaveagrade);
    printStudents(studentswhohaveagrade,countStudentsthathaveagrade);
    cout << "Enter interval, start: ";
    int start, end;
    cin >> start >> end;
    int countStudentsinthisinterval;
    Student* studentsinthisinterval = get_results_for_subject(sch, subject,start, end,countStudentsinthisinterval);
    printStudents(studentsinthisinterval, countStudentsinthisinterval);
    cout << "How many students?" << endl;
    cin >> count;
    string* names = new string[count];
    cin.ignore();
    for (int i = 0; i < count; i++)
    {
        getline(cin, names[i]);
    }
    graduate_year(sch, names, count);
    printStudents(sch.students, sch.countStudents);
}
