#include<iostream>
#include<fstream>

void arjeq(char,int );

int main() {
	std::ofstream file; 
	file.open("text.txt");
	file << "Writh text in txte,txt file";
	file.close();
//	char txt[49];
//	std::ifstream file("text.txt");
//	if (! file.is_open()) 
//		std::cout<<"Error"<<'\n';
//	else
//		file >> txt;
//		std::cout<<txt<<'\n';
//		file.getline(txt , 30)<<'\n';
//		std::cout<<txt<<std::endl;
	return 0;
}
