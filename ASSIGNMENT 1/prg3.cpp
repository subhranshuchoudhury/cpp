#include<bits/stdc++.h>
using namespace std;
int* create_vector(int M){
   return new int[M];
}
int main(){
    int M;
    cout<<"Enter the size of the vector: "<<endl;
    cin>>M;
    int *vector=create_vector(M);

    for(int i=0;i<M;i++){
        cin>>vector[i];
    }
    for(int i=0;i<M;i++){
        cout<<vector[i]<<" ";
    }

    cout<<endl;
    delete []vector;
    return 0;


}