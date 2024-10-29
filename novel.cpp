#include "novel.h"
#include <iostream>
#include <string>
using namespace std;

Novel::Novel() {
	setlocale(LC_ALL, "Russian");
	cout << "����� ������������ �� ��������� ��� ������ Novel" << endl << endl;
	fio = "";
	live = "";
	works = "";
	bio = "";
}

Novel::Novel(const Novel& other) {
	setlocale(LC_ALL, "Russian");
	cout << "����� ������������ ����������� ��� ������ Novel" << endl << endl;
	*this = other;
}

Novel::~Novel() {
	setlocale(LC_ALL, "Russian");
	cout << "����� ����������� ��� ������ Novel" << endl << endl;
}

void Novel::p() {
	cin >> *this;
}

Novel& Novel::operator=(const Novel& other) {
	this->fio = other.fio;
	this->live = other.live;
	this->works = other.works;
	this->bio = other.bio;
	return *this;
}

ofstream& operator<<(ofstream& fout, Novel& obj) {
	fout << obj.fio << " " << endl;
	fout << obj.live << " " << endl;
	fout << obj.works << " " << endl;
	fout << obj.bio << " " << endl;
	fout << endl;
	return fout;
}

ifstream& operator>>(ifstream& fin, Novel& obj) {
	getline(fin >> ws, obj.fio);
	getline(fin >> ws, obj.live);
	getline(fin >> ws, obj.works);
	getline(fin >> ws, obj.bio);
	return fin;
}



ostream& operator<<(ostream& out, Novel& obj) {
	setlocale(LC_ALL, "Russian");
	out << "��� �������� ����������: " << obj.fio << endl;
	out << "���� �����: " << obj.live << endl;
	out << "������������: " << obj.works << endl;
	out << "������� ���������: " << obj.bio << endl;
	return out;
}

istream& operator>>(istream& in, Novel& obj) {
	setlocale(LC_ALL, "Russian");
	cout << "������� ������:" << endl << endl;

	cout << "��� �������� ����������: ";
	getline(in, obj.fio);
	getline(in, obj.fio);
	cout << "���� �����: ";
	getline(in, obj.live);

	cout << "������������: ";
	getline(in, obj.works);

	cout << "������� ���������: ";
	getline(in, obj.bio);

	return in;
}

