#include<iostream>
#include<string>
using namespace std;
class time{
	private:
	int hr;
	int min;
	int sec;
	string name;
	public:
		int salary(){
				
		}
		
		void accept(){
			cin>>hr>>min>>sec;
		}
	void display(){
		cout<<"hr is"<<hr<<"min is:"<<min<<"sec is:"<<sec;
	}

};


int main1(){
	int n;
	cout<<"inside main";
	time t1;
	time t2;
	
	t1.accept();
	t1.display();

	return 0;
}
