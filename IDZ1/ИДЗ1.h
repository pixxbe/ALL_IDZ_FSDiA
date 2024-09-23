#ifndef ���1_hpp
#define ���1_hpp

#include <iostream>
#include <vector>
#include "���1.h"
using namespace std;

struct Node
{
    int data;
    Node* next;
};

// 1)���������� �������� � ������ (�������������)
void PushUp(Node*& head)
{
    int n;
    cout << "������� ���������� ���������, ������� �� ������ ������: ";
    cin >> n;
    cout << "������� ��������, ������� ������ �������� � ������: ";
    for (int i = 0; i < n; i++)
    {   
        Node* new_node = new Node;
        
        cin >> new_node->data;
        new_node->next = head;
        head = new_node;
    }
    cout << endl;

}

// 7)������ ����� ������
void PrintList(Node* head)
{   
    if (head == nullptr)
    {
        cout << "������ ����";
    }
    else
    {
        Node* temp = head;
        while (temp != nullptr)
        {
            cout << "�����: [" << temp->next << "] ��������: " << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL";
    }
    cout << endl;

}

// 3)���������� � ����� ������ 
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

// 2)������������ ������ (������� ���� ��������� ������)
void DeleteAllList(Node*& head)
{   
    while (head != nullptr)
    {
        Node* temp = head;
        head = temp->next; //��� �� ��� ����� �������� � head->next; �.� ���� ��������� �� head  �������� ��� ������
        delete temp;
    }
    
}

// 4)�������� ���� ��������� ��������� �� �������� ��������
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
    cout << endl;
}

// 6)����� ��������� �������� �� ��������
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
        cout << "��������� �������� ��� � ������." << endl;
    }
    else if (CountElem == 1)
    {

        cout << "�������� ������� ��������� �� " << Poz[0] << " �������." << endl;
    }
    else
    {
        cout << "�������� ������� ��������� �� ";
        for (int i = 0; i < Poz.size(); i++)
        {
            cout << Poz[i] << ", ";
        }
        cout << "��������." << endl;
    }
}

#endif /* ���1_hpp */#pragma once
