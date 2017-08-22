#include <iostream>
using namespace std;

int arr[100],top=-1;
int maximum_limit=(sizeof(arr)/sizeof(arr[0]))-1;
void push(int element)
{
    if(top==maximum_limit)
    {
        cout<<"MAXIMUM SIZE LIMIT REACHED!"<<endl;
    }
    else{
    top++;
    arr[top]=element;
    }
}

int pop()
{
    if(top==-1)
    {
        cout<<"STACK EMPTY!"<<endl;

    }
    else{
       top=top-1;
       return arr[top+1];
    }
}

void display()
{
    int i;
    for(i=0;i<=top;i++)
        cout<<arr[i]<<" "<<endl;
}

int main()
{
    int Popped_element;
    push(5);
    Popped_element=pop();
    push(7);
    push(3);
    push(19);
    push(34);
    push(15);
    Popped_element=pop();
    Popped_element=pop();
    display();
}
