#include <iostream>
using namespace std;

int arr[100],top=0,bottom=0;
int maximum_limit=(sizeof(arr)/sizeof(arr[0]))-1;
void enqueue(int element)
{
    if(top==maximum_limit)
    {
        cout<<"MAXIMUM SIZE LIMIT REACHED!"<<endl;
    }
    else{
    arr[top]=element;
    top++;
    }
}

int dequeue()
{
    if(top==bottom)
    {
        cout<<"QUEUE EMPTY!"<<endl;

    }
    else{
       arr[bottom]=0;
       bottom=bottom+1;
    }
}

void display()
{
    int i;
    for(i=bottom;i<top;i++)
        cout<<arr[i]<<" "<<endl;
}

int main()
{
    enqueue(5);
    enqueue(7);
    enqueue(3);
    enqueue(19);
    enqueue(34);
    enqueue(15);
    dequeue();
    dequeue();
    display();
}
