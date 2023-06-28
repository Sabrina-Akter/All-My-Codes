//ID: C191249
//Question.3: Write a program to store the details of patients (room no and name of the patient) in a hospital (room-wise) using linked list. Write a procedure to a)add b) delete c) modify the details.

#include<bits/stdc++.h>
using namespace std;

class node
{
    private:
        string name; // Name
        int room; // Age in integer

    public:
        node *next; // Pointer to next node
        node *head, *tail;
        node *start_ptr = NULL; // Start Pointer (root)
        node *temp;
        node *temp2;
        node *pNextValue;
        node* prev; // empty header

        void update();

    node()
        {
            head = NULL;
            tail = NULL;
        }


        void getInput()
        {
            temp = new node;
            cout << "Room No: ";
            cin >> temp->room;
            cout << "Patient's Name: ";
            cin >> temp->name;
            cout<<"\n";
            temp->next = NULL; // Sets the node to be the last node
            if (start_ptr == NULL)
                start_ptr = temp;
            else
            {
                temp2 = start_ptr; // We know temp2 is not NULL - list not empty!
                while (temp2->next != NULL) // The loop will terminate when temp2
                    temp2 = temp2->next; // points to the last node in the list
                // Move to next link in chain
                temp2->next = temp; // Sets the pointer from that last node to point
                                    // to the node that has just declared
            }
        } // End of getInput() function
};

void node::update()
{
    int updateRoom;
    cout << "Please enter room no: ";
    cin>>updateRoom;
    int ch;
    node *current = start_ptr;

    if (start_ptr == NULL)
        cout << "No record to update!" << endl;
    else
    {
        current = start_ptr;

        while((current!=NULL) && (current->room!=updateRoom))
        {
            current=current->next; // Is this correct?
        }

        if (current==NULL)
            {cout<<"The Requested room is Not Found" << endl;}


        else if(current->room==updateRoom)
        {
                    cout << "Enter New Name: ";
                    cin.ignore();
                    getline(cin, current->name);
        }
            cout<<"RECORD UPDATED!";
        }
}


struct list
{
    list *head, *tail;
    list *next;
};
int main()
{
    node myObj;     // Create an object of node
    myObj.getInput();
    myObj.update();  // Call the method
    return 0;
}

