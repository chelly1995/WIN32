// Addressbook2.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#pragma warning(disable:4996)

using namespace std;


struct Person {

	int age;
	char name[10];
	char address[20];

};

int main()
{

	 struct Person* people = (struct Person*)malloc(sizeof(struct Person) * 200);

	int num = 0;
	int count = 0;


	while (1) {
	
		printf("----------주소록--------\n");
		printf("1. 데이터 추가\n");
		printf("2. 데이터 삭제\n");
		printf("3. 데이터 조회\n");
		printf("4. 종료\n");
		printf("-----------------------\n");
		printf("번호 입력 : ");
		scanf_s("%d",&num);


		if (num == 1) {
			printf("이름 : \n");
			scanf("%s",people[count].name);
			printf("나이 : \n");
			scanf("%d",&people[count].age);
			printf("주소 : \n");
			scanf("%s",people[count].address);
			count++;
		}
		else if (num == 2) {
			
			
		
		}
		else if(num == 3){

			for(int i=0; i<count; i++)
			printf("%d,이름:%s,나이:%d,주소:%s\n",i+1,people[i].name, people[i].age, people[i].address);
			
		}
		else if (num == 4) {
		
			printf("프로그램 종료");

			break;
		}
		else {
			printf(" 다시 입력해주세요. ");
			break;
		}
	}

	return 0;
}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
