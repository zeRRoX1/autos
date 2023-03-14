#pragma once
#include <iostream>
#include <map>
#include <Windows.h>
#include <vector>
using namespace std;


class Auto {
	struct Car {
		char name[30];
		int year;
		int engine;
		int price;
	};
	vector<Car> Cars;

public:
	void add();
	void delete_();
	void show(vector<Car> CarsS);
	vector<Car> getCars() { return Cars; }
	void sort_on_price();
	void sort_on_eng();
	void sort_on_year();
	void find_on_price();
	void find_on_eng();
	void find_on_year();
};

void Auto::add() {
	Car temp;
	cout << "������� �������� ������:\n";
	cin.ignore();
	gets_s(temp.name, 35);
	cout << "������� ��� ������:\n";
	cin >> temp.year;
	cout << "������� ����� ���������:\n";
	cin >> temp.engine;
	cout << "������� ����:\n";
	cin >> temp.price;
	Cars.insert(Cars.end(), temp);
}

void Auto::delete_() {
	char* tempName = new char[30];
	cout << "������� �������� ������:\n";
	cin.ignore();
	gets_s(tempName, 35);

	for (vector<Car>::iterator i = Cars.begin(); i != Cars.end(); i++) {
		if (strcmp(tempName, (*i).name) == 0) {
			Cars.erase(i);
			cout << "������ �������\n";
			return;
		}
	}
}

void Auto::show(vector<Car> CarsS) {
	vector<Car>::iterator i;

	for (i = CarsS.begin(); i != CarsS.end(); i++) {
		cout << "�������� -> " << (*i).name << endl;
		cout << "��� ������� -> " << (*i).year << endl;
		cout << "���� -> " << (*i).price << endl;
		cout << "����� ��������� -> " << (*i).engine << endl << endl;
	}
}

void Auto::sort_on_price() {
	vector<Car> tempCars = Cars;

	Car tempI;

	for (vector<Car>::iterator i = tempCars.begin(); i != tempCars.end(); i++) {
		for (vector<Car>::iterator j = tempCars.end() - 1; j > i; j--) {
			if ((*i).price < (*j).price) {
				tempI = (*i);
				(*i) = (*j);
				(*j) = tempI;
			}
		}
	}
	show(tempCars);
}

void Auto::sort_on_eng() {
	vector<Car> tempCars = Cars;

	Car tempI;

	for (vector<Car>::iterator i = tempCars.begin(); i != tempCars.end(); i++) {
		for (vector<Car>::iterator j = tempCars.end() - 1; j > i; j--) {
			if ((*i).engine < (*j).engine) {
				tempI = (*i);
				(*i) = (*j);
				(*j) = tempI;
			}
		}
	}
	show(tempCars);
}

void Auto::sort_on_year() {
	vector<Car> tempCars = Cars;

	Car tempI;

	for (vector<Car>::iterator i = tempCars.begin(); i != tempCars.end(); i++) {
		for (vector<Car>::iterator j = tempCars.end() - 1; j > i; j--) {
			if ((*i).year < (*j).year) {
				tempI = (*i);
				(*i) = (*j);
				(*j) = tempI;
			}
		}
	}
	show(tempCars);
}

void Auto::find_on_price() {
	int tempPrice;
	cout << "������� ����:\n";
	cin >> tempPrice;

	for (vector<Car>::iterator i = Cars.begin(); i != Cars.end(); i++) {
		if ((*i).price == tempPrice) {
			cout << "�������� -> " << (*i).name << endl;
			cout << "��� ������� -> " << (*i).year << endl;
			cout << "���� -> " << (*i).price << endl;
			cout << "����� ��������� -> " << (*i).engine << endl << endl;
			return;
		}
	}
}

void Auto::find_on_eng() {
	int tempEng;
	cout << "������� ����� ���������:\n";
	cin >> tempEng;

	for (vector<Car>::iterator i = Cars.begin(); i != Cars.end(); i++) {
		if ((*i).engine == tempEng) {
			cout << "�������� -> " << (*i).name << endl;
			cout << "��� ������� -> " << (*i).year << endl;
			cout << "���� -> " << (*i).price << endl;
			cout << "����� ��������� -> " << (*i).engine << endl << endl;
			return;
		}
	}
}

void Auto::find_on_year() {
	int tempYear;
	cout << "������� ���:\n";
	cin >> tempYear;

	for (vector<Car>::iterator i = Cars.begin(); i != Cars.end(); i++) {
		if ((*i).year == tempYear) {
			cout << "�������� -> " << (*i).name << endl;
			cout << "��� ������� -> " << (*i).year << endl;
			cout << "���� -> " << (*i).price << endl;
			cout << "����� ��������� -> " << (*i).engine << endl << endl;
			return;
		}
	}
}
