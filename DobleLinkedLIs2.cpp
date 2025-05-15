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

        //Setep 2: Assig value to the data fields
        newNode->noMhs = nim;

        //Setape 3: Insert at beginning if list is empaty or nim is dmallest
         if(START == NULL || nim <= START ->noMhs)
         {
            if (START !=NULL && nim == START ->noMhs )
         {
            cout << "\nDuplicate number not allowed"<< endl;
            return;
         }
         //Stepe 4: newNode.next = START
         newNode->next = START;
         }

    }
}