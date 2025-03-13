#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    fstream file("filename.txt", ios::app |
                ios::out | ios::in);
//    app -> дописва
//    out -> пише, като трие старо съдържание
//    in -> чете от файла

    if(!file.is_open())
    {
        cout<<"Error";
    }

    file.close(); /// Затваряме файл

//    ifstream in("filename.txt");
//    ofstream out("filename.txt");

    return 0;
}
