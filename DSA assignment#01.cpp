#include<iostream>
using namespace std;
            //Add elements in array
void arrayElement(int array[],int size)
{
	if(size==0)
	{
		cout<<"Array in empty."<<endl;
	}
	else
	{
		for(int i=0; i<size; i++)
		{
			cout<<"Array["<<i<<"]=";
			cin>>array[i];
			cout<<endl;
		}
	}
}
        //1- display element of Array
void displayElement(int array[],int size)
{
	if(size==0)
	{
		cout<<"Array in empty."<<endl;
	}
	else
	{
		for(int i=0; i<size; i++)
		{
			cout<<"Array["<<i<<"]="<<array[i]<<endl;
			
		}
    }
}
          //2-Inster Element in array
void insertElement(int array[], int size)
{
	int newNum,pos;
	cout<<"Enter New Number insert in Array:";
	cin>>newNum;
	cout<<"Enter position:";
	cin>>pos;
	
	size=size+1;
	for(int i=size; i>=pos ; i--)
	{
		array[i+1]=array[i];
	}
	array[pos]=newNum;
	cout<<"Array After inster new Element."<<endl;
	for(int i=0; i<size; i++)
		{
			cout<<"Array["<<i<<"]="<<array[i]<<endl;
			
		}
}
         //3-Search Any Element in array
void searchElement(int array[],int size)
{
	int searchNum;
	cout<<"Enter Number:";
	cin>>searchNum;
	for(int i=0; i<size; i++)
	{
		if(array[i]==searchNum)
		{
			cout<<"The Number "<<searchNum<<" found at index "<<i<<endl;
		}
	}
} 
        //4-Delet Any Element in the Array         
void deleteElement(int array[],int size)
{
	int index;
	cout<<"Enter index of element to delete:";
	cin>>index;
	if(index<size)
	{
		size=size-1;
		for(int i=index; i<size; i++)
		{
			array[i]=array[i+1];
		}
	}
	cout<<"Display after Delete Element in the Array"<<endl;
	for(int i=0; i<size; i++)
		{
			cout<<"Array["<<i<<"]="<<array[i]<<endl;
			
		}
} 
            //5-Copy elements of one array to another array
void copyElements(int array[], int size)
{
	int copyArray[100];
	cout<<"Element of Array."<<endl;
	for(int i=0; i<size; i++)
		{
			cout<<"Array["<<i<<"]="<<array[i]<<endl;
		}
	cout<<"Element of copied Array"<<endl;
	for(int j=0; j<size; j++)
	{
		copyArray[j]=array[j];
		cout<<"CopyArray["<<j<<"]="<<copyArray[j]<<endl;
	}			
}
         //6-Get element from given position
void getElement(int array[],int size)
{
	int position;
	cout<<"Enter position for get element from array:";
	cin>>position;
	for(int i=0;i<size;i++)
	{
		if(i==position)
		{
			cout<<"the require element is "<<array[i]<<" at "<<i<<" index"<<endl;
		}
	}
}
         //7-Update elements
void updateElement(int array[],int size)
{
	bool repeat=true;
	int num;
	int index;
	int newValue;
	cout<<"Enter the index for update the value:";
	cin>>index;
	if(index<=size)
	{
	    cout<<"Enter the new value:";
	    cin>>newValue;
	    size=size+1;
	for(int i=0; i>=size ; i++)
	{
		array[i+1]=array[i];
	}
	array[index]=newValue;
        }
        else
        {
          cout<<"you enter worng index number."<<endl;
        }
	cout<<"Array After update the Element."<<endl;
	for(int i=0; i<size; i++)
		{
			cout<<"Array["<<i<<"]="<<array[i]<<endl;	
		}
}
         //8-Get the size of array
void getSize(int size)
{
	cout<<"The size of Array:"<<size<<endl;
}         
        //9-Clear all Array Elements
void clearArray(int array[], int size)
{
	cout<<"Element of Array."<<endl;
	for(int i=0; i<size; i++)
	{
		cout<<"Array["<<i<<"]="<<array[i]<<endl;
	}
	size=0;
	cout<<"Array Elements is clear."<<endl;	
}					       
int main()
{
	int array[100];
	int size,choice;
	cout<<"Enter the size of Array:";
	cin>>size;
	bool repeat=true;
	arrayElement(array,size);
	while(repeat==true)
	{
		cout<<"\n\nEnter a Digit to Perform Required Operation on The List:\n\n";
		cout<<"\nPress 1:\tDisplay Array Elements.";
		cout<<"\nPress 2:\tInsert any Element in Array.";
		cout<<"\nPress 3:\tSearch any Element in Array.";
		cout<<"\nPress 4:\tDelete any Element from the Array";
		cout<<"\nPress 5:\tCopy Array elements in another Array.";
		cout<<"\nPress 6:\tGet Element from given position.";
		cout<<"\nPress 7:\tUpdate the element of arrray.";
		cout<<"\nPress 8:\tGet the size of Array.";
		cout<<"\nPress 9:\tRemove allelements from the Array";
		cout<<"\nPress 0:\tTo exist the loop.";
		cout<<"\nEnter your choice:";
		cin>>choice;
		cout<<"\n";
		switch(choice)
		{
			case 1:
				cout<<"Array Elements With indexes."<<endl;
				displayElement(array,size);
				break;
			case 2:
				insertElement(array,size);
				break;
			case 3:
				searchElement(array,size);
				break;
			case 4:
				deleteElement(array,size);
				break;
			case 5:
				copyElements(array,size);
				break;
			case 6:
				getElement(array,size);
				break;
			case 7:
				updateElement(array,size);
				break;
			case 8:
				getSize(size);
				break;
			case 9:
				clearArray(array,size);
				break;
			case 0:
				repeat=false;
				break;
			default:
				cout<<"Invaild choice."<<endl;
		}
	}
return 0;
}
