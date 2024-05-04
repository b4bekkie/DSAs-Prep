#include <iostream>
using namespace std ;



void printArr(  int arr[]  ) {
    for(int i = 0 ; i < 5 ;i++) {
      
      cout << arr[i];
    }
}

bool binarySearch( int arr[] , int start , int end , int key  ) {



    if(start > end) {
        return false  ;
    }
    int mid = (start + end) /2 ;
    if(arr[mid]  == key ) {
        return true ;
    }
    if(key  > arr[mid]) {
        return binarySearch(arr,mid+1,end,key) ;
    }
    else {

        return binarySearch(arr,start,mid-1,key) ;
    }
    
 

}

int main() {






    int arr[5] = {1,9,11,12,14} ;
    int start = 0 ;
    int end = 4 ;
    int key = 12 ;
    if(binarySearch(arr,start,end,key)) {
        cout << "key founded" ;
    }
    else {
        cout << "key not founded";
    }

}