#include <iostream>
using namespace std ;

void reachHome( int currentAdd , int destination ) {


   cout << "stepAhead -" << currentAdd <<"To" << destination <<endl;

    if(currentAdd == destination  ) {
        cout << "Reached Home" ;
        return;
    }

    return reachHome(currentAdd+1,destination);
    

}    


int main() {



int currentAdd = 0 ; 
int destination  = 20 ; //km
reachHome(currentAdd,destination) ; 


}