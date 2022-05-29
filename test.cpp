#include<iostream>
using namespace std;
int main ()
{
    int i, j, m, n, x, A[10][10]; 
    cout << "Enter number of rows and columns : ";
    cin >> m >> n;
    if (m != n)
    {
        cout << "Matrix is not a square matrix!";
        exit(0);
    }
    cout << "Enter elements of matrix : ";
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)	
            cin >> A[i][j];
    cout << "Matrix : \n ";
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            cout << A[i][j] << " ";
        cout << "\n ";
    }
    for (i = 0; i < m; i++)
    {
        x = A[i][i];
        A[i][i] = A[i][m - i - 1];
        A[i][m - i - 1] = x;
    }
    cout << "\nMatrix after changing the diagonals : \n ";
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            cout << A[i][j] << " ";
        cout << "\n ";
    }
    return 0;
}