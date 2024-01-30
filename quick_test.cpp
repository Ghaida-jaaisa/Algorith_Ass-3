#include <bits/stdc++.h>
#include <chrono>

using namespace std;
using namespace std::chrono;

int partition(int arr[],int low,int high)
{
//choose the pivot
int pivot=arr[high];
//Index of smaller element and Indicate
//the right position of pivot found so far
int i=(low-1);
for(int j=low;j<=high;j++)
{      //If current element is smaller than the pivot
	if(arr[j]<pivot)
	{
	//Increment index of smaller element
	i++;
	swap(arr[i],arr[j]);
	}    }
swap(arr[i+1],arr[high]);
return (i+1);
}
// The Quicksort function Implement
void quickSort(int arr[],int low,int high)
{
// when low is less than high
if(low<high)
{
	// pi is the partition return index of pivot
		int pi=partition(arr,low,high);
		//Recursion Call
	//smaller element than pivot goes left and
	//higher element goes right
	quickSort(arr,low,pi-1);
	quickSort(arr,pi+1,high);
}
}
	
void printArray(int arr[], int size) 
{ 
	int i; 
	for (i = 0; i < size; i++) { 
		cout << arr[i] << " "; 
		cout << endl; 
	} 
}
int * getRandom_smallInput( ) {
	//int size=rand()%100;
   static int  r[10];
   // set the seed
   srand( (unsigned)time( NULL ) );
   for (int i = 0; i < 10; ++i) {
      r[i] = rand();
   }

   return r;
}
// Driver program 
int main() 
{ 
	   int *p;
p = getRandom_smallInput();
  int a[10]   ;
  for (int i=0; i<10;i++){
	a[i]=*p++;
  }
      auto start = high_resolution_clock::now();

  quickSort(a,0,9);
  auto end = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(end - start);
	cout << "Execution time: " << duration.count() << " microseconds" << endl;
	cout << "Sorted array: \n"; 
	printArray(a, 10); 
   return 0;
}
