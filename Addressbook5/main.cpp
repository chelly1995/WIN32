#include <iostream>
#include "Person.h"

#define MAX_ADDRESS 200			// �ִ� �ο� 200���� ����

using namespace std;
int num = 0;

Person AddList[MAX_ADDRESS];	// �迭�� ���� ����Ʈ ����


void AddressbookMenu() {


	cout << "---------- �ּҷ� ----------\n";
	cout << "1. ������ �߰�\n";
	cout << "2. ������ ����\n";
	cout << "3. ������ ����\n";
	cout << "4. ������ �˻�\n";
	cout << "5. ������ ��ȸ\n";
	cout << "6. ���� �����\n";
	cout << "7. ����\n";
	cout << "---------------------------\n";
	cout << "��ȣ �Է� : ";
	cin >> num;
}


int main() {

	//	int num = 0;
	int Address_Num = 0;

	while (1) {

		AddressbookMenu();


		switch (num) {
		case 1:

			AddList[Address_Num].AddData();
			Address_Num++;
			break;

		case 2:

			
			break;

		case 3:

			char modifyname[10]; // ������ ���ϴ� ����̸� ����

			cout << " ������ ����� �̸� : ";
			cin >> modifyname;

			for (int i = 0; i < Address_Num; i++)
				AddList[i].ModifyData(modifyname);

			break;
		case 4:

			char findname[10]; // �˻��� �̸� ����

			cout << "�˻��� ����� �̸� : ";
			cin >> findname ;

			for (int i = 0 ; i < Address_Num; i++)
				AddList[i].FindData(findname);
			break;

		case 5:
			cout << "\n =============== ��ü ����Ʈ ============== \n\n";
			for (int i = 0; i < Address_Num; i++)
				AddList[i].PrintAll();
			break;

		case 6:

		case 7:
			cout << "���α׷� ����";
			break;
		}


	}


	return 0;
}