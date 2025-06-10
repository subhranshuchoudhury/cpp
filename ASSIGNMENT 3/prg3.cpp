#include<bits/stdc++.h>
using namespace std;
class Complex{
    float real;
    float imaginary;
public:
    Complex(){
        real=0.0;
        imaginary=0.0;
    }
    Complex(float r , float i){
        real=r;
        imaginary=i;
    }
    static Complex addcomplex(const Complex &c1 , const Complex &c2){
        float addReal= c1.real + c2.real;
        float addImaginary= c1.imaginary + c2.imaginary;
        return Complex(addReal,addImaginary);
    }
    void display()const{
        cout<<real<<" +j"<<imaginary<<endl;
    }
};
int main(){
    Complex A(3.12,5.65);
    Complex B(2.75,1.21);

    cout<<"A: "<<endl;
    A.display();
    cout<<"B: "<<endl;
    B.display();

    Complex C =Complex::addcomplex(A,B);

    cout<<"The Sum is : "<<endl;
    C.display();

    return 0;

}
