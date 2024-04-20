#include <iostream>
using namespace std;
  //limit 1 line may be 2 to 3 line but not work with more then that
  // benfits memory and reuce function calls on stack
  inline  int getMax(int &a , int &b) {
    return (a>b) ?a:b;
 }


int main()  {

    int a = 2;
    int b = 3;
    int ans = getMax(a,b);
    cout << ans;
    int c = 2;
    int d = 9 ;
    ans = getMax(c,d);
    cout << ans;
    
}