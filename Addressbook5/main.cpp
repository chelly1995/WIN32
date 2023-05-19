#include <iostream>
#include "Person.h"

#define MAX_ADDRESS 200			// 최대 인원 200으로 가정

using namespace std;
int num = 0;

Person AddList[MAX_ADDRESS];	// 배열을 통해 리스트 구현


void AddressbookMenu() {


	cout << "---------- 주소록 ----------\n";
	cout << "1. 데이터 추가\n";
	cout << "2. 데이터 삭제\n";
	cout << "3. 데이터 수정\n";
	cout << "4. 데이터 검색\n";
	cout << "5. 데이터 조회\n";
	cout << "6. 파일 입출력\n";
	cout << "7. 종료\n";
	cout << "---------------------------\n";
	cout << "번호 입력 : ";
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

			char modifyname[10]; // 수정을 원하는 사원이름 저장

			cout << " 수정할 사람의 이름 : ";
			cin >> modifyname;

			for (int i = 0; i < Address_Num; i++)
				AddList[i].ModifyData(modifyname);

			break;
		case 4:

			char findname[10]; // 검색할 이름 저장

			cout << "검색할 사람의 이름 : ";
			cin >> findname ;

			for (int i = 0 ; i < Address_Num; i++)
				AddList[i].FindData(findname);
			break;

		case 5:
			cout << "\n =============== 전체 리스트 ============== \n\n";
			for (int i = 0; i < Address_Num; i++)
				AddList[i].PrintAll();
			break;

		case 6:

		case 7:
			cout << "프로그램 종료";
			break;
		}


	}


	return 0;
}