#include <iostream>
using namespace std; 
#include<cmath>
double sumSqrt(double N){
    double x = N;
    double ans = 0;
    if(x <=0){
        return ans;
    }else{
        while(x>0){
        ans = ans+1/sqrt(x);
        x--;
          }
          return ans;
    }
}

int main()
{
    double a = sumSqrt(20);
    double b = sumSqrt(10);
    double c = sumSqrt(5);
    double d = sumSqrt(2);
    double e = sumSqrt(1);
    double f = sumSqrt(0);
    double g = sumSqrt(-1);
    double h = sumSqrt(-5);
    double i = sumSqrt(3);
    
    cout<< a << "\n" << b << "\n" << c << "\n" << d << "\n" << e << "\n" << f << "\n" << g << "\n"<<h<<"\n"<<i<<"\n";

}
