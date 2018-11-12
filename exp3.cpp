/*display the index and if it doesn't exist,then print that the number is not found in the array, using bubblesort
*/
#include<iostream>
using namespace std;
class array2
{
	int size;
	int arr[100];
	public:
		array2()
		{
		
	cout<<"enter the size of an array\n";
	cin>>size;
	
	cout<<"enter the array\n";
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
		}
		int temp;
		void bubble_sort()
		{
			for(int i=0;i<size;i++)
			{
				for(int j=0;j<size-i-1;j++)
				{
					if(arr[j]>arr[j+1])
					{
						temp=arr[j];
						arr[j]=arr[j+1];
						arr[j+1]=temp;
					}
				}
			}
		}
		void binary_search()
		{
			int beg=0,end=size-1,mid,value;
			cout<<"enter the value u want to search";
			cin>>value;
			while(beg<end)
			{
			mid=(beg+end)/2;
		
			if(arr[mid]==value)
			{
				cout<<"the element "<<arr[mid]<<" is present at index "<<mid+1<<endl;
				break;
			}
			else if(arr[mid]<value)
			{
				beg=mid+1;
			}
			else
			{
				end=mid-1;
			}
		}
		if(beg>end)
		{
			cout<<"element is not present in array\n";
		}
		}
		void display()
		{
			for(int i=0;i<size;i++)
			{
				cout<<arr[i]<<endl;
			}
		}
};
int main()
{
	array2 obj;
	
	int ch;
	do
	{
	cout<<"enter 1 for bubble sort\n";
	cout<<"enter 2 for binary search\n";
	cout<<"enter 3 for displaying the array\n";
	cout<<"enter the choice";
	cin>>ch;
	switch(ch)
	{
		case 1:
			obj.bubble_sort();
			break;
			case 2:
				obj.binary_search();
				break;
			case 3:
				obj.display();
				break;
			default:
				cout<<"please enter right choice\n";
				break;
	}
}while(ch>=1&&ch<=3);	
}

