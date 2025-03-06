#include<iostream>
#include<string>
using namespace std;
int main()
{

/// Hello World
/// HelloWorld
/// Hello Earth
    string str, wordToReplace, wordReplacement;
    cout<<"Enter sentence:"<<endl;
    getline(cin, str);
    cout<<"Enter word to replace:"<<endl;
    cin>>wordToReplace;
    cout<<"Enter replacement word:"<<endl;
    cin>>wordReplacement;

    int index = 0;

    /// Докато index е различно от -1, изпълни цикъла, където index = str.find(wordToReplace)
    while((index = str.find(wordToReplace)) != -1)
    {

//        if(index == -1)break;
//        cout<<index<<endl;
        str.replace(index, wordToReplace.size(), wordReplacement);
//        cout<<str<<endl;
    }



//    int index = str.find(' ');
//    str.erase(index, 1);

//    int index = str.find("World");
//    str.replace(index, 5, "Earth");



    cout<<str<<endl;

    return 0;
}



