#ifndef ИДЗ1_hpp
#define ИДЗ1_hpp

#include <iostream>
#include "ИДЗ1.h"
using namespace std;

struct Node
{
    int data;
    Node* next;
};

// Добавление элемента в начало (Инициализация)
void PushUp(Node*& head, int value)
{
    Node* new_node = new Node;
    new_node->data = value;
    new_node->next = head;
    head = new_node;
}

// Печать всего списка
void PrintList(Node* head)
{   
    if (head == nullptr)
    {
        cout << "Список пуст" << endl;
    }
    else
    {
        Node* temp = head;
        cout << "NULL -> ";
        while (temp != nullptr)
        {
            cout << "адрес: [" << temp->next << "] значение: " << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

}

// Добавление в конец списка 
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

// Освобождение памяти (удалние всех элементов спсика)
void DeleteAllList(Node*& head)
{   
    while (head != nullptr)
    {
        Node* temp = head;
        head = temp->next; //Так же тут можно написать и head->next; т.к темп указывает на head  содержит его данные
        delete temp;
    }
    
}

//Удаление всех вхождений заданного по значению элемента
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
}

#endif /* ИДЗ1_hpp */#pragma once
