#include <iostream>

void calcNextRow(
    const int *prevRow,
    int *nextRow,
    int rowNo)
{
    for (int i = 0; i < rowNo + 1; ++i)
    {
        if (i == 0)
        {
            nextRow[i] = 1;
        }
        else if (i == rowNo)
        {
            nextRow[i] = 1;
        }
        else
        {
            nextRow[i] = prevRow[i - 1] + prevRow[i];
        }

        std::cout << nextRow[i] << "  ";
    }
    std::cout << std::endl;
}

void pascal(const int n)
{
    int *arr1 = new int[n];
    int *arr2 = new int[n + 1];

    for (int i = 0; i < n + 1; ++i)
    {
        calcNextRow(arr1, arr2, i);

        int *tmpRow = arr1;
        arr1 = arr2;
        arr2 = tmpRow;
    }
}

int main(void)
{

    pascal(25);

    return 0;
}
// pass in integer
// prevRow initialized as [1] or [0], doesn't matter
// use calcNextRow to make it [1]
//