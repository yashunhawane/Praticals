#include <iostream>
 #include <string> 
 using namespace std;
int linearSearch(int arr[], int n, int s)
{
 for(int i = 0; i < n; i++)
 {
 	if(arr[i] == s)
	 {
	  return i;
	 }
}
return -1;
}
int main()
{
 int n, i, s,f;
 cout<<"Linear Search Implementation"<<endl;
cout<<"Enter number of elements : "<<endl;
 cin>>n;
int arr[n];
 for ( i = 0; i < n; i++)
  {
    cout<<"Enter "<<i+1<<" element"<<endl;
    cin>>arr[i];
  }
 cout<<"Enter the element which needs to be searched: "<<endl;
 cin>>s;
f = linearSearch(arr,n,s);
   if(f == -1)
   {
     cout<<"Element not found in the array";
   }
   else
   {
    cout<<"Element found at "<<f+1<<" position in the array";
   } 
return 0;
}

