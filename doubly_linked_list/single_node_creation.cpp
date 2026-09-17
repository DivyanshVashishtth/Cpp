#include <iostream>
#include <cstdlib>
using namespace std;
struct dlist
{
    int data;
    struct dlist *prev;
    struct dlist *next;
};
struct dlist *head;

void createSingleNode(){
    struct dlist *newnode;
    head = NULL;
    newnode = (struct dlist *)malloc(sizeof(struct dlist));
    cout<<"Enter the data for new node: ";
    cin>>newnode->data;
    newnode->prev = NULL;
    newnode->next= NULL;
    head = newnode;
    cout<<"NULL<--";
    cout<<head->data;
    cout<<"-->NULL";
}



int main(){
    createSingleNode();
}