/*
Една редица от естествени числа ще наричаме зигзагообразна нагоре,
ако за елементите й са изпълняват условията: N1 < N2 > N3 < N4 > N5 <..
Съставете програма, която проверява дали въведени в едномерен масив
редица от числа n(n по избор на потребителя) изпълняват горните изисквания.
Пример: 1 3 2 4 3 7
Изход: Zig-Zag array
*/

#include<iostream>
using namespace std;
int main()
{
    int size;
    cin>>size;
    int numbers[size];
    for(int i = 0; i < size; i++){
        cin>>numbers[i];
    }
    bool zigzag = 1;
    for(int i = 0; i < size - 1; i++){
        if(i % 2 == 0){
            if(numbers[i] > numbers[i+1]){
                zigzag = 0;
                break;
            }
        }
        else{
             if(numbers[i] < numbers[i+1]){
                zigzag = 0;
                break;
            }
        }
    }
    cout<<zigzag;
    return 0;
}
