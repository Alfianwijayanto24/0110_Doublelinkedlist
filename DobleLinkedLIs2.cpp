#include <iostream>
#include <string>
using namespace std;

class Node
{
    public:
    int noMhs;
    Node *next;
    Node *prev;

};

class DobleLinkedList
{
    private:
    Node *START;

    public:
    DobleLinkedList()
    {
        START = NULL;
    }

    void addNode()
    {
        int nim;
        cout << "\nEnter the roll number of the student: ";
        cin >> nim;

        // Step1: Allocate memory for new node
        Node *newNode = new Node();

        //
    }
}