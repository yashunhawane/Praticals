#include <iostream> 
#include <string>
using namespace std;
/* A utility function to get maximum value in arr[] */ 
int getMax(int arr[], int n)
{
int mx = arr[0];
for (int i = 1; i < n; i++) if (arr[i] > mx)
mx = arr[i]; return mx;
}
/* A function to do counting sort of arr[] according to
 the digit represented by exp.*/
void countSort(int arr[], int n, int exp)
{
int output[n];
int i, 
count[10] = { 0 };

 for (i = 0; i < n; i++)
	 {
  count[(arr[i] / exp) % 10]++;
 }
   for (i = 1; i < 10; i++)
   {
   	count[i] += count[i - 1];
   }
     for (i = n - 1; i >= 0; i--)
	  {
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
		 count[(arr[i] / exp) % 10]--;
	  }
	    for (i = 0; i < n; i++)
        {
		  arr[i] = output[i];
	    }
}
/*The main function to that sorts arr[] of size n using Radix Sort */
 	void radixSort(int arr[], int n)
{
	 int m = getMax(arr, n);
	 for (int exp = 1; m / exp > 0; exp *= 10) 
	 {
	    countSort(arr, n, exp);
     }	 
}
/* Prints the array */
void printArray(int arr[], int size)
{
   int n = size;
   for (int i=0; i<n; ++i)
   {
    cout<<arr[i]<<" ";
   }
}
int main()
{
int n, i;
cout<<"Implementation of Radix Sort Program"<<endl;
cout<<"Enter number of elements to be sorted: "<<endl;
cin>>n;
int arr[n];
for ( i = 0; i < n; i++)
{
cout<<"Enter "<<i+1<<" element"<<endl; 
cin>>arr[i];
}
radixSort(arr, n); 
cout<<"Sorted array is: "; 	
printArray(arr, n); 
return 0;
}

