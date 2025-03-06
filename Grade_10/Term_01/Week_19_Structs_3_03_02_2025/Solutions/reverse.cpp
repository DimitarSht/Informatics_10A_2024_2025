#include<iostream>
#include<string>
using namespace std;
int main()
{
    /// Hello World
    /// World Hello
    string str, word;
    string destination;
    getline(cin, str);

    cin>>word;
    int index;
    while((index = str.find(word)) != -1)
    {
        str.erase(index, word.size() + 1);
    }

//    int start = 0, End = str.size() - 1;
//    while(start <= End)
//    {
//        swap(str[start], str[End]);
//        start++;
//        End--;
//    }
//    for(int i = )
//    {
//        if(str[i] != ' ')
//        {
//            word += str[i];
//        }
//        else
//        {
//            for(int j = word.size() - 1; j >= 0; j--)
//            {
//                destination += word[j];
//            }
//            word.clear();
//        }


    cout<<str<<endl;
    return 0;
}
