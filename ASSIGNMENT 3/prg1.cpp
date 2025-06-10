# include<bits/stdc++.h>
using namespace std;
class String{
    char *str;
public:
    //default constructor
    String(){  
        str= new char[1]; //dynamically allocating heap memory for 1 char
        str[0]='\0'; //initializes an empty string
    }
    //parameterized constructor
    String(const char *s){ //accept the string input(cannot modify)
        str= new char[strlen(s)+1];//allocate memory for the string + null char
        strcpy(str,s); // copies the input string to newly allocated memory
    }
    //destructor
    ~String(){
        delete [] str; // frees dynamically allocated memory for 'str'
    }
    //member function to copy 
    void copy(const String &s){
        delete [] str; // free existing memory to avoid memory leak
        str= new char[strlen(s.str)+1];  //allocate new memory of the incoming string
        strcpy(str,s.str); //copy the input object string to this object's string
    }
    //member function to add
    void add(const String &s1,const String &s2){
        delete [] str;
        str= new char[strlen(s1.str) + strlen(s2.str)+1]; //allocate memory for the combined string + null terminator  
        strcpy(str, s1.str); //copy first string
        strcat(str, s2.str); //append first string to the second
    }
    // member function to display
    void display(){
        cout<<str<<endl;
    }

};

int main(){
    // create uninitialized string object 
    String s1;
    s1.display();

    // create objects with string constants
    String s2("Well done!");
    s2.display();
    
    // Concatenates two strings properly
    String s3;
    s3.add(s1,s2);
    s3.display();
    
    // displays desired string object
    String s4;
    s4.copy(s2);
    s4.display();

    return 0;
}
