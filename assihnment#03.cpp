#include <iostream>
using namespace std;
int main()
{
int array[50];
int*ptr=array;
int sum= 0;
int size;
cout<<"Enter the size of array:";
cin>>size;
cout<<"Please enter "<<size<<" numbers"<<endl;
for(int i=0; i<size; i++)
{
	cin>>array[i];
}
for(int i=0;i<size;i++)
{
	cout<<"ptr +"<<i<<" = "<<(ptr+i)<<endl;
	sum= sum + *(ptr +i);
}

cout<<" The sum of Array elements is = "<<sum;
}
