#include <iostream>
using namespace std;
int main()
{
    int n, m, key;
    cout << "Enter the size of array " << endl;
    cin >> n >> m;
    int arr[n][m];
    cout << "Enter the array :-";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)

            cin >> arr[i][j];
    }

    cout << "the array is :-" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << arr[i][j] << " ";
        cout << "\n";
    }
    cout << "the spiral order matrix is :-" << endl;
    int row_start = 0, row_end = n - 1, column_start = 0, column_end = m - 1;
    while (row_start <= row_end && column_start <= column_end)

    {
        //    for row_start (to  traverse the first column)
        for (int col = column_start; col <= column_end; col++)
        {
            cout << arr[row_start][col] << " ";
        }
        cout << endl;
        row_start++;

        // to traverse the last column
        for (int row = row_start; row <= row_end; row++)
        {
            cout << arr[row][column_end] << " ";
        }

        column_end--;
        //    to traverse the last row
        for (int col = column_end; col >= column_start; col--)
        {
            cout << arr[row_end][col] << " ";
        }

        row_end--;
        //  to traverse the first row
        for (int row = row_end; row >= row_start; row--)
        {
            cout << arr[row][column_start] << " ";
        }

        column_start++;
    }

    return 0;
}