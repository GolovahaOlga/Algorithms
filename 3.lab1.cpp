#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double x,g,f;
    cout<<"Enter x "<<endl;
    cin>>x;
    if (x>-4 and x<-1){
        g=abs(x+6)/(abs(x+3)-3);
    }
    if (x>-1 and x<5){
        g=sqrt(5-x)-2;
    }
    if (x>=-5){
        g=log(x+10)-2;
    }
    if (g<-2){
        f=abs(g/(1-g));
    }
    if (g>=-2 and g<=1){
        f=pow(g+2,2);
    }
    cout<<f;
    return 0;


}