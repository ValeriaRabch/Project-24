#define _CRT_SECURE_NO_WARNINGS
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
	void SetNumber(char* _number) {
		strcpy(number, _number);
	}
	void SetCC(char* _city, char* _country) {
		strcpy(city, _city);
		strcpy(country, _country);
	}
	void SetNCC(char* _namesch, char* _citysch, char* _countrysch) {
		strcpy(nameschool, _namesch);
		strcpy(cityschool, _citysch);
		strcpy(countryschool, _countrysch);
	}
	void SetNumberGroup(int _numbergroup) {
		numbergroup = _numbergroup;
	}
	char* GetName() {
		return name;
	}
	char* GetSurname() {
		return surname;
	}
	char* GetFather() {
		return father;
	}
	char* GetData() {
		return data;
	}
	char* GetNumber() {
		return number;
	}
	char* GetCity() {
		return city;
	}
	char* GetCountry() {
		return country;
	}
	char* GetNameSchool() {
		return nameschool;
	}
	char* GetCitySchool() {
		return cityschool;
	}
};

int main() {

	Student people;
	char a[20], b[20], c[20];

	cout << "Enter name"; cin >> a;
	cout << "Enter surname"; cin >> b;
	cout << "Enter father"; cin >> c;

	people.SetNSF(a, b, c);

	return 0;
}