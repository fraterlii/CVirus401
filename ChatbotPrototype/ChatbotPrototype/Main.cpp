#include <iostream>
#include <string>

namespace ChatBot {
	#include <string>
	using namespace std;

	string outputCB = "Hello World";
	
	// Displays the std::string value of ChatBot variable 'outputCB'
	void showOutputCB(){
		cout<< outputCB << endl;
	}
}

using namespace std;

void main(){

	ChatBot::showOutputCB();
	system ("pause");

}