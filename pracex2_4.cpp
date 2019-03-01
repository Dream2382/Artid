#include <iostream>
#include <cmath>
using namespace std;

//Write prototype of  sg() here.
double sg(double ,double);
int main(){
    cout << sg(-2.5,1.1) << "\n";
    cout << sg(1,10000) << "\n";
    cout << sg(8.5,2.4) << "\n";
    cout << sg(0.1,0.0001) << "\n";
    cout << sg(10,0.007) << "\n";
    cout << sg(1,-2) << "\n";
    cout << sg(15,100) << "\n";
    cout << sg(123,5432) << "\n";
}

//Write function definition of  sg() here.
double sg(double x,double y){

    double sum1=0;
    double max=0,min=0,sum2=0;
    if(x<=0 || y<=0){
     sum1 = 0;
     return sum1;
    }else if(x>y){
     max=x;
     min=y;
    }else if(x<y){
        min=x;
        max=y;
    } if(max/min<=10){
         sum1= sqrt(x*y);
         return sum1;
    }else{
     
        return sum1;
    }



}
