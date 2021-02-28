#include<iostream>
using namespace std;

class Stack
{
	private:
		int array[10];
		int top;
	public:
		Stack()
		{
			top=-1;
			for(int i=0;i<9;i++)
			{
				array[i]=0;
			}
		}
		bool isEmpty()
		{
			if(top==-1)
			 return true;
			else
			 return false; 
		}
		bool isfull()
		{
			if(top==9)
			 return true;
			else
			 return false; 
		}
		int push(int n)
		{
			if(isfull())
			{
				cout<<"Stack overflow."<<endl;
			}
			else
			{
				top++;
				array[top]=n;
			}
		}
		int pop()
		{
			if(isEmpty())
			{
				cout<<"stack underFlow."<<endl;
				return 0;
			}
			else
			{
				int popValue=array[top];
				array[top]=0;
				top--;
				return popValue;
			}
		}
		int count()
		{
			return (top+1);
		}
		int  peek(int pos)
		{
			if(isEmpty())
			{
				cout<<"stack underFlow."<<endl;
				return 0;
			}
			else
			{
				return array[pos];
			}
			}
		void change(int pos, int n)
		{
			array[pos]=n;
			cout<<"value is change at loction "<<pos<<endl;			
		}
		void display()
		{
			cout<<"All values of stack are:"<<endl;
			for(int i=9;i>=0;i--)
			{
				cout<<array[i]<<endl;
			}
		}
	};
	int main()
	{
		Stack s;
		int position, number;
		int choice;
		int w=true;
		while(w=true)
		{
			cout<<"Enter your choice what operation you perform on stack."<<endl;
			cout<<"press 1: push()"<<endl;
			cout<<"press 2: pop()"<<endl;
			cout<<"press 3: isEmpty()"<<endl;
			cout<<"press 4: isfull()"<<endl;
			cout<<"press 5: peek()"<<endl;
			cout<<"press 6: count()"<<endl;
			cout<<"press 7: change()"<<endl;
			cout<<"press 8: Display()"<<endl;
			cout<<"press 0: eixt"<<endl;
			cout<<"Enter the choice:";
			cin>>choice;
			switch(choice)
			{
				case 1:
					cout<<"enter the value you want to push in stack";
					cin>>number;
					s.push(number);
					break;
				case 2:
					cout<<"Remove top value"<<endl;
					cout<<"the value is"<<s.pop()<<endl;
					break;
				case 3:
					if(s.isEmpty())
					    cout<<"Stack is empty."<<endl;
					else
					    cout<<"Stack is not empty."<<endl;
					break;
				case 4:
					if(s.isfull())
					    cout<<"stack is Full."<<endl;
					else
					   cout<<"Stack is not Full."<<endl;
					break;
				case 5:
					cout<<"Enter the position:";
					cin>>position;
					cout<<"the value is "<<s.peek(position)<< " at this position"<<endl;
					break;
				case 6:
					cout<<"Number of elements in stack:"<<s.count()<<endl;
					break;
				case 7:
					cout<<"Enter the position of element you want to change:";
					cin>>position;
					cout<<"Enter the new value:";
					cin>>number;
					s.change(position,number);
					break;
				case 8:
					s.display();
					break;
				case 0:
					w= false;   
					break;
				default:
					cout<<"Invalid choice."<<endl;
			}
			
		}
	}
		

