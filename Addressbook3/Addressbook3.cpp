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

	struct Person* next;	// linkedlist ����� ���� �ڱ���������ü ����

};

Person* head = NULL;

// �ʿ��� ��ŭ�� �޸𸮸� �� �� �־ ��ũ�帮��Ʈ ���


void link_person(Person* head, Person* person) {

	if (head != NULL) {						// �����Ͱ� ����ִ� ����
		Person* target = NULL;
		target = head;						// ������ ��ȸ�� �ϱ�����
	
			
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

		printf("----------�ּҷ�--------\n");
		printf("1. ������ �߰�\n");
		printf("2. ������ ����\n");
		printf("3. ������ ��ȸ\n");
		printf("4. ����\n");
		printf("-----------------------\n");
		printf("��ȣ �Է� : ");
		scanf_s("%d", &num);


		if (num == 1) {

			struct Person* current = (struct Person*)malloc(sizeof(Person));

			printf("�̸� : \n");
			//scanf("%s",people[count].name);
			scanf("%s", current->name);
			printf("���� : \n");
			//scanf("%d",&people[count].age);
			scanf("%d", &current->age);
			printf("�ּ� : \n");
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

			printf(" \n �ּҷ��� �߰��Ǿ����ϴ�. \n");

			count++;
		}
		else if (num == 2) {



		}
		else if (num == 3) {

			/*
			for(int i=0; i<count; i++)
			printf("%d,�̸�:%s,����:%d,�ּ�:%s\n",i+1,people[i].name, people[i].age, people[i].address);
			*/


			Person* target = NULL;

			target = head;

			//current = head;

			for (int i = 0; target != NULL; i++) {
				printf("%d,�̸�:%s,����:%d,�ּ�:%s\n", i + 1, target->name, target->age, target->address);
				
				target = target->next;
				//current = current->next;
			}


		}
		else if (num == 4) {

			printf("���α׷� ����");

			break;
		}
		else {
			printf(" �ٽ� �Է����ּ���. ");
			break;
		}
	}

	return 0;
}