//  A program fr calculating the coordinates of a mathematical pendulum
#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double k, A, w;
    cout<<"Enter how many times the amplitude is greater than the coordinate at the initial moment of time, the amplitude and frequency of the pendulum"<<endl;
    cin>>k>>A>>w;
    double f, t, x;
    if (k!=0){
        f=asin(1/k);
    }
    t=(M_PI/2-f)/w;
    x=A*sin(w*t+f);
    cout<<"f0= "<<f<<"\ntime "<<t<<"\nthe coodinate of the point "<<x;
    return 0;
}
