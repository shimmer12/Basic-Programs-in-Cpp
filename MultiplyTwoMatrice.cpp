#include <iostream>
using namespace std;

int main(){

    int r1, c1;
    cout << "Enter the order of the first matrix: ";
    cin >> r1 >> c1;
    int r2, c2;
    cout << "Enter the order of the second matrix: ";
    cin >> r2 >> c2;
    while(c1 != r2){
        cout << "Enter order again" << "\n";
        cout << "Enter the order of the first matrix: ";
        cin >> r1 >> c1;
        cout << "Enter the order of the second matrix: ";
        cin >> r2 >> c2;
    }
    int arr1[r1][c1], arr2[r2][c2], arr3[r1][c2];
    cout << "Enter the elements of the first matrix: " << "\n";
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            cin >> arr1[i][j];
        }
    }
    cout << "Enter the elements of the second matrix: " << "\n";
    for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            cin >> arr2[i][j];
        }
    }
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            arr3[i][j] = 0;
            for(int k=0;k<c1;k++)
            {
                arr3[i][j] += arr1[i][k]*arr2[k][j];
            }
        }
    }
    cout << "The resultant matrix is: " << "\n";
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            cout << arr3[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}