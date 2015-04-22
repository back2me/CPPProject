//============================================================================
// Name        : Project1.cpp
// Author      : HuTa
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <conio.h>
#include <cstdlib>
#include "InHinhCanhQuat.h"
using namespace std;

int main() {

	char option;
	char luachon;
	do
	{
		system("CLS");
		cout << "****************ABC - <MSSV> ***************" << endl;
		cout << "** 1. Tinh tien loi ngan hang.           **" << endl;
		cout << "** 2. Dem so te bao song sot.            **" << endl;
		cout << "** 3. Gia lap may tinh bo tui don gian.  **" << endl;
		cout << "** 4. Lich van nien.                     **" << endl;
		cout << "** 5. Hinh canh quat.                    **" << endl;
		cout << "********************************************" << endl;

		cout << "Hay chon mot chuc nang thuc hien: ";
		cin >> option;

		if (option == '1')
		{
			system("CLS");
			cout << "1" << endl;
		}
		else if (option == '2') // Checking if user selected option 2
		{
			system("CLS");
			cout << "2" << endl;
		}
		else if (option == '3') // Checking if user selected option 3
		{
			system("CLS");
			cout << "3" << endl;
		}
		else if (option == '4') // Checking if user selected option 4
		{
			system("CLS");
			cout << "4" << endl;
		}
		else if (option == '5') // Checking if user selected option 5
		{
			system("CLS");
			int chieuCao;
			cout << "Nhap chieu cao cua moi canh quat: ";
			cin >> chieuCao;
			char ** ketQua;
			ketQua = inHinhCanhQuat(chieuCao);
			for (int hang = 0; hang < chieuCao * 2; hang++) {
				for (int cot = 0; cot < chieuCao * 2; cot++) {
					cout << ketQua[hang][cot] << " ";
				}
				cout << endl;
			}
		}
		else //if user has entered invalid choice (other than 1,2,3 or 4)
		{
			system("CLS");
			//Displaying error message
			cout << "Gia tri ban chon khong hop le" << endl;
		}
		cout << "Ban co muon tiep tuc yes(y), no(n): ";
		cin >> luachon;
	} while (luachon == 'y');  //condition of do-while loop

	return 0;
}
