#include<iostream>
#include<fstream>
#include<string>

using namespace std;


// fstream   base class
//ifstream
//osstream

class Park{
	public:
	void dataEntry()
	{
		
		string entrydata;
	fstream in("sample2.txt");

	while(getline(in,entrydata)){

		cout<<entrydata <<endl;

	}
	}
};

int main(){
	
	
	Park park;
	park.dataEntry();
	
	 
	
}
