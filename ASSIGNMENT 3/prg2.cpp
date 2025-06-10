#include<bits/stdc++.h>
using namespace std;
class bookshop{
    char author[50];
    char title[50];
    float price;
    char publisher[50];
public:
    bookshop(){
        strcpy(author,"");
        strcpy(title,"");
        strcpy(publisher,"");
        price=0.0;
    }
    bookshop(const char *a,const char *t,const char *p, float pr){
        strcpy(author,a);
        strcpy(title,t);
        strcpy(publisher,p);
        price=pr;
    }
    void display(){
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Publisher: " << publisher << endl;
        cout << "Price: " << price << endl;
    }
    bool search(const char *t , const char *a) const{
        return(strcmp(title,t)==0 && strcmp(author,a)==0);
    }
};
int main(){
    bookshop b1("J.K. Rowling", "Harry Potter", "Bloomsbury", 500);
    bookshop b2("George Orwell", "1984", "Secker & Warburg", 300);
    bookshop b3("Harper Lee", "To Kill a Mockingbird", "J.B. Lippincott & Co.", 400);

    char a[50],t[50];
    cout<<"Enter the title of the book: ";
    cin>>t;
    cout<<"Enter the author of the book: ";
    cin>>a;

    if(b1.search(t,a)){
        cout<<"Book found"<<endl;
        b1.display();
    }
    else if(b2.search(t,a)){
        cout<<"Book found"<<endl;
        b2.display();
    }
    else if(b3.search(t,a)){
        cout<<"Book found"<<endl;
        b3.display();
    }
    else{
        cout<<"Book not found"<<endl;
    }

    return 0;
}