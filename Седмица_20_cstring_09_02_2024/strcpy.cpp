#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    // Define char arrays
    char str1[] = "Hello Students!";
    char str2[] = "NPMG";

    char str3[40];
    char str4[40];

    char str5[] = "NePeMeGe";

    // String copy used
    strcpy(str2, str1);
    strcpy(str3, "Copy successful");
    strncpy(str4, str5, 5);

    // Char arrays printed
    for(int i = 0; i< strlen(str1); i++)
    {
        cout<<str1[i];
    }
    cout<<endl;
    cout << "str1: " << str1 << "\nstr2: " << str2
         << "\nstr3: " << str3 << "\nstr4: " << str4<<endl;
    cout<<"str5: "<<str5;
    return 0;
}
