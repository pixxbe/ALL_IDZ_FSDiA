// ИДЗ1_ФСиД.cpp
#include "ИДЗ1.h"

int main()
{
    setlocale(LC_ALL, "RUS");
    Node* List = nullptr;
    PushUp(List, 3);
    PushUp(List, 15);
    PushBack(List, 2);
    PushUp(List, 15);
    PrintList(List);
    DeleteElem(List, 15);
    PrintList(List);
}

