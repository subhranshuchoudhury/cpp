#include<bits/stdc++.h>
using namespace std;
void swap(int &a ,int &b){
    int temp=a;
    a=b;
    b=temp;
}
int main(){
int a,b;
cout<<"Enter two numbers"<<endl;
cin>>a>>b;
swap(a,b);
cout<<"After swapping a: "<<a<<" b: "<<b<<endl;
}