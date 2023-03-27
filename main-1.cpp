

#include <iostream>
#include "myStack.h"

using namespace std;

void testCopyConstructor(stackType<int> otherStack);

int main()
{

    stackType<int>stack1;
    stackType<int>stack2;

    int number[9]={1,2,3,4,5,6,7,8,9};
    stack1.push(number[0]);
    cout<<"Push "<<number[0]<< " into the stack"<<endl;
    stack1.push(number[1]);
    cout<<"Push "<<number[1]<< " into the stack"<<endl;
    stack1.push(number[2]);
    cout<<"Push "<<number[2]<< " into the stack"<<endl;
    stack1.push(number[3]);
    cout<<"Push "<<number[3]<< " into the stack"<<endl;
    stack1.push(number[4]);
    cout<<"Push "<<number[4]<< " into the stack"<<endl;
    stack1.push(number[5]);
    cout<<"Push "<<number[5]<< " into the stack"<<endl;
    stack1.push(number[6]);
    cout<<"Push "<<number[6]<< " into the stack"<<endl;
    stack1.push(number[7]);
    cout<<"Push "<<number[7]<< " into the stack"<<endl;
    stack1.push(number[8]);
    cout<<"Push "<<number[8]<< " into the stack"<<endl;

    //cout<<"Print all the list of item in Stack1"<<endl;

   /* while (!stack1.isEmptyStack())  
    {
        cout << stack1.top() << " ";
        stack1.pop();
    }
    cout << endl;
    */

    stack1.reverseStack(stack2);
    cout<<"Copies all elements from stack1 to stack2 in reverse order"<<endl;

    cout << "Print all the list of item in Stack2 ";
    while (!stack2.isEmptyStack())  
    {
        cout << stack2.top() << " ";
        stack2.pop();
    }
    cout << endl;    
    
    return 0;
}

void testCopyConstructor(stackType<int> otherStack)
{
    if (!otherStack.isEmptyStack())
        cout << "otherStack is not empty." << endl
        << "The top element of otherStack: "
        << otherStack.top() << endl;
}
