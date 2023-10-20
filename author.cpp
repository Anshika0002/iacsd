#include<bits/stdc++.h>
using namespace std;
class Author{
	int authorId;
	string authorName;
	int noOfBook;
	int TotalNoOfSaleBook;
	public:
		Author(){
			
		}
		Author (int authorId,string authorName,int noOfBook,int totalNoOfSaleBook){
			this.authorId=authorId;
			this.authorName=authorName;
			this.noOfBook=noOfBook;
			this.TotalNoOfSaleBook=TotalNoOfSaleBook;
		}
		void display(){
			cout<<authorId<<" "<<authorName<<" "<<noOfBook<<" "<<TotalNoOfSaleBook<<endl;
			
		}
		int availableCopy(){
			return (noOfBook-TotalNoOfSaleBook);
		}
};
int main(){
	
}


