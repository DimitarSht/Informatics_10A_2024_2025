#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
//    ofstream out("numbers.txt");
//
//    ifstream in("numbers.txt");
//

//    fstream file("numbers.txt", ios::in);
//    if(!file.is_open())
//    {
//        cout<<"Error!"<<endl;
//        return -1;
//    }
//    int n, m;
//    file >> n >> m;
//    n *= 10;
//    file.close();
//
//    file.open("numbers.txt", ios::out);
//    if(!file.is_open())
//    {
//        cout<<"Error!"<<endl;
//        return -1;
//    }
//
//    file << n <<" "<< m;
//    file.close();

//    fstream file("numbers.txt", ios::out);
//    fstream file("numbers.txt", ios::app);

    fstream file("text.txt", ios::in);
    if(!file.is_open())
    {
        cout<<"Error!";
        return -1;
    }
    string line;
    int sz = 0;
    int n;
    while(!file.eof())  /// eof <-> end of file
    {
        file >> n;
        getline(file, line);
        sz += line.length();
    }
    cout<<n<<" ";
    cout<<sz;


    return 0;
}
