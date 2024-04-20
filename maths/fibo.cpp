#include <iostream>
using namespace std;
int fibo(int num ) {
    int a = 0 ;
    int b = 1 ;
    int nextNumber =0;
    if(num == a) return a;
    if(num == b ) return b ;
   
    for(int i = 2 ; i <= num ;i++) {
      nextNumber = a +b;
        a = b;
        b = nextNumber ;
    }
    return nextNumber;
        

}
int main() {









 int num = 10 ;
 cout <<fibo(num);





}