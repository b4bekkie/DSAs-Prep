#include <iostream>
using namespace std;
int fibo(int num) {

  if(num ==0) return 0;
  if(num == 1) return 1;
  int ans = fibo(num-1) + fibo(num-2);
  return ans;


}
int main() {



int num = 3 ;
cout << fibo(num) ;


}