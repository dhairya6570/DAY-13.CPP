#include<iostream>

using namespace std;

class DataHolder{
	
	public:
		
		void print(){
			
			cout<<"Dataholder class"<<endl;
			
		}
	
};

class viewHolder : public DataHolder{
	
	public:
	
	void print(){
		
		cout<<"viewholder class"<<endl;
		
	}
	
};

int main (){
	
	viewHolder obj;
	
	obj.DataHolder::print();
	obj.print();
	
	
	return 0 ;
}
