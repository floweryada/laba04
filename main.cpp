#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

using namespace std;


int main()
{
    const int n = 3, m = 3;
    int A[n][m];
    int MAX, MIN;
    int l, k;
    cout << "\nArray: \n";
    int EnterArray(const int n, const int m, int A[]);
    {
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                cin >> A[i][j];
            }
        }
    }
    int MinMax(const int n, const int m, int A[]);
    {
        for(int i = 0; i < n; i++)
        {
            MAX = A[i][0];
            MIN = A[i][0];
            l = 0;
            k = 0;

            for(int j = 0; j < m; j++)
            {
                if(MIN > A[i][j])
                {
                    MIN = A[i][j];
                    k = j;
                }

                if(MAX < A[i][j])
                {
                    MAX = A[i][j];
                    l = j;
                }
            }

            cout << MIN << " " << k << "   ";
            cout << MAX << " " << l << "\n";
            A[i][l] = MIN;
            A[i][k] = MAX;
        }
    }
    cout << "New Array: ";
    int OutArray(const int n, const int m, int A[]);
    {
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                cout << " " << A[i][j];
            }
        }
    }
    cout << endl;
    system("pause");
    return 0;
}



