#include<iostream>
#include<stack>
using namespace std;

class Stack{
    private:
        int *arr;
        int top;
        int capacity;

    public:
    Stack(int size){
        capacity=size;
        arr=new int[capacity];
        top=-1;
    }

    void push(int x){
        if(top==capacity-1){
            cout<<"Overflow"<<endl;
            return ;
        }
        arr[++top]=x;
    }

    int pop(){
        if(top>=0){
            return arr[top--];
        }else{
        cout<<"underflow";
        return -1;
    }
}

    int peek(){
        if(top==-1){
            cout<<"empty stack"<<endl;
            return -1;
        }
        return arr[top];
    }

    bool isEmpty(){
        return top==-1;
    }

    int size(){
        return top+1;

    }

    void del(){
        top=-1;
    }

    void traversal(){
        if(top>=0){
            cout<<"Stack element: ";
            for(int i=0;i<=top;i++){
                cout<<arr[i]<<" ";
            }
        cout<<endl;
        }else{
            cout<<"stack is empty"<<endl;
        }
    }
    //Add a destructor to free memory:
    ~Stack() {
    delete[] arr;
}

};

int main() {
    Stack s(5);
    s.push(5);
    s.push(15);
    s.push(25);
    s.push(35);
    s.push(45);
    //s.push(55); //overflow case
    s.traversal();
    
    cout << "Top: " << s.peek() << endl;
    cout << "Size is: " << s.size() << endl;

    s.pop();
    cout << "Top after peek: " << s.peek() << endl;
    s.pop();
    cout << "Top after peek: " << s.peek() << endl;

    if (s.isEmpty()) {
        cout << "Stack is empty" << endl;
    } else {
        cout << "Stack is not empty" << endl;
    }

    return 0;
}
