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

























/*
int main(void)
{
    //Declarations
    long cardNumber = get_long("Number: ");
    int odd = 0, even = 0, tmp = 0, tmp1 = 0;
    int counter = 0, tmp_first = 0, tmp_second = 0;
    bool isValid = false;
    int brandNumber = 0;

    //Loop for getting each number from the card and saving the first and second number
    while (cardNumber > 0)
    {
        tmp = cardNumber % 10;
        tmp1 = tmp;
        cardNumber /= 10;
        ++counter;
        //Check for odd digits
        if (counter % 2 == 0)
        {
            tmp_second = tmp;
            tmp *= 2;
            //Loop for double-digit-numbers
            while (tmp != 0)
            {
                odd += tmp % 10;
                tmp /= 10;
            }
        }
        //Check for even digits
        else if (counter % 2 == 1)
        {
            even += tmp;
            tmp_first = tmp;
        }

        //Check for the first number of the card if the card is VISA
        if (counter == 13 || counter == 16)
        {
            brandNumber = tmp1;
        }
        tmp = 0;
    }
    //Adding the two sums and check for valid card
    int sum = even + odd;
    if (sum % 10 == 0)
    {
        isValid = true;
    }

    //Check for each card
    if (isValid)
    {
        if (counter == 15 && (tmp_second == 4 || tmp_second == 7) && tmp_first == 3)
        {
            printf("AMEX\n");
        }
        else if ((counter == 13 || counter == 16) && brandNumber == 4)
        {
            printf("VISA\n");
        }
        else if (counter == 16 && (tmp_first == 1 || tmp_first == 2 || tmp_first == 3 || tmp_first == 4 || tmp_first == 5)
                 && brandNumber == 5)
        {
            printf("MASTERCARD\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }
}
*/
