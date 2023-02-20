//1. WAP which illustrate the use of Method Overriding concept.
#include<iostream>
using namespace std;
class A{
	public:
		void print(){
			cout <<"A point"<<endl;
		}
};
class B:public A{
	public:
		void print(){
			cout<<"B point"<<endl;
		}
};
main(){
	A b;
	b.print();
}
