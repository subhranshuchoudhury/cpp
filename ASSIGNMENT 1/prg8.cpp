#include<bits/stdc++.h>
using namespace std;
double power(int m, int n=2){
    double result=1;
    for(int i=0;i<n;i++){
        result *=m;
    }
    return result;
}
int main(){
    int m,n;
    cout<<"Enter the values of m and n"<<endl;
    cin>>m>>n;
    cout<<"The result is : "<<power(m,n)<<endl;
    cout<<"The square of the number is : "<<power(m)<<endl;
    return 0;

}