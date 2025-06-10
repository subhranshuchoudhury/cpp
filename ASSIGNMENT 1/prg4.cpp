#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, n;
    cout << "Enter number of rows: " << endl;
    cin >> m;
    cout << "Enter number of columns: " << endl;
    cin >> n;

    int *matrix = new int[m * n];

    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cin >> matrix[i * n + j];
        }
    }
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cout << matrix[i * n + j] << " ";
        }
        cout << endl;
    }
    delete[] matrix;
    return 0;
}