#include <iostream>
using namespace std ;


bool  isSorted ( int arr[] , int size ) {

    for(int i = 0 ; i  < size ;i++)  {
        if(arr[i] < arr[i+1] ) {
            return false ;
            
        }
    }
    return true;

}
int main(     ) {


    int arr[5] = {1,1,7,7,7} ;
    int size = 5 ;
  
     if(isSorted(arr,size)) {
        cout <<  "yes sorted" ;
     }
     else {
       cout << "not sorted"  ;
     }
    



}