#ifndef ИДЗ1_hpp
#define ИДЗ1_hpp

#include <iostream>
#include <vector>
#include "ИДЗ1.h"
using namespace std;

struct Node
{
    int data;
    Node* next;
};

// 1)Добавление элемента в начало (Инициализация)
void PushUp(Node*& head)
{
    int n;
    cout << "Введите количество элементов, которые вы хотите ввести: ";
    cin >> n;
    cout << "Введиет элементы, которые хотите добавить в список: ";
    for (int i = 0; i < n; i++)
    {   
        Node* new_node = new Node;
        
        cin >> new_node->data;
        new_node->next = head;
        head = new_node;
    }
    cout << endl;

}

// 7)Печать всего списка
void PrintList(Node* head)
{   
    if (head == nullptr)
    {
        cout << "Список пуст";
    }
    else
    {
        Node* temp = head;
        while (temp != nullptr)
        {
            cout << "адрес: [" << temp->next << "] значение: " << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL";
    }
    cout << endl;

}

// 3)Добавление в конец списка 
void PushBack(Node*& head, int value)
{
    Node* new_node = new Node;
    new_node->data = value;
    new_node->next = nullptr;
    if (head == nullptr)
    {
        head = new_node;
    }
    else
    {
        Node* temp = head;
        while (temp->next != nullptr)
        {
            temp = temp->next;
        }
        temp->next = new_node;
    }
}

// 2)Освобождение памяти (удалние всех элементов спсика)
void DeleteAllList(Node*& head)
{   
    while (head != nullptr)
    {
        Node* temp = head;
        head = temp->next; //Так же тут можно написать и head->next; т.к темп указывает на head  содержит его данные
        delete temp;
    }
    
}

// 4)Удаление всех вхождений заданного по значению элемента
void DeleteElem(Node*& head, int value) 
{
    if (head == nullptr)
    {
        cout << "Список пуст, удаление невозможно." << endl;
        return;
    }

    if (head->data == value) 
    {
        while (head->data == value) {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }

    // Поиск элемента в списке
    Node* temp = head;
    while (temp->next != nullptr && temp->next->data != value) 
    {
        if (temp->data == value)
        {
            Node* vrem = temp;
            temp = temp->next;
            delete vrem;
        }
        else
        {
            temp = temp->next;
        }
    }
    cout << endl;
}

// 6)Поиск заданного элемента по значению
void SearchElem(Node*& head, int value)
{
    Node* temp = head;
    vector <int> Poz;
    int CountPoz = 0, CountElem = 0;

    while (temp != nullptr)
    {
        CountPoz++;
        if (temp->data == value)
        {   
            Poz.push_back(CountPoz);
            temp = temp->next;
            CountElem++;
        }
        else
        {
            temp = temp->next;
        }
    }
    if (CountElem == 0)
    {
        cout << "Заданного элемента нет в списке." << endl;
    }
    else if (CountElem == 1)
    {

        cout << "Заданный элемент находится на " << Poz[0] << " позиции." << endl;
    }
    else
    {
        cout << "Заданный элемент находится на ";
        for (int i = 0; i < Poz.size(); i++)
        {
            cout << Poz[i] << ", ";
        }
        cout << "позициях." << endl;
    }
}

#endif /* ИДЗ1_hpp */#pragma once
