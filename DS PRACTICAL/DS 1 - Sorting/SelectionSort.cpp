#include <iostream>
#include <string>

using namespace std;

//Implementation of SelectionSort
void selectionSort(int arr[],int size)
{
  int n = size;
  // One by one move boundary of unsorted subarray
  for (int i = 0; i < n-1; i++)

    {
  // Find the minimum element in unsorted array 
      int min_idx = i;
      for (int j=i+1; j < n; j++)
       { 
           if (arr[j] < arr[min_idx])
            {
               min_idx = j;
            } 
       }   
   // Swap the found minimum element with the first element
   
           int temp = arr[min_idx];
               arr[min_idx] = arr[i]; 
               arr[i] = temp;
	     cout<<"Pass"<<i<<" : ";
        for ( int k = 0; k < n; k++)
            {
              cout<<arr[k]<<" ";
            }
        cout<<endl;
}
}

/* Prints the array */
void printArray(int arr[], int size)
 {
     int n = size;
     for (int i=0; i<n; i++)
	 {	
       cout<<arr[i]<<" ";
     }
}
int main()
{
  int n, i;
  cout<<"Implementation of Selection Sort program"<<endl;
  cout<<"Enter number of elements to be sorted: "<<endl; 
  cin>>n;
  int arr[n];

  for ( i = 0; i < n; i++)
   {
      cout<<"Enter "<<i+1<<" element"<<endl; 
	  cin>>arr[i];
   }

    selectionSort(arr, n);
	cout<<"Sorted array is: ";
	printArray(arr, n); 
	return 0;
}

