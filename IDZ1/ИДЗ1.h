#ifndef ���1_hpp
#define ���1_hpp

#include <iostream>
#include "���1.h"
using namespace std;

struct Node
{
    int data;
    Node* next;
};

// ���������� �������� � ������ (�������������)
void PushUp(Node*& head, int value)
{
    Node* new_node = new Node;
    new_node->data = value;
    new_node->next = head;
    head = new_node;
}

// ������ ����� ������
void PrintList(Node* head)
{   
    if (head == nullptr)
    {
        cout << "������ ����" << endl;
    }
    else
    {
        Node* temp = head;
        cout << "NULL -> ";
        while (temp != nullptr)
        {
            cout << "�����: [" << temp->next << "] ��������: " << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

}

// ���������� � ����� ������ 
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

// ������������ ������ (������� ���� ��������� ������)
void DeleteAllList(Node*& head)
{   
    while (head != nullptr)
    {
        Node* temp = head;
        head = temp->next; //��� �� ��� ����� �������� � head->next; �.� ���� ��������� �� head  �������� ��� ������
        delete temp;
    }
    
}

//�������� ���� ��������� ��������� �� �������� ��������
void DeleteElem(Node*& head, int value) 
{
    if (head == nullptr)
    {
        cout << "������ ����, �������� ����������." << endl;
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

    // ����� �������� � ������
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

#endif /* ���1_hpp */#pragma once
