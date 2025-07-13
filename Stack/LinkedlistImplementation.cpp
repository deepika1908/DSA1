//USING LINKEDLIST
#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node(int val){
        this->data=val;
        this->next=NULL;
    }
};
class Stack{
private:
    Node* top;// Pointer to the top of the stack

public:
    Stack(){
        top=NULL;// Initialize top to NULL
    }

    void push(int x){
        Node* temp=new Node(x);
        temp->next=top;
        top=temp;
    }

    int pop(){
        if(top==NULL){
            cout<<"Underflow"<<endl;
            return -1; 
        }
        int val=top->data;
        Node* temp=top;
        top=top->next;
        delete temp;
        return val;

    }

    int peek(){
        if(top==NULL){
            cout<<"Empty stack"<<endl;
            return -1;
        }else{
            return top->data;
        }
    }

    bool isEmpty(){
        return top==NULL;

        }

    int size(){
        int count=0;
        Node* curr = top;
        while(curr != NULL){
            count++;
            curr = curr->next;
        }
        return count;
    }

    
    void traversal(){
        if(top==NULL){
            cout<<"stack is empty"<<endl;
            return;
        }
        cout<<"Elements in stack: ";
        Node* curr=top;
        top=curr;
        while(curr!=NULL){
            cout<<curr->data<<" ";
            curr->next=curr->next;
            curr=curr->next;
        }
    }

    ~Stack(){
        while(!isEmpty()){
            pop();
        }
    }

};

int main() {
    Stack s;

    s.push(5);
    s.push(15);
    s.push(25);

    cout << "Top: " << s.peek() << endl; 
    s.pop();
    cout << "Top after pop: " << s.peek() << endl; 
    cout << "Size of stack: " << s.size() << endl;
    s.traversal();

    return 0;
}
