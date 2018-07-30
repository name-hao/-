#include "menu.h"
#include"student_manage.h"
#include"temp_student.h"
#include<iostream>
#include<fstream>
#include<Windows.h>
using std::cout;
using std::endl;
using std::cin;
using std::cerr;
using std::ifstream;
using std::istream;
using std::ios;
Student_Manage student_manage;
void ShowMenu();
void ShowSubMenu1();
void ShowSubMenu2();
void ShowSubMenu3();
void ShowSubMenu4();
void ShowSubMenu5();
void ShowSubMenu6();
void ShowSubMenu7();

void GetMenuIndex()
{
	string index;
	cin >> index;
	int i{ 0 };
	try
	{
		i = std::stoi(index);
	}
	catch (const std::exception&)
	{
		cout << endl << "������ѡ��" << endl << endl;
		Sleep(300);
		system("cls");
		ShowMenu();
	}
	
	switch (i)
	{
	case 1:
		ShowSubMenu1();
		break;
	case 2:
		ShowSubMenu2();
		break;
	case 3:
		ShowSubMenu3();
		break;
	case 4:
		ShowSubMenu4();
		break;
	case 5:
		ShowSubMenu5();
		break;
	case 6:
		ShowSubMenu6();
		break;
	case 7:
		ShowSubMenu7();
		break;
	case 8:
		student_manage.Up_To_File();
		return;
	default:
		system("cls");
		ShowMenu();
		break;
	}
}

void ShowMenu()
{
	system("cls");
	cout << "------------ѧ���ɼ�����ϵͳ------------" << endl;
	cout << "   1.���ѧ����¼.    2.��ѯѧ����Ϣ.    " << endl;
	cout << "   3.��ʾ������Ϣ.    4.�༭ѧ����Ϣ.    " << endl;
	cout << "   5.ɾ��ѧ����¼.    6.ͳ�������Ϣ.    " << endl;
	cout << "   7.������ʾ.        8.�˳�.           " << endl;
	cout << endl << "��ѡ����(1-8): ";
	GetMenuIndex();
}

void ShowSubMenu1()
{
	system("cls");
	cout << "------------ѧ���ɼ�����ϵͳ:���ѧ����¼------------" << endl;
	cout << "    1.���Сѧ����¼." << endl;
	cout << "    2.�����ѧ����¼." << endl;
	cout << "    3.��Ӵ�ѧ����¼." << endl;
	cout << "    4.�������˵�." << endl;
	int i{ 0 };
	cin >> i;
	{
		Temp_Student temp_student;
		switch (i)
		{
		case 1:
			system("cls");
			cout << "------------ѧ���ɼ�����ϵͳ:���Сѧ����¼------------" << endl;
			cout << endl;
			cout << "ѧ��: ";
			temp_student.type = 1;
			cin >> temp_student.id;
			if (student_manage.FindStudentById(temp_student.id))
			{
				cout << "��ѧ����¼�Ѵ��ڣ�����������" << endl;
				Sleep(1000);
				ShowSubMenu1();
			}
			cout << "����: "; cin >> temp_student.name;
			cout << "�Ա�: "; cin >> temp_student.sex;
			cout << "����: "; cin >> temp_student.age;
			cout << "�༶: "; cin >> temp_student.class_num;
			cout << "����: "; cin >> temp_student.chinese_grade;
			cout << "��ѧ: "; cin >> temp_student.math_grade;
			cout << "Ӣ��: "; cin >> temp_student.english_grade;
			student_manage.AddStudent(temp_student);
			ShowSubMenu1();
			break;
		case 2:
			system("cls");
			cout << "------------ѧ���ɼ�����ϵͳ:�����ѧ����¼------------" << endl;
			cout << endl;
			cout << "ѧ��: ";
			temp_student.type = 2;
			cin >> temp_student.id;
			if (student_manage.FindStudentById(temp_student.id))
			{
				cout << "��ѧ����¼�Ѵ��ڣ�����������" << endl;
				Sleep(1000);
				ShowSubMenu1();
			}
			cout << "����: "; cin >> temp_student.name;
			cout << "�Ա�: "; cin >> temp_student.sex;
			cout << "����: "; cin >> temp_student.age;
			cout << "�༶: "; cin >> temp_student.class_num;
			cout << "����: "; cin >> temp_student.chinese_grade;
			cout << "��ѧ: "; cin >> temp_student.math_grade;
			cout << "Ӣ��: "; cin >> temp_student.english_grade;
			cout << "����: "; cin >> temp_student.geography_grade;
			cout << "��ʷ: "; cin >> temp_student.history_grade;
			student_manage.AddStudent(temp_student);
			ShowSubMenu1();
			break;
		case 3:
			system("cls");
			cout << "------------ѧ���ɼ�����ϵͳ:��Ӵ�ѧ����¼------------" << endl;
			cout << endl;
			cout << "ѧ��: ";
			temp_student.type = 3;
			cin >> temp_student.id;
			if (student_manage.FindStudentById(temp_student.id))
			{
				cout << "��ѧ����¼�Ѵ��ڣ�����������" << endl;
				Sleep(1000);
				ShowSubMenu1();
			}
			cout << "����: "; cin >> temp_student.name;
			cout << "�Ա�: "; cin >> temp_student.sex;
			cout << "����: "; cin >> temp_student.age;
			cout << "�༶: "; cin >> temp_student.class_num;
			cout << "רҵ: "; cin >> temp_student.major_name;
			cout << "Ӣ��: "; cin >> temp_student.english_grade;
			cout << "�������: "; cin >> temp_student.program_designing_grade;
			cout << "����: "; cin >> temp_student.calculous_grade;
			student_manage.AddStudent(temp_student);
			ShowSubMenu1();
			break;
		case 4:
			ShowMenu();
			break;
		default:
			ShowMenu();
			break;
		}
	}
	
}

void ShowSubMenu2()
{
	system("cls");
	cout << "------------ѧ���ɼ�����ϵͳ:��ѯѧ����Ϣ------------" << endl;
	cout << "    1.����ѧ�Ų�ѯ." << endl;
	cout << "    2.����������ѯ." << endl;
	cout << "    3.�������˵�." << endl;
	int i{ 0 };
	cin >> i;
	{
		Temp_Student temp_student;
		Student* find;
		switch (i)
		{
		case 1:
			system("cls");
			cout << "------------ѧ���ɼ�����ϵͳ:����ѧ�Ų�ѯ------------" << endl;
			cout << "����ѧ��: ";
			cin >> temp_student.id;
			find = student_manage.FindStudentById(temp_student.id);
			if (find)
			{
				cout << *find;
				Sleep(2000);
				getchar();
			}
			else
			{
				cout << "�޴�ѧ������";
				getchar();
			}
			ShowSubMenu2();
			break;
		case 2:
			system("cls");
			cout << "------------ѧ���ɼ�����ϵͳ:����������ѯ------------" << endl;
			cout << "��������: ";
			cin >> temp_student.name;
			student_manage.FindStudentByName(temp_student.name);
			Sleep(2000);
			getchar();
			ShowSubMenu2();
			break;
		case 3:
			ShowMenu();
			break;
		default:
			ShowMenu();
			break;
		}
	}
	
}

void ShowSubMenu3()
{
	system("cls");
	cout << "------------ѧ���ɼ�����ϵͳ:��ʾ������Ϣ------------" << endl;
	student_manage.ShowAllStudent();
	cout << "    1.�������˵�." << endl;
	int i{ 0 };
	cin >> i;
	switch (i)
	{
	case 1:
		ShowMenu();
		break;
	default:
		ShowMenu();
		break;
	}
}
//��δд��
void ShowSubMenu4()
{
	system("cls");
	cout << "------------ѧ���ɼ�����ϵͳ:�༭ѧ����Ϣ------------" << endl;
	cout << "����ѧ��: ";
	{
		Temp_Student temp_student;
		cin >> temp_student.id;
		Student* find;
		if (!(find = student_manage.FindStudentById(temp_student.id)))
		{
			cout << "�޴�ѧ��ѧ��" << endl;
			ShowMenu();
		}
		else
		{
			if (typeid(*(find)) == typeid(Junior_Student))
			{
				cout << "�޸ĵ���Сѧ��" << endl;
				temp_student.type = 1;
				cout << "����: "; cin >> temp_student.name;
				cout << "�Ա�: "; cin >> temp_student.sex;
				cout << "����: "; cin >> temp_student.age;
				cout << "�༶: "; cin >> temp_student.class_num;
				cout << "����: "; cin >> temp_student.chinese_grade;
				cout << "��ѧ: "; cin >> temp_student.math_grade;
				cout << "Ӣ��: "; cin >> temp_student.english_grade;
				student_manage.EditStudentById(temp_student.id, temp_student);
				cout << "�޸ĳɹ�" << endl;
			}
			if (typeid(*(find)) == typeid(Senior_Student))
			{
				temp_student.type = 2;
				cout << "����: "; cin >> temp_student.name;
				cout << "�Ա�: "; cin >> temp_student.sex;
				cout << "����: "; cin >> temp_student.age;
				cout << "�༶: "; cin >> temp_student.class_num;
				cout << "����: "; cin >> temp_student.chinese_grade;
				cout << "��ѧ: "; cin >> temp_student.math_grade;
				cout << "Ӣ��: "; cin >> temp_student.english_grade;
				cout << "����: "; cin >> temp_student.geography_grade;
				cout << "��ʷ: "; cin >> temp_student.history_grade;
				student_manage.EditStudentById(temp_student.id, temp_student);
				
			}
			if (typeid(*(find)) == typeid(College_Student))
			{
				cout << "����: "; cin >> temp_student.name;
				cout << "�Ա�: "; cin >> temp_student.sex;
				cout << "����: "; cin >> temp_student.age;
				cout << "�༶: "; cin >> temp_student.class_num;
				cout << "רҵ: "; cin >> temp_student.major_name;
				cout << "Ӣ��: "; cin >> temp_student.english_grade;
				cout << "�������: "; cin >> temp_student.program_designing_grade;
				cout << "����: "; cin >> temp_student.calculous_grade;
				student_manage.EditStudentById(temp_student.id, temp_student);
			}
		}
	}
	ShowMenu();	
}

void ShowSubMenu5()
{
	system("cls");
	cout << "------------ѧ���ɼ�����ϵͳ:ɾ��ѧ����¼------------" << endl;
	cout << "    1.����ѧ��." << endl;
	cout << "    2.�������˵�." << endl;
	int i{ 0 };
	cin >> i;
	{
		string id;
		Student* find;
		switch (i)
		{
		case 1:
			cin >> id;
			find = student_manage.FindStudentById(id);
			if (find)
			{
				student_manage.DeleteStudentById(id);

			}
			else
			{
				cout << "�޴�ѧ��" << endl;
				Sleep(1000);
				ShowSubMenu5();
			}
			Sleep(1000);
			ShowSubMenu5();
			break;
		case 2:
			ShowMenu();
			break;
		default:
			ShowMenu();
			break;
		}
	}
	
}
void ShowSubMenu6()
{
	system("cls");
	cout << "------------ѧ���ɼ�����ϵͳ:ͳ�������Ϣ------------" << endl;
	student_manage.CountNumOfStudent();
	student_manage.CountAverageScore();
	student_manage.CountTotalScore();
	cout << "    1.�������˵�." << endl;
	int i{ 0 };
	cin >> i;
	switch (i)
	{
	case 1:
		ShowMenu();
		break;
	default:
		ShowMenu();
		break;
	}
}
void ShowSubMenu7()
{
	system("cls");
	cout << "------------ѧ���ɼ�����ϵͳ:������ʾ------------" << endl;
	student_manage.SortByTtotalScore();
	student_manage.SortBySingleScore();
	cout << "    1.�������˵�." << endl;
	int i{ 0 };
	cin >> i;
	switch (i)
	{
	case 1:
		ShowMenu();
		break;
	default:
		ShowMenu();
		break;
	}
}