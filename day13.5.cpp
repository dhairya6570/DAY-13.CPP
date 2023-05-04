#include<iostream>

using namespace std;

class A{
	
	private:
		
		int id;
		int age;
		
	public:
		
		void set(int i , int a){
			
			id = i ;
			age = a ;
			
		}
		
		void get(){
			
			cout<<"ID : "<<id<<"\t"<<"AGE : "<<age<<endl;
			
		}
		
		A operator + (A n1){
			
			A temp;
			
			temp.id = id + n1.id;
			temp.age = age + n1.age;
			
			return temp;
			
		}
	
};

int main (){
	
	A obj1 , obj2 , obj3 ;
	
	obj1.set(10,30);
	obj1.get();
	
	obj2.set(20,30);
	obj2.get();
	
	obj3 = obj1 + obj2 ;
	obj3.get();
	
	return 0 ;
}
