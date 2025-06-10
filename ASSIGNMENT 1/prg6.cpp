#include<bits/stdc++.h>
using namespace std;
int *read_matrix(int m=3,int n=3){
    return new int[m*n];
}
void input_matrix(int *matrix,int m=3, int n=3){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>matrix[i*n+j];
        }
    }
}
void output_matrix(int *matrix,int m=3,int n=3){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i*n+j];
        }
    }
    cout<<endl;
}
void delete_matrix(int *matrix){
    delete []matrix;
}
int main(){
    int m,n;
    int *matrix= read_matrix(m,n);
    input_matrix(matrix,m,n);
    output_matrix(matrix,m,n);
    delete_matrix(matrix);

    return 0;
}
