//write Data to a File

#include <iostream>
#include <fstream>
using namespace std;

int main(){
	ofstream file("students.txt");
	string name;
	cout << "Enter 5 student names:\n";
	for (int i = 1; i <= 5; i++){
		cout << "Student " << i << ":";
		getline(cin,name);
		file << name << endl;
	}
	file.close();
	cout << "\n Data saved successfully to student.txt\n";
	return 0;
}
