#include <iostream>
#include "Person.h"

//#define MAX_ADDRESS 200			// 최대 인원 200으로 가정
using namespace std;

//int Add_Num = 0;


//Person AddList[MAX_ADDRESS];	// 배열을 통해 리스트 구현
char  ch = 'A'; // 100 8bit 2^8 = 256 unicode 4 byte 2^32 = UTF-16 UTF-8
wchar wch = L'A';
void Person::AddData(wchar_t* pszName, int nAge, wchar_t* pszAddress) {
	if (NULL == pszName || NULL == pszAddress)
		return;



	cout << "이름 : ";
	cin >> m_name;
	cout << "나이 : ";
	cin >> m_age;
	cout << "주소 : ";
	cin >> m_address;

	cout << endl <<" 주소록이 추가되었습니다. "<< endl << endl;

}

void Person::DeleteData(char delname, char dname) 
{
	

	cout << "삭제할 이름을 입력해주세요 : ";
	cin >> delname;


}

int Person::FindData(char *findname) 
{

	if (NULL == findname)
		return -1;

	if (strcmp(findname, name)==0) 
	{
			
		cout << "이름 : " << name << " 나이 : " << age << " 주소 : " << address << endl<< endl;
		return 0;
	}

	return 2;
}

int Person::ModifyData(char *findname) {

	int cmd = 0;

	int temp_age;
	char temp_address;

	if (strcmp(findname, name)==0) {

		cout << "수정 목록을 입력해주세요. (1. 나이 2. 주소) \n";
		cin >> cmd;

		if (cmd == 1) {
			cout << "수정 나이 : ";
			cin >> temp_age;
			age = temp_age;
		}
		else if (cmd == 2) {
			cout << " 수정 주소 : ";
			cin >> temp_address;
			address = temp_address;
		}
	}
}

void Person::PrintAll() {


	cout << " 이름 : " << name << " 나이 : " << age << " 주소 : " << address << endl;


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