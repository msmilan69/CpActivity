#include<iostream>
using namespace std;

//no. of parameters 
int add(int a,int b){
    cout<<"function 1"<<endl;
    return (a+b);
}
double add(double a,double b){
    cout<<" function 2"<<endl;
    return (a+b);
}
int add(int a,int b,int c){
    cout<<"function 3"<<endl;
    return (a+b+c);
}
//sequnce of parametar
double add(int a,double b){
    cout<<"function 4"<<endl;
    return (a+b);
}
double add(double a,int b){
    cout<<"function 5"<<endl;
    return (a+b);
}
int main(){
    cout<<add(2,3)<<endl;  // two int variable
    cout<<add(3.5,4.5)<<endl; // two double variable
    cout<<add(3,4,5)<<endl;  // three int variable
    cout<<add(5,3.5)<<endl;  //one int and one double
    cout<<add(4.5,6)<<endl;  //one double and one int
    return 0;
}