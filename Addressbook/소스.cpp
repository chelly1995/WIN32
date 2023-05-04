#include <iostream>
#include <vector>

using namespace std;

#define MAX_NUM 200

// ����ü �迭 ���
/*
struct addressList
{
	char name[10];
	string mail[20];
	string phonenum[10];
	string company_phonenum[10];

};
*/

// ������� ������ �����ϴ� ����ü

typedef struct {

	string name, mail, phone_type, phonenum, company_phonenum, company_name, rank, company_address;

}User;


























































//int openFile(User* ptr, int *num);

void insert(User* ptr, int* num);
void deleted(User* ptr, int* num);
int search(User* ptr, int* num);
void printAll(User* ptr, int* num);



int main() {

	 int num;
	
	User user[MAX_NUM];	// ����� ������ ������ ����ü �迭
	int person = 0;	// ����� user ��

	/*

	int row = 11;
	int col = 200;


	// 2���� ����
	// �ִ� 200���̶�� ����.

	vector<vector<string>> addressBook(col, vector<string>(row, " "));

	// �ʱ�ȭ �Ҵ�
	for (int i = 0; i < row; ++i) {			// �־��� row��ŭ �ݺ�
	
		for (int j = 0; j < col; j++) {
			
		}
	
	}

//	printf("%d",addressBook.size());
*/
	
// �ּҷ� 

	printf(" ============= �ּҷ� ============= \n");
	printf("      1. ������ ����     \n");
	printf("      2. ������ �Է�     \n");
	printf("      3. ������ ����     \n");
	printf("      4. ������ ����     \n");
	printf("      5. ������ �˻�     \n");
	printf("      6. ��       ��     \n");
	printf(" ================================== \n");
	printf("         ��ȣ ���� : ");
	scanf_s("%d",&num);


	switch (num) {
	
	case 1:
		
		printf("\n 1. ������ ���� \n");
		printAll(user,&person);

		break;

	case 2:

		printf("\n 2. ������ �Է� \n");
		insert(user, &person);

		break;

	case 3:

		printf("\n 3. ������ ���� \n");
		//search(user, &person);
		
		break;

	case 4:

		printf("\n 4. ������ ���� \n");
		deleted(user, &person);
		
		break;
	
	case 5:

		printf("\n 5. ������ �˻� \n");
		search(user, &person);
		break;

	case 6:
		printf("\n 6. ���� \n");
		//search(user, &person);
		break;


	}

	return 0;
}


void insert(User*ptr, int* num)
{
	if (*num < MAX_NUM) {
		printf(" �̸� : ");
		scanf_s("%s",ptr[*num].name);
		printf(" �� ��ȣ : ");
		scanf_s("%s",ptr[*num].phonenum);


	}



}

void printAll(User* ptr, int* num) {

	int i = 0;
	if (*num > 0) {
	
		for (i = 0; i < *num; i++) {
		
			printf("�̸� : %s",ptr[i].name);
			printf("�� ��ȣ : %s",ptr[i].phonenum);
		
		}
	
	
	}

}


void deleted(User* ptr, int* num)
{}


int search(User* ptr, int* num)
{}