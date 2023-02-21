#include<iostream>
using namespace std;

class search
{
	int arr[10];
	public:
	
	void getdata()
	{
		cout<<"Implementation of Searching Algorithms"<<endl;
		cout<<"Enter 10 elements";
		for(int i=0;i<10;i++)
		cin>>arr[i];
	}
	
	void linearSearch()
	{
		int x, i;
		cout<<"Enter an element to search in the array";
		cin>>x;
		for(i=0;i<10;i++)
		{
			if(arr[i]==x)
			{
				cout<<"Element found at index:"<<i;
				break;		
			}
		}	
		if(i==10)
		{
		cout<<"Element not found in array";
		}
	}
	
	void sort()
	{
		int i,j;
		for(i=0;i<10;i++)
		{
			for(j=i+1;j<10;j++)
			{
				if(arr[i]>arr[j])
				{
					int temp=arr[i];
					arr[i]=arr[j];
					arr[j]=temp;
				}
			}
		}
	}
	
	void binarySearch(int x, int first, int last)
	{
		sort();
		int mid=(first+last)/2;
		if(first>last)
		{
			cout<<"Element not found";
		}
		else if(x==arr[mid])
		{
			cout<<"Element found at index: "<<mid;
		}
		else if(x<arr[mid])
		{
			binarySearch(x,0,mid-1);
		}
		else if(x>arr[mid])
		{
			binarySearch(x,mid+1,last);
		}
	}
		
};

int main()
{
	search s;
	s.getdata();
	
	char ch='y';
	int option, x;
	while(ch!='n')
	{
		cout<<"\n1.Linear Search";
		cout<<"\n2.Binary Search";
		cout<<"\n3.Exit";
		cout<<"\nEnter an option: ";
		cin>>option;
		switch(option)
		{
			case 1:
			{
				s.linearSearch();
				break;			
			}	
			
			case 2:
			{
				cout<<"Enter an element to search in the array: ";
				cin>>x;
				s.binarySearch(x,0,9);
				break;
			}
			
			case 3:
			{
				ch='n';
				break;
			}
			
			default:
			{
		 		cout<<"Please choose valid option!!";
				break;
			}
		}
	}
}

