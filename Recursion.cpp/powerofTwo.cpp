#include <iostream>
using namespace std ;

int twoPower( int num ) {
   
   if(num ==0) {
    return 1;
   }

    int ans = 2*twoPower(num-1);

}
int main() {
   int num = 3;
    int ans = twoPower(num);
    cout << ans;

}