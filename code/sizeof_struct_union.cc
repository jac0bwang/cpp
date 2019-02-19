#include<iostream>

using namespace std ;

// 8 字节对齐
typedef union{
	long i ;  // 8
	int k[5]; // 5 * 4 = 20
	char c ;  // 1
} UDATE;

// 8 字节对齐
struct data{
	int cat ;  // 4
	UDATE cow; // 24
	double dog; // 8

}too;

UDATE temp ;

int main() {
	// 40 24
	cout << sizeof(struct data) << " " << sizeof(temp )<<endl;
	return 0;
}
