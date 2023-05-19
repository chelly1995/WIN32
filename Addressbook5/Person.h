#pragma once
class Person
{
	
	int m_age;
	char m_name[10];
	char m_address[20];

	

public:
	void AddData(wchar_t* pszName, int nAge, wchar_t* pszAddress);
	void FindData(char* findname);
	int ModifyData(char* findname);
	void PrintAll();
	void DeleteData(char delname, char dname);

};

class PersonManager 
{
public:
	int AddPerson(Person& AddPerson);
	int AddPerson(wchar_t* pszName, int nAge, wchar_t* pszAddress);

private:
	Person AddList[MAX_ADDRESS];	// 배열을 통해 리스트 구현


};