#include <iostream> 
#include <string>	
using namespace std;
//implementation of Bubble Sort 
void bubbleSort(int arr[], int size)
{
 int n=size;
  for (int i=0;i<n-1;i++)
 {  
     for (int j=0;j<n-i-1;j++)
      {
        if (arr[j] > arr[j+1])
         {
          // swap arr[j+1] and arr[j]
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
         }  
      }
   cout<<"Pass"<<i<<" : ";
     for(int k=0;k<n;k++)
    {   
     cout<<arr[k]<<" ";
    }  
      cout<<endl;
   }
      cout<<endl;
 }
/* Printing array */
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
  cout<<"Implementation of Bubble Sort program "<<endl;
  cout<<"Enter the number of elements to be sorted: "<<endl; 
  cin>>n;
  int arr[n];
  for ( i = 0; i < n; i++)
    {
    cout<<"Enter "<<i+1<<" element"<<endl; 
	   cin>>arr[i];
    }
 bubbleSort(arr,n);
 cout<<"Sorted array is: ";
  printArray(arr,n);
  return 0;	
}

