#include <iostream>
using namespace std;

class MAT {
private:
    int mat[10][10]; // max size 10x10
    int m, n;
public:
    void read() {
        cout << "Enter matrix dimensions (m x n): ";
        cin >> m >> n;
        cout << "Enter elements:\n";
        for (int i = 0; i < m; ++i)
            for (int j = 0; j < n; ++j)
                cin >> mat[i][j];
    }

    void display() const {
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j)
                cout << mat[i][j] << " ";
            cout << endl;
        }
    }

    MAT add(const MAT& other) {
        MAT result;
        result.m = m;
        result.n = n;
        for (int i = 0; i < m; ++i)
            for (int j = 0; j < n; ++j)
                result.mat[i][j] = mat[i][j] + other.mat[i][j];
        return result;
    }

    MAT subtract(const MAT& other) {
        MAT result;
        result.m = m;
        result.n = n;
        for (int i = 0; i < m; ++i)
            for (int j = 0; j < n; ++j)
                result.mat[i][j] = mat[i][j] - other.mat[i][j];
        return result;
    }

    MAT transpose() {
        MAT result;
        result.m = n;
        result.n = m;
        for (int i = 0; i < m; ++i)
            for (int j = 0; j < n; ++j)
                result.mat[j][i] = mat[i][j];
        return result;
    }
};

int main() {
    MAT A, B;
    cout << "Matrix A:\n";
    A.read();
    cout << "Matrix B:\n";
    B.read();

    cout << "\nA + B = \n";
    A.add(B).display();

    cout << "\nA - B = \n";
    A.subtract(B).display();

    cout << "\nTranspose of A:\n";
    A.transpose().display();

    return 0;
}
