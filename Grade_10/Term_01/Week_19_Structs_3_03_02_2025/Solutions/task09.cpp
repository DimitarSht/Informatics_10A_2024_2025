#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str, wordToReplace, wordReplacement;
    cout<<"Enter a sentence:"<<endl;
    getline(cin, str);
    cout<<"Enter word to replace:"<<endl;
    cin>>wordToReplace;
    cout<<"Enter a replacement word:"<<endl;
    cin>>wordReplacement;
    /// Индекса, от който започва wordToReplace
    int index = 0;

    while((index = str.find(wordToReplace)) != -1)
    {
//        index = str.find(wordToReplace);
//        if(index != -1)
//        {
           str.replace(index, wordToReplace.size(), wordReplacement);
//        }
    }


//    str.erase(index, wordToReplace.size());


    cout<<str;

    return 0;
}
