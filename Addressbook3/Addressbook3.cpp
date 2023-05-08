#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#define MAX_ADDRESS 200			// 최대 인원 200으로 가정

#pragma warning(disable:4996)

using namespace std;


struct Person {

	int age;
	char name[10];
	char address[20];

};

int Address_Num = 0;

Person AddList[MAX_ADDRESS];


int main()
{


	int num = 0;
	

	while (1) {

		printf("----------주소록----------\n");
		printf("1. 데이터 추가\n");
		printf("2. 데이터 삭제\n");
		printf("3. 데이터 수정\n");
		printf("4. 데이터 검색\n");
		printf("5. 데이터 조회\n");
		printf("6. 종료\n");
		printf("-------------------------\n");
		printf("번호 입력 : ");
		scanf_s("%d", &num);


		if (num == 1) {


			printf("이름 : ");
			scanf("%s",AddList[Address_Num].name);
			
			printf("나이 : ");
			scanf("%d", &AddList[Address_Num].age);
			
			printf("주소 : ");
			scanf("%s",AddList[Address_Num].address);
			
			
			
			printf(" \n 주소록이 추가되었습니다. \n");


			Address_Num++;

		}
		else if (num == 2) {
			int delete_num;
			printf("삭제할 번호를 입력해주세요 : ");
			scanf("%d \n",&delete_num);

			for (int i = delete_num; i < Address_Num-1; i++)
			{
				AddList[i] = AddList[i + 1];
			}

			

			printf("%d번이 삭제되었습니다. \n",&delete_num);
	
			Address_Num--;
		}
		else if (num == 5) {

			printf("\n =============== 전체 리스트 ==============\n\n");

			for (int i = 0; i < Address_Num; i++) {
				
				printf("[%d] 이름 : %s 나이 : %d, 주소 : %s \n",i+1, AddList[i].name, AddList[i].age, AddList[i].address );
			
			}
			printf("\n");
		}
		else if (num == 6) {

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
