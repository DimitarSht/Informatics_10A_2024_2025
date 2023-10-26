#include<iostream>
using namespace std;
int main()
{
    int num;
    cin>>num;
    for (int i = 0; i<num; i++)
    {
        for (int m = num; m>(i+1); m--)
        {
            cout<<" ";
        }
        for (int k = 0; k<=i; k++)
        {
            cout<<"#";
        }
        cout<<endl;
    }


    return 0;
}

























/*

int main(void)
{
    //Prompting the use for input
    int number;
    do
    {
        number = get_int("Height: ");
    }
    while (number < 1 || number > 8);

    //Defining counters
    int i = 0;
    int j = 1;

    //Loop for the rows
    for (int k = 0; k < number; ++k)
    {
        //Loop for the first part of the pyramid
        while (i < number)
        {
            if (i < number - j)
            {
                printf(" ");
            }
            else
            {
                printf("#");
            }
            ++i;
        }
        i = 0;
        ++j;

        //Loop for the space between the two parts of the pyramid
        for (int s = 0; s < 2; ++s)
        {
            printf(" ");
        }

        //Loop for the second part of the pyramid
        for (int t = number - k - 1; t < number; ++t)
        {
            printf("#");
        }

        printf("\n");
    }
}*/
