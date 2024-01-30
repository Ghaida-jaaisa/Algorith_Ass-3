// selection sort 
#include <bits/stdc++.h> 
#include <ctime>
 #include <cstdlib>
 #include <chrono>
using namespace std; 
using namespace std::chrono;

// Function for Selection sort 
void selectionSort(int arr[], int n) 
{ 
	int i, j, min_idx; 
	// One by one move boundary of 
	// unsorted subarray 
	for (i = 0; i < n - 1; i++) { 

		// Find the minimum element in 
		// unsorted array 
		min_idx = i; 
		for (j = i + 1; j < n; j++) { 
			if (arr[j] < arr[min_idx]) 
				min_idx = j; 
		} 
		// Swap the found minimum element 
		// with the first element 
		if (min_idx != i) 
			swap(arr[min_idx], arr[i]); 
	} 
} 
//////
// Function to print an array 
void printArray(int arr[], int size) 
{ 
	int i; 
	for (i = 0; i < size; i++) { 
		cout << arr[i] << " "; 
		cout << endl; 
	} 
}
////
int * getRandom_smallInput( ) {
	//int size=rand()%10000;
   static int  r[1000];
   // set the seed
   srand( (unsigned)time( NULL ) );
   for (int i = 0; i < 1000; ++i) {
      r[i] = rand();
   }

   return r;
}
// Driver program 
int main() 
{ 

	   int *p;
p = getRandom_smallInput();
  int a[1000]   ;
  for (int i=0; i<1000;i++){
	a[i]=*p++;
  }
      auto start = high_resolution_clock::now();
	selectionSort(a, 1000); 
	auto end = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(end - start);
	cout << "Sorted array: \n"; 
	printArray(a, 1000); 
		cout << "Execution time: " << duration.count() << " microseconds" << endl;

   return 0;
}

//*(p + i)
