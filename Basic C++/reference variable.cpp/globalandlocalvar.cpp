#include <iostream>
using namespace std;
//now check is global which is access to everyone 
///bad pratice what will happen if some function change the var and and function will change alos 
// instead of global use ref var concept to pass var to any other function
int check = 9 ;
void fun() {
    cout << check;

}


int main()  {
    

    int a =2;
     {
        //local variable concept
        int a = 5 ;
        cout <<   "a inside" << a <<endl;
     }
     cout <<   "a outside" << a <<endl;
     fun();
     cout << check;
}