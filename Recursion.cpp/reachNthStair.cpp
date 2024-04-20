#include <iostream>
using namespace std ;
int climb(int nthStairs) {

    //can go 1 step or 2 step
    if(nthStairs < 0) return 0 ;
    if(nthStairs ==0) return 1;
    int ans = climb(nthStairs -1) + climb(nthStairs-2);
    return ans;


}
int main() {
    int nthStairs = 10 ;
    cout <<climb(nthStairs);

    
}