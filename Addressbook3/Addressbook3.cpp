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

	struct Person* next;	// linkedlist 만들기 위해 자기참조구조체 생성

};

Person* head = NULL;

// 필요한 만큼의 메모리만 쓸 수 있어서 링크드리스트 사용


void link_person(Person* head, Person* person) {

	if (head != NULL) {						// 데이터가 들어있는 상태
		Person* target = NULL;
		target = head;						// 데이터 조회를 하기위해
	
			
		for (int i = 0; true; i++) {
			if (head->next == NULL) {
				break;
			}
			
				target = target->next;


		//	target = target->next;
		}
		target->next = person;
	}
}

int main()
{

	//struct Person* people = (struct Person*)malloc(sizeof(struct Person) * 200);

	int num = 0;
	int count = 0;
	Person* first = NULL;
	Person* current = NULL;

	while (1) {

		printf("----------주소록--------\n");
		printf("1. 데이터 추가\n");
		printf("2. 데이터 삭제\n");
		printf("3. 데이터 조회\n");
		printf("4. 종료\n");
		printf("-----------------------\n");
		printf("번호 입력 : ");
		scanf_s("%d", &num);


		if (num == 1) {

			struct Person* current = (struct Person*)malloc(sizeof(Person));

			printf("이름 : \n");
			//scanf("%s",people[count].name);
			scanf("%s", current->name);
			printf("나이 : \n");
			//scanf("%d",&people[count].age);
			scanf("%d", &current->age);
			printf("주소 : \n");
			//scanf("%s",people[count].address);
			scanf("%s", current->address);


			current->next = NULL;

			if (count == 0) {

				first = current;
				//head = current;
			}
			else {

				 link_person(first, current);
				

			}

			printf(" \n 주소록이 추가되었습니다. \n");

			count++;
		}
		else if (num == 2) {



		}
		else if (num == 3) {

			/*
			for(int i=0; i<count; i++)
			printf("%d,이름:%s,나이:%d,주소:%s\n",i+1,people[i].name, people[i].age, people[i].address);
			*/


			Person* target = NULL;

			target = head;

			//current = head;

			for (int i = 0; target != NULL; i++) {
				printf("%d,이름:%s,나이:%d,주소:%s\n", i + 1, target->name, target->age, target->address);
				
				target = target->next;
				//current = current->next;
			}


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