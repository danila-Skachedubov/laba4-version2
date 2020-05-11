#include <iostream>
#include"TWList.h"
#include"Twlist.cpp"
using namespace std;

int main()
{
twlist<int> lisT;
lisT.insertLast(8); ///устанавливаем первое значение 8
cout<<"Input position: "<<endl;
lisT.insertAtPos(5);///в аргументе указана позиция
lisT.insertFirst(100);///устанавливаем 3 значение в начала списка
lisT.Print();///выводим все значения
lisT.deleteAtPos(1);///удалим, например, элемент со 2 позиции(по факту с 3, т.к. с 0)
lisT.Print();///проверим результат, вывыедя снова список на экран
lisT.Delete(100);///удалим через аргемуент элемент со значением 100
lisT.Print();///проверим результат, вывыедя снова список на экран
lisT.Clear();///очистим весь список
lisT.Print();///проверим результат, вывыедя снова список на экран
lisT.insertFirst(10);///введем 10
lisT.isContains(100);///ищем элемент 100, не находим, так как такого не имеется
lisT.Print();///проверяем наличие 10
lisT.deletefirst();///удаляем первый элемент, то еть 10
lisT.insertFirst(100);///добавляем два элемента, чтобы проверить правильность выполнения функции
lisT.insertLast(777);
lisT.Print();///проверяем
lisT.deleteLast();///удаляем послдений
lisT.Print();///проверяем
lisT.insertLast(777);///добовляем последний элемент, что бы проверить работоспособность функций get
lisT.getfirst();///проверяем
lisT.getlast();



return 0;
}
