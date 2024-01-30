// Optimized implementation of Bubble sort
#include <bits/stdc++.h>
#include <chrono>

using namespace std;
using namespace std::chrono;

// An optimized version of Bubble Sort
void bubbleSort(int arr[], int n)
{
	int i, j;
	bool swapped;
	for (i = 0; i < n - 1; i++) {
		swapped = false;
		for (j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				swap(arr[j], arr[j + 1]);
				swapped = true;
			}
		}
		// If no two elements were swapped
		// by inner loop, then break
		if (swapped == false)
			break;
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
  int arr[10]   ;
  for (int i=0; i<10;i++){
	arr[i]=*p++;
  }
  //	int arr_size = sizeof(arr) / sizeof(arr[0]);
      auto start = high_resolution_clock::now();

  bubbleSort(arr,10);
  
    auto end = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(end - start);

    cout << "Execution time: " << duration.count() << " microseconds" << endl;
	cout << "Sorted array: \n"; 
	printArray(arr, 10); 
   return 0;
}
