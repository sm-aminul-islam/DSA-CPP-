#include<bits/stdc++.h>
using namespace std;
class Stack
{
public:
    int arr[1000];
    int Top;
    Stack()
    {
        Top = -1;
    }
    bool isEmpty()
    {
        if(Top==-1)
        {
            return true;
        }
        else
        {
            return false;
        }

    }
    void Push(int x)
    {
        Top++;
        arr[Top]=x;
        return ;

    }
    void Pop()
    {
        if(isEmpty())
        {
            return;
        }
        Top--;
        return;
    }

    int top()
    {
        if(isEmpty())
        {
            cout<<"Stack is Empty Now!"<<endl;
        }
        else
        {
            return arr[Top];
        }
    }
    void printStack()
    {
   
       for(int i = 0; i <= Top; i++){
        cout << arr[i] << " ";
       }
       cout << "\n";

    }
};
int main()
{
    Stack s;

    while(1)
    {
      int action ;
      cout<<"1 for Push() "<<"\n"<<"2 for Pop()"<<"\n"<<"3 for Top()\n";
      cin>>action;
      if(action==1)
      {
          int x;
          cin>>x;
          s.Push(x);
      }
      else if(action==2)
      {
          s.Pop();
      }
      else {
        cout<<s.top()<<endl;
      }

      s.printStack();
    }


    return 0;
}
