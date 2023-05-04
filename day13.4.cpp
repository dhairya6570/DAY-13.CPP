#include<iostream>

using namespace std;

class A{
	
	private:
		int id;
		int age;
		
	public:
		
		void set(int i , int b){
			
			id = i ;
			age = b ;
			
		}
		void get (){
			
			cout<<"Id & AGE : "<<id<<"\t"<<age<<endl;
			
		}
		
		A operator ++ (){
			
			A temp;
			
			temp.id = ++id;
			
			return temp;
		}
		
		A operator -- (){
			
			A temp;
			
			temp.age = --age;
			
			return temp;
		}	
		
};

int main (){
	
	A obj1 , obj2 , obj3 , obj4;
	
	obj1.set(1,6);
	obj1.get();
	
	obj2 = ++obj1;
	obj2 = --obj1;
	obj2.get();
	
	obj3 = ++obj1;
	obj3 = --obj1;
	obj3.get();
	
	obj4 = ++obj1;
	obj4 = --obj1;
	obj4.get();
	
	return 0 ;
} 
