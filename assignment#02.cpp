#include<iostream>
using namespace std;
int main()
{
	int array[20];
	int size,sum=0;
	int *p;
	cout<<"Enter the size of array:";
	cin>>size;
	cout<<"Please enter "<<size<<" numbers"<<endl;
	for(int i=0; i<size; i++)
	{
		cin>>array[i];
	}
	p=&array[20];
	for(int i=0; i<size; i++)
	{
		sum=sum +*(p+i);
	}
	cout<<"Sum of Array elements is:"<<sum<< endl;
	return 0;
}
