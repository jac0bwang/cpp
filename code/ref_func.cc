#include<iostream>

using namespace std ;

void Mminl(int a, int b) {

    int temp;

    if (a>b) {
        temp=a ;
        a=b;
        b=temp;
    }
}
void Mmin2(int &a , int &b) {

    int temp ;

    if (a>b) {
        temp=a;
        a =b;
        b=temp ;
    }
}
int main (  ){

    int a=30 ,b=20;

    Mminl (a, b);
    cout << a  << " " <<  b << endl ;

    Mmin2 (a , b);
    cout << a  << " " <<  b << endl ;

    return 0;
}
