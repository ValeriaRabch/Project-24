#include<iostream>
using namespace std;

class Student {
	char name[20], surname[20], father[20];
	char data[10], number[12];
	char city[15], country[15];
	char nameschool[20], cityschool[15], countryschool[15];
	int numbergroup;

public:
	Student() {
		strcpy(name, "");
		strcpy(surname, "");
		strcpy(father, "");
		strcpy(data, "");
		strcpy(number, "");
		strcpy(city, "");
		strcpy(country, "");
		strcpy(nameschool, "");
		strcpy(cityschool, "");
		strcpy(countryschool, "");
		numbergroup = 0;
	}
	void SetNSF(char* _name, char* _surname, char* _father) {
		strcpy(name, _name);
		strcpy(surname, _surname);
		strcpy(father, _father);
	}
	void SetData(char* _data) {
		strcpy(data, _data);
	}
};

int main() {

	return 0;
}