#include <iostream>
#include "Person.h"

//#define MAX_ADDRESS 200			// �ִ� �ο� 200���� ����
using namespace std;

//int Add_Num = 0;


//Person AddList[MAX_ADDRESS];	// �迭�� ���� ����Ʈ ����
char  ch = 'A'; // 100 8bit 2^8 = 256 unicode 4 byte 2^32 = UTF-16 UTF-8
wchar wch = L'A';
void Person::AddData(wchar_t* pszName, int nAge, wchar_t* pszAddress) {
	if (NULL == pszName || NULL == pszAddress)
		return;



	cout << "�̸� : ";
	cin >> m_name;
	cout << "���� : ";
	cin >> m_age;
	cout << "�ּ� : ";
	cin >> m_address;

	cout << endl <<" �ּҷ��� �߰��Ǿ����ϴ�. "<< endl << endl;

}

void Person::DeleteData(char delname, char dname) 
{
	

	cout << "������ �̸��� �Է����ּ��� : ";
	cin >> delname;


}

int Person::FindData(char *findname) 
{

	if (NULL == findname)
		return -1;

	if (strcmp(findname, name)==0) 
	{
			
		cout << "�̸� : " << name << " ���� : " << age << " �ּ� : " << address << endl<< endl;
		return 0;
	}

	return 2;
}

int Person::ModifyData(char *findname) {

	int cmd = 0;

	int temp_age;
	char temp_address;

	if (strcmp(findname, name)==0) {

		cout << "���� ����� �Է����ּ���. (1. ���� 2. �ּ�) \n";
		cin >> cmd;

		if (cmd == 1) {
			cout << "���� ���� : ";
			cin >> temp_age;
			age = temp_age;
		}
		else if (cmd == 2) {
			cout << " ���� �ּ� : ";
			cin >> temp_address;
			address = temp_address;
		}
	}
}

void Person::PrintAll() {


	cout << " �̸� : " << name << " ���� : " << age << " �ּ� : " << address << endl;


}

int PersonManager::AddPerson(Person& AddPerson)
{
	AddList[nCourrentIdx] = AddPerson;

	return 0;
}

int PersonManager::AddPerson(WCHAR* pszName, int nAge, WCHAR* pszAddress) 
{
	Person NewPerson;

	NewPerson.AddData(name, agr, address);

	AddList[nCourrentIdx] = NewPerson;

	return 0;
}