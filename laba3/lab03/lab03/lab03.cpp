#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL,"Russian");
	int number = 0x12345678;
	char lfie[] = "Kolesnik Artem Anatolij 2007";
	char rfie [] = "Колсеник Артём Анатольевич 2007";
	char lf[] = "Колесник2007anatolij";
	wchar_t Lfie[] = L"Kolesnik Artem Anatolij 2007";
	wchar_t Rfie[] = L"Колсеник Артём Анатольевич 2007";
	wchar_t Lf[] = L"Колесник2007anatolij";
	cout <<lfie << endl;
	cout << rfie<<endl;
	cout << lf << endl;

	return 0 ;
	/*
	кодировка utf-16
	1 строка
	Kolesnik Artem Anatolij2007
	004B 006F 006C 0065 0073 006E 0069 006B 0020 0041 0072 0074 0065 006D 0020 0041 006E 0061 0074 006F 006C 0069 006A 0032 0030 0030 0037
	2 строка
	Колесник Артём Анатольевич2007
	041A 043E 043B 0435 0441 043D 0438 043A 0020 0410 0440 0442 0451 043C 0020 0410 043D 0430 0442 043E 043B 0438 0432 0438 0447 0032 0030 0030 0037
	3 строка
	Колесник2007anatolij
	041A 043E 043B 0435 0441 043D 0438 043A 0032 0030 0030 0037 0061 006E 0061 0074 006F 006C 006F 006A

	
	
	
	*/

	/*
	кодировка utf-8
	1 строка
	Kolesnik Artem Anatolij2007
	4b 6f 6c 65 73 6e 69 6b 20 41 72 74 65 6d 20 41 6e 61 74 6f 6c 69 6a 32 30 30 37
	2 строка
	Колесник Артём Анатольевич2007
	d09a d0be d0bb d0b5 d181 d0bd d0b8 d0ba 20 d090 d180 d182 d191 d0bc 20 d090 d0bd
d0b0 d182 d0be d0bb d18c d0b5 d0b2 d0b8 d187 32 30 30 37
	3 строка
	Колесник2007anatolij
	d09a d0be d0bb d0b5 d181 d0bd d0b8 d0ba 32 30 30 37 61 6e 61 74 6f 6c 69 6a
	
	
	*/

	/*
	кодировка window 1251
	1 строка
	Kolesnik Artem Anatolij2007
	4b 6f 6c 65 73 6e 69 6b 20 41 72 74 65 6d 20 41 6e 61 74 6f 6c 69 6a 32 30 30 37

	2 строка
	Колесник Артём Анатольевич2007
	ca ee eb e5 f1 ed e8 ea 20 c0 f0 f2 b8 ec 20 c0 ed e0 f2 ee eb fc e5 e2 e8 f7 32 30 30 37

	3 строка
	Колесник2007anatolij
	ca ee eb e5 f1 ed e8 ea 32 30 30 37 61 6e 61 74 6f 6c 69 6a 
	
	
	
	
	
	
	
	*/



}
