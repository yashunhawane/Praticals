#include <iostream>
 #include <string>
using namespace std;
int shellSort(int arr[], int size)
{
  int n = size;
    for (int gap = n/2; gap > 0; gap /= 2)
  {
  	for (int i = gap; i < n; i += 1)
  	{
	  int temp = arr[i];
	  int j;
	  for (j = i; j >= gap && arr[j - gap] > temp; j -= gap)
	       arr[j] = arr[j - gap];
  	       arr[j] = temp;
	      	}
	 cout<<"Pass"<<" : ";
		for ( int k = 0; k < n; k++)
			{
    cout<<arr[k]<<" ";
			}
	cout<<endl;
     }
 return 0;
  }
/* Prints the array */
void printArray(int arr[], int size)
{
int n = size;
for (int i=0; i<n; ++i){ cout<<arr[i]<<" ";
}
}

int main()
{
int n, i;
cout<<"Implementation of Shell Sort program"<<endl;
cout<<"Enter number of elements to be sorted: "<<endl;
 cin>>n;
int arr[n];
 for ( i = 0; i < n; i++)
  {
   cout<<"Enter "<<i+1<<" element"<<endl; 
   cin>>arr[i];
  }
shellSort(arr, n);
cout<<"Sorted array is: ";
printArray(arr, n);
 return 0;
}

