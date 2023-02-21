#include <iostream> 
#include <string>

using namespace std;
void insertionSort(int arr[],int size)
{
  int n = size; 
  for (int i = 1; i < n; ++i)
   { 
     int key = arr[i];
     int j = i - 1;

/* Move elements of arr[0..i-1],
   that are greater than key,
  to one position ahead of their current position */

   while (j >= 0 && arr[j] > key) 
    { 
      arr[j + 1] = arr[j];
      j = j - 1;
    }
    arr[j + 1] = key; 
	cout<<"Pass"<<i<<" : ";
for( int k = 0; k < n; k++)
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
  cout<<"Implementation of Insertion Sort program"<<endl;
  cout<<"Enter number of elements to be sorted: "<<endl; 
  cin>>n;
  int arr[n];
  for ( i = 0; i < n; i++)
    {
      cout<<"Enter "<<i+1<<" element"<<endl; 
	  cin>>arr[i];
    }
  insertionSort(arr, n);
  cout<<"Sorted array is: "; 
  printArray(arr, n);
   return 0;
}

