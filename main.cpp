#include <iostream>
#include"TWList.h"
#include"Twlist.cpp"
using namespace std;

int main()
{
twlist<int> lisT;
lisT.insertLast(8); ///������������� ������ �������� 8
cout<<"Input position: "<<endl;
lisT.insertAtPos(5);///� ��������� ������� �������
lisT.insertFirst(100);///������������� 3 �������� � ������ ������
lisT.Print();///������� ��� ��������
lisT.deleteAtPos(1);///������, ��������, ������� �� 2 �������(�� ����� � 3, �.�. � 0)
lisT.Print();///�������� ���������, ������� ����� ������ �� �����
lisT.Delete(100);///������ ����� ��������� ������� �� ��������� 100
lisT.Print();///�������� ���������, ������� ����� ������ �� �����
lisT.Clear();///������� ���� ������
lisT.Print();///�������� ���������, ������� ����� ������ �� �����
lisT.insertFirst(10);///������ 10
lisT.isContains(100);///���� ������� 100, �� �������, ��� ��� ������ �� �������
lisT.Print();///��������� ������� 10
lisT.deletefirst();///������� ������ �������, �� ��� 10
lisT.insertFirst(100);///��������� ��� ��������, ����� ��������� ������������ ���������� �������
lisT.insertLast(777);
lisT.Print();///���������
lisT.deleteLast();///������� ���������
lisT.Print();///���������
lisT.insertLast(777);///��������� ��������� �������, ��� �� ��������� ����������������� ������� get
lisT.getfirst();///���������
lisT.getlast();



return 0;
}
