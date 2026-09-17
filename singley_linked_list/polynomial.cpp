#include <iostream>
#include <cstdlib>
using namespace std;

struct poly{
    int coff;
    int exp;
    struct poly *next;
};
struct poly *head;

void createPolynomial(){
    struct poly *term , *temp;
    head = NULL;
    int n;
    cout<<"Enter the number of terms in polynomail: ";
    cin>>n;
    for(int i = 1 ; i<= n ; i++ ){
        term = (struct poly *)malloc(sizeof(struct poly));
        cout<<"Enter the coefficent of "<<i<<" term : ";
        cin>>term->coff;
        cout<<"Enter the exponent of "<<i<<" term : ";
        cin>>term->exp;
        term->next = NULL;
        if(head == NULL){
            head = term;
        }else{
            temp = head;
            while(temp->next != NULL){
                temp = temp->next;
            }
            temp->next = term;
        }
    }
}

void treverse(){
    struct poly *temp;
    if (head == NULL){
        cout<<"polynomial is empty or not created";
        return;
    }else{
        temp = head;
        
        while(temp != NULL){
            if(temp->exp == 1){
                cout<<temp->coff<<"x";
            }
            else if(temp->exp != 0){
            cout<<temp->coff<<"X^"<<temp->exp;
            }else{
                cout<<temp->coff;
            }
            if(temp->next != NULL){
                cout<<" + ";
            }
            temp = temp->next;
        }
        
        
    }
}

int main(){
    createPolynomial();
    treverse();
}