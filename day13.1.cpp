#include<iostream>
#include<string.h>

using namespace std;

class Message {
	
	private:
		
		char f_n[20];
		
	public:
		
		Message(char v[]){
			
			strcpy(f_n,v);
			
		}
		
		void print(){
			
			cout<<"Wlcome"<<endl;
			
		}
		
		void print(char l_n[]){
			
			cout<<f_n<<" "<<l_n<<endl;	
			
		}
	
};

int main (){
	
	Message obj("Dhairya");
	
	obj.print();
	obj.print("Patel");
	
	return 0 ;
}
