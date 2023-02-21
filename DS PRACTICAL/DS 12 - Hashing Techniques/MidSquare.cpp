#include <iostream>
#include <sstream>
#include <string>
#include <bits/stdc++.h>
using namespace std;
void print(int arr[], int s){
cout<<"Array is: ";
for(int i=0; i<s;i++){
cout << arr[i] <<" ";
}
}
int linearCollision(int arr[],int j){
for(int h = 0; h<7;h++){
if(arr[j] == 0){
return j;
break;
}
else{
j=j+1;
j = j % 7;
}
}
return -1;
}
int midSquare(int arr[],int s,int number){
int len;
string str= to_string(s);
len = str.length();
if(len%2==0){
int a = (((int) str[len/2]) -48)+ (((int) str[(len/2)-1])-48);
return a/2;
}
else{
return ((int) str[(len/2)]-48);
}
}
int insertingElement(int arr[], int j, int n){
if(j<n && j>=0){
if(arr[j] == 0){
return j;
}
else{
j = linearCollision(arr,j);
return j;
}
}
else if(j>=n){
j = linearCollision(arr,(j/2));
return j;
}
else{
j = -(j);
if(j<n){
j = linearCollision(arr,j);
return j;
}
else{
j = linearCollision(arr,(j/2));
return j;
}
}
return j;
}
void hashingSearch(int arr[]){
int element;
cout<<"\nWhich element do you want to find out? ";
cin>>element;
int s = element*element;
int j = midSquare(arr, s, element);
if(arr[j] == element){
cout<<"Element "<<element<<" found at "<<(j+1);}
else{
if(j == -1){
cout<<"Element "<<element<<" not found.\n";
}
}
}
int main() {
int n=7, number,s,j;
int arr[n]={0};
cout<<"Hashing Searching technique using Mid-square method.\n";
cout<<"The size of the array is 7.\n";
for(int i=0;i<n;i++){
cout << "Enter the number: ";
cin >> number;
s = number*number;
j = midSquare(arr,s,number);
cout<<"Square: "<<s<<", Mid of square: "<<j<<"\n";
cout<<"Ideally element "<<number<<" must be positioned at "<<(j+1)<<"\n";
j = insertingElement(arr, j, n);
arr[j] = number;
cout<<"Element "<<number<<" was positioned at "<<(j+1)<<"\n";
}
print(arr,n);
hashingSearch(arr);
return 0;
}

