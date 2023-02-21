
#include<iostream>
using namespace std;

class sort
{
	int arr[5];
	public:
		
		void getdata()
		{
			int i;
			cout<<"Enter 5 elements";
			for (i=0;i<5;i++)
			cin>>arr[i];
		}
		
		void selectionsort()
		{
			int curr, small, walk, last=4, temp;
			for(curr=0;curr<last;curr++)
			{
				small=curr;
				for(walk=curr+1;walk<=last;walk++)
				{
					if(arr[walk]<arr[small])
					small=walk;
				}
				temp=arr[curr];
				arr[curr]=arr[small];
				arr[small]=temp;
			}
		}
		
		void bubblesort()
		{
			int curr, walk, last=4, temp;
			for(curr=0;curr<last;curr++)
			{
				for(walk=last;walk>curr;walk--)
				{
					if(arr[walk]<arr[walk-1])
					{
						temp=arr[walk];
						arr[walk]=arr[walk-1];
						arr[walk-1]=temp;
					}
				}
			}
		}
		
		void insertionsort()
		{
			int curr, walk, hold;
			for(curr=1;curr<=4;curr++)
			{
				hold=arr[curr];
				walk=curr-1;
				while(hold<arr[walk] && walk>=0)
				{
					arr[walk+1]=arr[walk];
					walk--;
				}
				arr[walk+1]=hold;
			}
		}
		
		void shellsort()
		{
			int curr, last=4, walk, hold, incr;
			incr=last/2;
			while(incr!=0)
			{
				for(curr=1+incr;curr<=last;curr++)
				{
					hold=arr[curr];
					walk=curr-incr;
					while(walk>=0 && hold<arr[walk])
					{
						arr[walk+incr]=arr[walk];
						walk=walk-incr;
					}
					arr[walk+incr]=hold;
				}
				incr=incr/2;
			}
		}
		
		void radixsort()
		{
			int r=1, i, j, temp;
			while(r!=1000)
			{
				for(i=0;i<5;i++)
				{
					for(j=i+1;j<5;j++)
					{
						if(((arr[i]/r)%10)>((arr[j]/r)%10))
						{
							temp=arr[i];
							arr[i]=arr[j];
							arr[j]=temp;
						}
					}
				}
				r=r*10;
			}
		}
		
		void display()
		{
			int i;
			cout<<"Sorted array elements: ";
			for (i=0;i<5;i++)
			cout<<" "<<arr[i];
		}
};

int main()
{
	sort s;
	s.getdata();
	
	char ch='y';
	int option, x;
	while(ch!='n')
	{
		cout<<"\n\n1.Selection Sort";
		cout<<"\n2.Bubble Sort";
		cout<<"\n3.Insertion Sort";
		cout<<"\n4.Shell Sort";
		cout<<"\n5.Radix Sort";
		cout<<"\n6.Exit";
		cout<<"\nEnter an option: ";
		cin>>option;
		switch(option)
		{
			case 1:
			{
				s.selectionsort();
				s.display();
				break;			
			}	
			
			case 2:
			{
				s.bubblesort();
				s.display();
				break;
			}
			
			case 3:
			{
				s.insertionsort();
				s.display();
				break;
			}
			
			case 4:
			{
				s.shellsort();
				s.display();
				break;
			}
			
			case 5:
			{
				s.radixsort();
				s.display();
				break;
			}
			
			case 6:
			{
				ch='n';
				break;
			}
			
			default:
			{
		 		cout<<"Please choose option between 1-6!!";
				break;
			}
		}
	}
}

