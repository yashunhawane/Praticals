#include <iostream> 
#include <string>
using namespace std;
void swap(int arr[], int i, int j)
{
  int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
int partition(int arr[], int low, int high)
{
  // pivot
  int pivot = arr[high];
  /* Index of smaller element and indicates the right position
 of pivot found so far */
   int i = (low - 1); 
for(int j = low; j <= high - 1; j++)
  {
/*If current element is smaller than the pivot if */
    if(arr[j] < pivot)
   {
/* Increment index of smaller element */
       i++;
     swap(arr, i, j);
   }
}
    swap(arr, i + 1, high); 
    return (i + 1);
}
void quickSort(int arr[], int low, int high)
{
if (low < high)
{
/* pi is partitioning index, arr[p] is now at right place */
   int pi = partition(arr, low, high);
/* Separately sort elements before partition and after partition */
    quickSort(arr, low, pi - 1); 
    quickSort(arr, pi + 1, high);
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
  cout<<"Implementation of Quick Sort program"<<endl;
  cout<<"Enter number of elements to be sorted: "<<endl; 
  cin>>n;
  int arr[n];
for ( i = 0; i < n; i++)
{
  cout<<"Enter "<<i+1<<" element"<<endl; 
  cin>>arr[i];
}
  quickSort(arr, 0, n-1); 
  cout<<"Sorted array is: ";
  printArray(arr, n);
  return 0;
}

