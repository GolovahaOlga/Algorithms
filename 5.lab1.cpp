//A program that calculates the tax on a land
#include <iostream>
using namespace std;
int main(){
    double sum,sum1;
    int a1,a2,a3; //a1,a2,a3-variables for the area
    cout<<"Enter how many square meters of land with roof"<<endl;
    cin>>a1;
    cout<<"Enter how many square meters of land without a roof"<<endl;
    cin>>a2;
    cout<<"Enter how many square meters of land the garden occupies"<<endl;
    cin>>a3;
    sum=5*a1+3*a2+a3;
    int b;
    cout<<"If the house is made of high-quality materials, enter 1.\nIf the house is made of seman, enter 2.\nIf the house is made of other materials, enter 3."<<endl;
    cin>>b;
    if (b==1){
        sum1=sum*1.15;
    }
    if (b==2){
        sum1=sum*1.1;
    }
    if (b==3){
        sum1=sum*1.05;
    }
    int d;
    cout<<"Enter 1, if your house has 2 floors.\nEnter 2, if your house has 3 floors.\nEnter 3, if your house has 4 floors.\nEnter 4, if your house has 5 or more floors.\n";
    cin>>d;
    if (d==1){
        sum1=sum1+sum*1.1;
    }
    if (d==2){
        sum1=sum1+sum*1.15;
    }
    if (d==3){
        sum1=sum1+sum*1.15;
    }
    if (d==4){
        sum1=sum1+sum*1.2;
    }
    int c;
    cout<<"If you have water and sewerage, enter 1"<<endl;
    cin>>c;
    if (c==1){
        sum1=sum1+2500;
    }
    cout<<"The tax is "<<sum1<<" thousand rubles";
    return 0;


}