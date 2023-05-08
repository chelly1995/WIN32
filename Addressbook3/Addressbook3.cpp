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


		if (num == 1)
		{


			printf("이름 : ");
			scanf("%s",AddList[Address_Num].name);
			
			printf("나이 : ");
			scanf("%d", &AddList[Address_Num].age);
			
			printf("주소 : ");
			scanf("%s",AddList[Address_Num].address);
			
			
			
			printf(" \n 주소록이 추가되었습니다. \n\n");


			Address_Num++;

		}
		else if (num == 2) 
		{
			//int delete_num;
			
			char name[10];	// 삭제할 이름 저장

			printf("삭제할 이름을 입력해주세요 : ");
			scanf("%s",&name);

			for (int i = 0; i < Address_Num-1; i++)
			{
				//AddList[i] = AddList[i + 1];

				AddList[i].age = AddList[i + 1].age;
				strcpy(AddList[i].name,AddList[i+1].name);
				strcpy(AddList[i].address,AddList[i+1].address);


				Address_Num--;
			}

			

			//printf("%d번이 삭제되었습니다. \n",&delete_num);
	
			Address_Num--;
		}
		else if (num == 3)
		{
			char name[10]; // 검색을 원하는 사원이름 저장
			char temp[20];	// 주소 입력
			int cmd = 0;
			int temp_age;	// 나이 입력

			printf(" 수정할 사람의 이름 : ");
			scanf("%s",&name);

			for (int i = 0; i < Address_Num; i++) {
			
				for (int i = 0; i < Address_Num; i++) {
					if (strcmp(AddList[i].name, name) == 0) {
						// char[]의 비교는 strcmp함수 사용

						printf("[%d] 이름 : %s 나이 : %d, 주소 : %s \n", i + 1, AddList[i].name, AddList[i].age, AddList[i].address);

						printf("수정 목록을 입력해주세요. (1. 나이 2. 주소) \n");
						scanf("%d",&cmd);
					
						if (cmd == 1) {
								
							printf("수정 나이 : ");
							scanf("%d",&temp_age);
							AddList[i].age = temp_age;


						}
						else if (cmd == 2) {
						
							printf("수정 주소 : ");
							scanf("%s", &temp);
							strcpy(AddList[i].address,temp);
				
				
						}
					
					}


				}
			
			}

		}
		else if (num == 4)
		{
			char name[10];	// 검색을 원하는 사원이름 저장

			printf("검색 이름 : ");
			scanf("%s",&name);

			for (int i = 0; i < Address_Num; i++) {
				if (strcmp(AddList[i].name, name) == 0) {
					// char[]의 비교는 strcmp함수 사용

					printf("[%d] 이름 : %s 나이 : %d, 주소 : %s \n", i + 1, AddList[i].name, AddList[i].age, AddList[i].address);
				
				
				}
				else {
					printf(" \n 검색 결과가 없습니다.\n\n");
				
				}
			
			
			}

		}
		else if (num == 5) 
		{

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
