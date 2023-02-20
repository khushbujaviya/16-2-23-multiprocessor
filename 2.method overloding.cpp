//2. WAP to demonstrate usage of Method Overloading concept  .
#include<iostream>
using namespace std;
class Bike{
	public:
		void speed(int s){
			cout<<"speed="<<s<<endl;
		}
		void speed(int s,int a){
			cout<<"speed="<<s<<endl;
			cout<<"avg="<<a<<endl;
		}
		void speed(int s,char a){
			cout<<"speed="<<s<<endl;
			cout<<"avg="<<a<<endl;
		}
};
main(){
	Bike b;
	b.speed(30);
	b.speed(50,20);
	b.speed(60,'H');
}
