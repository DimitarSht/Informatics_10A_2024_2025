#include<iostream>
using namespace std;
int main()
{
    long long number;
    cin>>number;
    int counter = 0, first_digit, second_digit;
    int first_second_number = number;

    while(number != 0)
    {
        //first_digit = number % 10;
        //second_digit = number % 10;
        if(number < 100)
        {
            first_second_number = number;
        }
        number/=10;
        counter++;

    }
    if(counter == )
    if(counter == 15 && (first_second_number == 34
                         || first_second_number == 37))
    {
        cout<<"AMEX";
    }
    else if((counter == 13 || counter == 16 )&&
            (40 <= first_second_number &&
            first_second_number <= 49))
    {
        cout<<"VISA";
    }
    else if(counter == 16 &&
            (50 <= first_second_number &&
              first_second_number <= 55))
    {
        cout<<"MASTER";
    }
    else
    {
        cout<<"INVALID";
    }


    return 0;
}



