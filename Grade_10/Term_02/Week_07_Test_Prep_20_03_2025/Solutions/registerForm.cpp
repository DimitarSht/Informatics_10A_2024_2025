#include <iostream>
#include <fstream>
#include <string>
using namespace std;

const string db = "user_database.txt";

struct User
{
    string username;
    string passwrd;
    string firstName;
    string lastName;
    int birthYear;
};

void registerUser(const User &user1, const string &filename)
{
    fstream out(filename, ios::app);
    if (!out.is_open())
    {
        cout << "Error";
        return;
    }
    out << user1.username << " ";
    out << user1.passwrd << " ";
    out << user1.firstName << " ";
    out << user1.lastName << " ";
    out << user1.birthYear << endl;

    out.close();
}

void inputUser(User &u)
{
    cin >> u.username;
    cin >> u.passwrd;
    cin >> u.firstName;
    cin >> u.lastName;
    cin >> u.birthYear;
}

int main()
{
    cout << "Welcome!" << endl;
    while (true)
    {
        cout << "Please enter an operation: ";
        cout << "R - register user, L - login user, M - remove user" << endl;
        char op;
        cin >> op;

        User user1;

        switch (op)
        {
        case 'R':
            inputUser(user1);
            registerUser(user1, db);
            break;

            /// Login functionality
            /// case 'L':

            /// Remove user
            /// case 'M':

        default:
            cout << "Wrong operation, please enter a new one!" << endl;
            break;
        }

        cout << "Do you want to continue? Y/N ";
        char yes;
        cin >> yes;
        if (yes == 'N')
        {
            break;
        }
        else if (yes == 'Y')
        {
            continue;
        }
        else
        {
            cout << "Error" << endl;
        }
    }


    return 0;
}
