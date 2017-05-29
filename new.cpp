#include<iostream>
#include<cstring>
char* function(void);

int main() {
	char* name;
	name = function();
	std::cout<<name<<" at "<<(int*) name<<'\n';	
	delete [] name;
	name = function();
	std::cout<<name<<" at "<<(int*) name<<'\n';	
	delete [] name;
	return 0;

}

char* function() {
	char temp[80];
	std::cin >> temp;
	char* pn = new char[strlen(temp)+1];
	strcpy(pn, temp);
	return pn;
};
