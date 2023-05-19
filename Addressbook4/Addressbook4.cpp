#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <string>

#define MAX_ADDRESS 200			// 최대 인원 200으로 가정

#pragma warning(disable:4996)

using namespace std;


struct Person {

/*
	int age;
	char name[10];
	char address[20];
	*/
	//char name[10];
	string name,mail,phone_num,rank;

	string phone_type = "휴대폰";
	string home_num = "";
	string fax = "";
	string company_name = "소프트캠프(주)";
	string company_address = "경기도 성남시 분당구 판교로 228번길 17 판교세븐벤처밸리2 이랜텍동 2층 (삼평동 633)";


	const char* name = name.c_str();

};

int Address_Num = 0;

Person AddList[MAX_ADDRESS];


int main()
{

	int num = 0;

	while (1) {

		printf("---------- 주소록 ----------\n");
		printf("1. 데이터 추가\n");
		printf("2. 데이터 삭제\n");
		printf("3. 데이터 수정\n");
		printf("4. 데이터 검색\n");
		printf("5. 데이터 조회\n");
		printf("6. 파일 입출력\n");
		printf("7. 종료\n");
		printf("---------------------------\n");
		printf("번호 입력 : ");
		scanf_s("%d", &num);


		if (num == 1)
		{

			printf("이름 : ");
			scanf("%s", AddList[Address_Num].name);

			printf("메일 : ");
			scanf("%s", AddList[Address_Num].mail);

			printf("핸드폰 번호 : ");
			scanf("%s", AddList[Address_Num].phone_num);

			printf("직급 : ");
			scanf("%s", AddList[Address_Num].rank);


			printf(" \n 주소록이 추가되었습니다. \n\n");


			Address_Num++;

		}
		else if (num == 2)
		{

			const char* name;	// 삭제할 이름 저장

			printf("삭제할 이름을 입력해주세요 : ");
			scanf("%s", &name);

			for (int i = 0; i < Address_Num; i++) {
				if (strcmp(AddList[i].name, name) == 0) {
					// char[]의 비교는 strcmp함수 사용

					/*
					AddList[i].age = AddList[i + 1].age;
					strcpy(AddList[i].name, AddList[i + 1].name);
					strcpy(AddList[i].address, AddList[i + 1].address);

					*/
					printf(" 주소록이 삭제되었습니다. \n");


				}
			};

			Address_Num--;
		}/*
		else if (num == 3)
		{

			char name[10]; // 검색을 원하는 사원이름 저장
			char temp[20];	// 주소 입력
			int cmd = 0;
			int temp_age;	// 나이 입력

			printf(" 수정할 사람의 이름 : ");
			scanf("%s", &name);

			for (int i = 0; i < Address_Num; i++) {

				if (strcmp(AddList[i].name, name) == 0) {
					// char[]의 비교는 strcmp함수 사용

					printf("[%d] 이름 : %s, 나이 : %d, 주소 : %s \n", i + 1, AddList[i].name, AddList[i].age, AddList[i].address);

					printf("수정 목록을 입력해주세요. (1. 나이 2. 주소) \n");
					scanf("%d", &cmd);

					if (cmd == 1) {

						printf("수정 나이 : ");
						scanf("%d", &temp_age);
						AddList[i].age = temp_age;

					}
					else if (cmd == 2) {

						printf("수정 주소 : ");
						scanf("%s", &temp);
						strcpy(AddList[i].address, temp);


					}

				}
			}
		}
		else if (num == 4)
		{

			char name[10];	// 검색을 원하는 사원이름 저장

			printf("검색 이름 : ");
			scanf("%s", &name);

			for (int i = 0; i < Address_Num; i++) {
				if (strcmp(AddList[i].name, name) == 0) {
					// char[]의 비교는 strcmp함수 사용

					printf("[%d] 이름 : %s, 나이 : %d, 주소 : %s \n", i + 1, AddList[i].name, AddList[i].age, AddList[i].address);

				}
				else {

					printf(" \n 검색 결과가 없습니다.\n\n");

				}
			}

		}
		else if (num == 5)
		{

			printf("\n =============== 전체 리스트 ============== \n\n");

			for (int i = 0; i < Address_Num; i++) {

				printf("[%d] 이름 : %s, 나이 : %d, 주소 : %s \n", i + 1, AddList[i].name, AddList[i].age, AddList[i].address);

			}
			printf("\n");
		}
		else if (num == 6) {

			// 파일 불러오기, 파일 저장하기
			int cmd = 0;

			if (cmd = 1) {


			}
			else if (cmd = 2) {


			}

			ofstream fout;		// 파일 출력 객체 생성

			fout.open("a.text");

	

			for (int i = 0; i < Address_Num; i++) {

				fout << i + 1 << '\t' << AddList[i].name << '\t' << AddList[i].age << "\t" << AddList[i].address;
				fout << endl;

			}
			printf("\n");

			fout.close(); // 파일을 닫습니다.

			printf("\n 파일이 저장되었습니다. \n");


		}*/
		else if (num == 7) {

			printf("프로그램 종료");

			break;
		}
		else {
			printf("\n 다시 입력해주세요. \n\n");

		}
	}


	return 0;
}

// 파일 입출력 추가
// 하이웍스 주소록 선언 -> 구조체 변수 string 변환