#include <iostream>
#include <ctime>
using namespace std;
int * getRandom( ) {
   static int  r[10];
   // set the seed
   srand( (unsigned)time( NULL ) );
   
   for (int i = 0; i < 10; ++i) {
      r[i] = rand();
      }
   return r;
}
int main () {
   // a pointer to an int.
   int *p;
   p = getRandom();
      for ( int i = 0; i < 10; i++ ) {
         cout << *(p + i) << endl;
   }
   return 0;
}