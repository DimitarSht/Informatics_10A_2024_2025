#include<iostream>
using namespace std;
struct Array
{
    int *data;
    int currSize;
    int maxCapacity;
};

void reSize(Array &arr)
{
    if(!arr.maxCapacity)
        arr.maxCapacity = 1;

    int *new_data = new int[arr.maxCapacity * 2];
    for(int i = 0; i < arr.currSize; i++)
    {
        new_data[i] = arr.data[i];
    }
    delete[] arr.data;
    arr.data = new_data;
    arr.maxCapacity *= 2;
}


void pushBack(Array &arr, int newElement)
{
    if(arr.currSize == arr.maxCapacity)
    {
        reSize(arr);
    }
    arr.data[arr.currSize] = newElement;
    arr.currSize++;
}

void Insert(Array &arr, int newElement, int position)
{
    if(position > arr.currSize)
    {
        pushBack(arr, newElement);
        return;
    }

//    arr.data
//    [0 ; position - 1] -> остават същите
//    [position ; currSize] -> местим с 1 позиция надясно
    if(arr.currSize == arr.maxCapacity)
    {
        reSize(arr);
    }
    int *new_data = new int[arr.currSize + 1];
    for(int i = 0; i < position; i++)
    {
        new_data[i] = arr.data[i];
    }
    new_data[position] = newElement;
    for(int i = position; i < arr.currSize; i++)
    {
        new_data[i+1] = arr.data[i];
    }
    delete[] arr.data;
    arr.data = new_data;
    arr.currSize++;
}

void append(Array &arr1, Array &arr2)
{
    for(int i = 0; i < arr2.currSize; i++)
    {
        pushBack(arr1, arr2.data[i]);
    }
}

void Remove(Array &arr, int elementToRemove)
{
    bool isFound = false;
    int index;
    for(int i = 0; i < arr.currSize; i++)
    {
        if(arr.data[i] == elementToRemove)
        {
            index = i;
            isFound = true;
            break;
        }
    }

    if(!isFound)
    {
        return;
    }
    else
    {
        for(int i = index; i < arr.currSize - 1; i++)
        {
            arr.data[i] = arr.data[i+1];
        }
        arr.currSize--;
    }
}

int main()
{
    Array arr = {nullptr, 0, 0};
    for(int i = 0; i < 5; i++)
    {
        pushBack(arr, i);
    }

    Array arr2 = {nullptr, 0, 0};
    for(int i = 5; i < 10; i++)
    {
        pushBack(arr2, i);
    }

//    Insert(arr, 6, 2);

    append(arr, arr2);

    Remove(arr, 6);

    for(int i = 0; i < arr.currSize; i++)
    {
        cout<<arr.data[i]<<" ";
    }



    return 0;
}
