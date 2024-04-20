#include <iostream>
using namespace std ;
//start is def arg
// optional 
// rightMost (  int n = 0 , in start )  not acceptable
void printArr( int arr[] , int n , int start = 0  )  {
  for(int i = 0 ; i < n ;i++){
    cout << arr[i];
  }
}
int main( )  {



 int arr[5] = {1,2,3,4,5} ;
 int n=5 ;
 printArr(arr,n) ;



}