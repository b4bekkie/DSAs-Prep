#include <iostream>
using namespace std ;

int main() {


 int num ; // that will be store on stack the memory alocated for this is called static memory allocation




new char ;   // new is used to utilized heap memory the mem will be allocated dynamically
//addrees but no name

// how to access heap memory ?
// using pointer 
int  *ptr = new int  ;
cout <<ptr <<endl; //address in which that is in heap memory
*ptr = 9;
cout << *ptr;
delete ptr;  // deallocationg DMA to avoid memory leaks

// function
//bad  pratice beacuse its on stack(run time) what if the array size is greater then stack memory the programm will crash
int n ;
cin>>n ;
int arr[n];
//so we utlize in these case heap(compile time) heap is rich in memory 
int *ptr2 = new int[8];
*ptr2= 0;
cout << *ptr2;



// differnce 

// dynamic will allocate more space then static cux of addionatal pointer memory 8 byte



















}