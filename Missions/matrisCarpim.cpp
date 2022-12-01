#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <time.h>
using namespace std;

int main()
{


    int A[3][2]{{1,2},{0,3},{3,2}};
    int B[2][3]{{1,3,2},{0,1,1}};
    int C[3][3]{0};



    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        } 
    }
    

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
    




    return 0;
}