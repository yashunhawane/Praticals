#include <iostream>
 #include <string>
  using namespace std;
int* bubbleSort(int arr[], int size)
{
 int n = size;
  for (int i = 0; i < n-1; i++)
  { 
    for (int j = 0; j < n-i-1; j++)
	 {
	   if (arr[j] > arr[j+1])
        {
          int temp = arr[j];
		    arr[j] = arr[j+1];
		    arr[j+1] = temp;
        }
     }
  }
return arr;
}
int binarySearch(int array[], int x, int low, int high)
 {
    if (high >= low)
	  {
        int mid = low + (high - low) / 2; 
		if (array[mid] == x)
        return mid;
    if (array[mid] > x)
    return binarySearch(array, x, low, mid - 1);
	 return binarySearch(array, x, mid + 1, high);
      }
 
return -1;
 } 
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
 int n, i, s,f; 
 int *a;
 cout<<"Binary Search Implementation"<<endl;
 cout<<"Enter number of elements: "<<endl; 
 cin>>n;
 int arr[n];
 for ( i = 0; i < n; i++)
  {
    cout<<"Enter "<<i+1<<" element"<<endl;
	cin>>arr[i];
  }
    cout<<"Enter the element which needs to be searched: "<<endl;
	cin>>s;
    a = bubbleSort(arr, n); 
	cout<<"Sorted array is: ";
	 printArray(a, n);
	  cout<<"\n";
   f=binarySearch(a, s, 0, n-1); 
   if(f == -1)
   {
     cout<<"Element not found in the array";
   }
   else{
   cout<<"Element found at "<<f+1<<" position in the array";
}
return 0;
}

