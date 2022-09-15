

//middle element formula..

#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node *next;


    //constructor//

    node(int n){
        this->data = n;
        this ->next = NULL;
    }
};

// insert in linklist

void insert(node *&head , int n){
    if (head == NULL){
        node *temp = new node(n);
        head = temp;
    }
    else{
        node *temp = new node(n);
        temp->next = head;
        head = temp;
    }
}


///find middle element given a link list..

void middlefind(node *head){
    node *slow= head;
    node *fast = head;

    while(fast->next != NULL){
            slow=slow->next;
            // cout<<slow->data;
            fast =fast->next;
            if(fast ->next != NULL){
                fast = fast->next;
            }
            // cout<<slow->data;
    }
    cout<<"this is middle node "<<slow->data<<endl;

}


int main (){
    node *head= NULL;
    insert(head, 10);
    insert(head, 20);
    insert(head, 30);
    insert(head, 40);
    insert(head, 50);


    middlefind(head);
    // cout<<head->data<<endl;


}