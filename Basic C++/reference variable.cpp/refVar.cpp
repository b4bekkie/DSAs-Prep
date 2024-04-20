#include <iostream>


using namespace std ;
void update( int num ) {
    num++;

}
void update2(  int& num )   {
      num++;}
int main()  {
//same memory but diifferncet name
// creating Ref Var
// int i = 2 ;``
// int &j = i ;
// cout << i ;
// cout << j ;
// j++;
// cout << j ;
// cout << i;

int num = 9 ;
cout << "Before  -" <<  num << endl;
update(num);
cout << "After  -" <<  num;  // no changes beacuse of pass vy value concept
cout << "before num -" << num <<endl;
update2(num);
cout << "After num -" << num <<endl;  //  so the value is passed by reference concept





}