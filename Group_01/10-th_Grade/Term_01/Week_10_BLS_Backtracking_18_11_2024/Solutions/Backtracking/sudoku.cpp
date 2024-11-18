#include <iostream>
using namespace std;


bool FindUnassignedLocation(int grid[9][9], int& row, int& col)
{
    for (row = 0; row < 9; row++)
        for (col = 0; col < 9; col++)
            if (grid[row][col] == 0)
                return true;
    return false;
}


bool UsedInRow(int grid[9][9], int row, int num)
{
    for (int col = 0; col < 9; col++)
        if (grid[row][col] == num)
            return true;
    return false;
}


bool UsedInCol(int grid[9][9], int col, int num)
{
    for (int row = 0; row < 9; row++)
        if (grid[row][col] == num)
            return true;
    return false;
}


bool UsedInBox(int grid[9][9], int boxStartRow, int boxStartCol, int num)
{
    for (int row = 0; row < 3; row++)
        for (int col = 0; col < 3; col++)
            if (grid[boxStartRow + row][boxStartCol + col] == num)
                return true;
    return false;
}


bool isSafe(int grid[9][9], int row, int col, int num)
{
    return !UsedInRow(grid, row, num) &&
           !UsedInCol(grid, col, num) &&
           !UsedInBox(grid, row - row % 3, col - col % 3, num) &&
           grid[row][col] == 0;
}


void printGrid(int grid[9][9])
{
    for (int row = 0; row < 9; row++)
    {
        for (int col = 0; col < 9; col++)
           {
               cout << grid[row][col] << " ";
               if ((col+1)% 3== 0) cout<<"| ";
           }
        cout << endl;
        if ((row+1)%3 == 0) cout<<"------+-------+--------"<<endl;
    }
}


bool SolveSudoku(int grid[9][9])
{
    int row = 0, col = 0;

    // If there is no unassigned location, we are done
    if (!FindUnassignedLocation(grid, row, col))
        return true; // success!

    // Consider digits 1 to 9
    for (int num = 1; num <= 9; num++)
    {
        // Check if looks promising
        if (isSafe(grid, row, col, num))
        {
            // Make tentative assignment
            grid[row][col] = num;


            // Print dynamic - debug
            //system("cls");
            //cout<<endl<<row<<":"<<col<<endl;
            printGrid(grid);
            cout<<endl<<"============================"<<endl<<endl;
            //for (int i = 1; i <= 90000000; i++) int a=i*9494; // wait


            // Return, if success
            if (SolveSudoku(grid))
                return true;

            // Failure, unmake & try again with next digit
            else
                grid[row][col] = 0;
        }
    }

    // Triggers backtracking
    cout<<endl<<"***********Triggers backtracking*************"<<endl<<endl;
    return false;
}


int main()
{
    int grid[9][9] = { { 3, 0, 6, 5, 0, 8, 4, 0, 0 },
                       { 5, 2, 0, 0, 0, 0, 0, 0, 0 },
                       { 0, 8, 7, 0, 0, 0, 0, 3, 1 },
                       { 0, 0, 3, 0, 1, 0, 0, 8, 0 },
                       { 9, 0, 0, 8, 6, 3, 0, 0, 5 },
                       { 0, 5, 0, 0, 9, 0, 6, 0, 0 },
                       { 1, 3, 0, 0, 0, 0, 2, 5, 0 },
                       { 0, 0, 0, 0, 0, 0, 0, 7, 4 },
                       { 0, 0, 5, 2, 0, 6, 3, 0, 0 } };

    printGrid(grid);
    cout<<endl<<"============================"<<endl<<endl;

    if (SolveSudoku(grid) == true)
    {
        cout<<endl<<"============================"<<endl<<endl;
        printGrid(grid);
    }
    else
        cout << "No solution exists";


    return 0;
}

