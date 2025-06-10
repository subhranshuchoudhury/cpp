#include<bits/stdc++.h>
#define macro(a,b,c) ((a>b)?((a>c)? a:c ):((b>c)? b:c ))
using namespace std;
int main(){
    int a=10,b=9,c=11;
    cout<<"The largest number is : "<<macro(a,b,c)<<endl;
}