#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double H,V,a,g,x,y,T;
    cout<<"Enter the height of the cliff, the initial velocity and the angle of fall of the stone and time"<<endl;
    cin>>H>>V>>a;
    g=9.8;
    if (1+(2*g*H)/(pow(V,2)*pow(sin(a),2))>=0 and (pow(V,2)*pow(sin(a),2)!=0)){
        T=((V*sin(a))/g)*(1+sqrt(1+((2*g*H)/(pow(V,2)*pow(sin(a),2)))));
        x=V*T*cos(a);
        y=H+V*T*sin(a)-0.5*g*pow(T,2);
    }
    cout<<" The height from the bottom of the cliff "<<x<<" Distance to the edge of the cliff "<<y;
    return 0;
}