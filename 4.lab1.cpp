// A program for calculating the cost of products
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int k,p,c;
    cout<<"Enter 1, if the client belongs to the \"excellent\" category. Enter 2, if the client belongs to the \"good\" category.Enter 3, if the client belongs to the \"average\" category.Enter 4, if the client belongs to the \"bad\" category"<<endl;
    cin>>k;
    cout<<"Enter 1, if the product belongs to category A. Enter 2, if the product belongs to category B. Enter 3, if the product belongs to category C."<<endl;
    cin>>p;
    int s;
    cout<<"Enter the coast of the product"<<endl;
    cin>>s;
    float i,n,v,r,s1;
    switch(k){
        case 1:
            cout<<"You can pay in cash, by check or get a credit"<<endl;
            cout<<"Enter 1, if the customer wants to pay in cash. Enter 2, if the customer wants to pay by check. Enter 3, if the customer wants to take out a credit"<<endl;
            cin>>c;
            switch(p){
                case 1:
                    switch(c){
                        case 1:
                            cout<<"Intal cost "<<s<<" Final cost "<<s*0.6;
                            break;
                        case 2:
                            cout<<"Enter the interest rate (from 3 to 15 percent) and the number of contributions "<<endl;
                            cin>>i>>n;
                            v=s*(1+(i*n)/100);
                            cout<<"Intal cost "<<s<<" Final cost "<<v*0.6;
                            break;
                        case 3:
                            cout<<"Enter the number of payments (from 1 to 6)"<<endl;
                            cin>>n;
                            s1=s;
                            cout<<"If the loan is platinum, enter 1. If the loan is business, enter 2 "<<endl;
                            cin>>r;
                            if (r==1){
                                s=s*0.6;
                                v=s*pow((1+5/100),n);
                            }
                            else if (r==2){
                                s=s*0.6;
                                v=s*pow((1+2/100),n);
                            }
                            else{
                                cout<<"Your value in the \"Loan type\" column does not match 1 or 2. Restart the program and enter the value according to the instructions."<<endl;
                                break;
                            }
                            cout<<"Intal cost "<<s1<<" Final cost "<<v;
                            break;
                        default:
                            cout<<"Your value in the \"Payment method\" column does not match 1 or 2 or 3. Restart the program and enter the value according to the instructions."<<endl;
                            break;
                    }
                    break;
                case 2:
                    switch(c){
                        case 1:
                            cout<<"Intal cost "<<s<<" Final cost "<<s*0.7;
                            break;
                        case 2:
                            cout<<"Enter the interest rate (from 3 to 15 percent) and the number of contributions "<<endl;
                            cin>>i>>n;
                            v=s*(1+(i*n)/100);
                            cout<<"Intal cost "<<s<<" Final cost "<<v*0.7;
                            break;
                        case 3:
                            cout<<"Enter the number of payments (from 1 to 6)"<<endl;
                            cin>>n;
                            s1=s;
                            cout<<"If the loan is platinum, enter 1. If the loan is business, enter 2 "<<endl;
                            cin>>r;
                            if (r==1){
                                s=s*0.7;
                                v=s*pow((1+5/100),n);
                            }
                            else if (r==2){
                                s=s*0.7;
                                v=s*pow((1+2/100),n);
                            }
                            else{
                                cout<<"Your value in the \"Loan type\" column does not match 1 or 2. Restart the program and enter the value according to the instructions."<<endl;
                                break;
                            }
                            cout<<"Intal cost "<<s1<<" Final cost "<<v;
                            break;
                        default:
                            cout<<"Your value in the \"Payment method\" column does not match 1 or 2 or 3. Restart the program and enter the value according to the instructions."<<endl;
                            break;
                    }
                    break;
                case 3:
                    switch(c){
                        case 1:
                            cout<<"Intal cost "<<s<<" Final cost "<<s*0.8;
                            break;
                        case 2:
                            cout<<"Enter the interest rate (from 3 to 15 percent) and the number of contributions "<<endl;
                            cin>>i>>n;
                            v=s*(1+(i*n)/100);
                            cout<<"Intal cost "<<s<<" Final cost "<<v*0.8;
                            break;
                        case 3:
                            cout<<"Enter the number of payments (from 1 to 6)"<<endl;
                            cin>>n;
                            s1=s;
                            cout<<"If the loan is platinum, enter 1. If the loan is business, enter 2 "<<endl;
                            cin>>r;
                            if (r==1){
                                s=s*0.8;
                                v=s*pow((1+5/100),n);
                            } 
                            else if (r==2){
                                s=s*0.8;
                                v=s*pow((1+2/100),n);
                            } else {
                                cout<<"Your value in the \"Loan type\" column does not match 1 or 2. Restart the program and enter the value according to the instructions."<<endl;
                                break;
                            }
                            cout<<"Intal cost "<<s1<<" Final cost "<<v;
                            break;
                        default:
                            cout<<"Your value in the \"Payment method\" column does not match 1 or 2 or 3. Restart the program and enter the value according to the instructions."<<endl;
                            break;
                    }
                    break;
                default:
                     cout<<"Your value in the \"Product category\" column does not match 1 or 2 or 3. Restart the program and enter the value according to the instructions."<<endl;
                     break;
            }
            break;
        case 2:
            cout<<"You can pay in cash, by check or get a credit "<<endl;
            cout<<"Enter 1, if the customer wants to pay in cash. Enter 2, if the customer wants to pay by check. Enter 3, if the customer wants to take out a credit "<<endl;
            cin>>c;
            switch(p){
                case 1:
                    switch(c){
                        case 1:
                            cout<<"Intal cost "<<s<<" Final cost "<<s*0.7;
                            break;
                        case 2:
                            cout<<"Enter the interest rate (from 3 to 15 percent) and the number of contributions "<<endl;
                            cin>>i>>n;
                            v=s*(1+(i*n)/100);
                            cout<<"Intal cost "<<s<<" Final cost "<<v*0.7;
                            break;
                        case 3:
                            cout<<"Enter the number of payments (from 1 to 6)"<<endl;
                            cin>>n;
                            s1=s;
                            cout<<"If the loan is platinum, enter 1. If the loan is business, enter 2 "<<endl;
                            cin>>r;
                            if (r==1){
                                s=s*0.7;
                                v=s*pow((1+5/100),n);
                            }
                            else if (r==2){
                                s=s*0.7;
                                v=s*pow((1+2/100),n);
                            }
                            else{
                                cout<<"Your value in the \"Loan type\" column does not match 1 or 2. Restart the program and enter the value according to the instructions."<<endl;
                                break;
                            }
                            cout<<"Intal cost "<<s1<<" Final cost "<<v;
                            break;
                        default:
                            cout<<"Your value in the \"Payment method\" column does not match 1 or 2 or 3. Restart the program and enter the value according to the instructions."<<endl;
                            break;
                    }
                    break;
                case 2:
                    switch(c){
                        case 1:
                            cout<<"Intal cost "<<s<<" Final cost "<<s*0.8;
                            break;
                        case 2:
                            cout<<"Enter the interest rate (from 3 to 15 percent) and the number of contributions "<<endl;
                            cin>>i>>n;
                            v=s*(1+(i*n)/100);
                            cout<<"Intal cost "<<s<<" Final cost "<<v*0.8;
                            break;
                        case 3:
                            cout<<"Enter the number of payments (from 1 to 6)"<<endl;
                            cin>>n;
                            s1=s;
                            cout<<"If the loan is platinum, enter 1. If the loan is business, enter 2 "<<endl;
                            cin>>r;
                            if (r==1){
                                s=s*0.8;
                                v=s*pow((1+5/100),n);
                            }
                            else if (r==2){
                                s=s*0.8;
                                v=s*pow((1+2/100),n);
                            }
                            else{
                                cout<<"Your value in the \"Loan type\" column does not match 1 or 2. Restart the program and enter the value according to the instructions."<<endl;
                                break;
                            }
                            cout<<"Intal cost "<<s1<<" Final cost "<<v;
                            break;
                        default:
                            cout<<"Your value in the \"Payment method\" column does not match 1 or 2 or 3. Restart the program and enter the value according to the instructions."<<endl;
                            break;
                    }
                    break;
                case 3:
                    switch(c){
                        case 1:
                                cout<<"Intal cost "<<s<<" Final cost "<<s*0.9;
                                break;
                        case 2:
                            cout<<"enter the interest rate (from 3 to 15 percent) and the number of contributions"<<endl;
                            cin>>i>>n;
                            v=s*(1+(i*n)/100);
                            cout<<"Intal cost "<<s<<" Final cost "<<v*0.9;
                            break;
                        case 3:
                            cout<<"Enter the number of payments (from 1 to 6)"<<endl;
                            cin>>n;
                            s1=s;
                            cout<<"If the loan is platinum, enter 1. If the loan is business, enter 2 "<<endl;
                            cin>>r;
                            if (r==1){
                                    s=s*0.9;
                                    v=s*pow((1+5/100),n);
                                }
                            else if (r==2){
                                    s=s*0.9;
                                    v=s*pow((1+2/100),n);
                                }
                            else{
                                cout<<"Your value in the \"Loan type\" column does not match 1 or 2. Restart the program and enter the value according to the instructions."<<endl;
                                break;
                            }
                                cout<<"Intal cost "<<s1<<" Final cost "<<v;
                            break;
                        default:
                            cout<<"Your value in the \"Payment method\" column does not match 1 or 2 or 3. Restart the program and enter the value according to the instructions."<<endl;
                            break;
                    }
                    break;
                default:
                    cout<<"Your value in the \"Product category\" column does not match 1 or 2 or 3. Restart the program and enter the value according to the instructions."<<endl;
                    break;
            }
            break;
        case 3:
            cout<<"You can pay in cash or by check"<<endl;
            cout<<"Enter 1, if the customer wants to pay in cash. Enter 2, if the customer wants to pay by check."<<endl;
            cin>>c;
            switch(p){
                case 1:
                    switch(c){
                        case 1:
                            cout<<"Intal cost "<<s<<" Final cost "<<s*0.8;
                            break;
                        case 2:
                            int i,n,v;
                            cout<<"Enter the interest rate (from 3 to 15 percent) and the number of contributions "<<endl;
                            cin>>i>>n;
                            v=s*(1+(i*n)/100);
                            cout<<"Intal cost "<<s<<" Final cost "<<v*0.8;
                            break;
                        default:
                            cout<<"Your value in the \"Payment method\" column does not match 1 or 2. Restart the program and enter the value according to the instructions."<<endl;
                            break;
                    }
                    break;
                case 2:
                    switch(c){
                        case 1:
                            cout<<"Intal cost "<<s<<" Final cost "<<s*0.9;
                            break;
                        case 2:
                            int i,n,v;
                            cout<<"Enter the interest rate (from 3 to 15 percent) and the number of contributions "<<endl;
                            cin>>i>>n;
                            v=s*(1+(i*n)/100);
                            cout<<"Intal cost "<<s<<" Final cost "<<v*0.9;
                            break;
                        default:
                            cout<<"Your value  in the \"Payment method\"column does not match 1 or 2. Restart the program and enter the value according to the instructions."<<endl;
                            break;
                        }
                    break;
                case 3:
                    switch(c){
                        case 1:
                            cout<<"Intal cost "<<s<<" Final cost "<<s;
                            break;
                        case 2:
                            cout<<"Enter the interest rate (from 3 to 15 percent) and the number of contributions "<<endl;
                            cin>>i>>n;
                            v=s*(1+(i*n)/100);
                            cout<<"Intal cost "<<s<<" Final cost "<<v;
                            break;
                        default:
                            cout<<"Your value in the \"Payment method\"column does not match 1 or 2. Restart the program and enter the value according to the instructions."<<endl;
                            break;
                    }
                    break;
                default:
                    cout<<"Your value in the \"Product category\" column does not match 1 or 2 or 3. Restart the program and enter the value according to the instructions."<<endl;
                    break;
            }
            break;
        case 4:
            cout<<"You can pay in cash"<<endl;
            switch(p){
                case 1:
                    cout<<"Intal cost "<<s<<" Final cost "<<s;
                    break;
                case 2:
                    cout<<"Intal cost "<<s<<" Final cost "<<s*1.05;
                    break;
                case 3:
                    cout<<"Intal cost "<<s<<" Final cost "<<s*1.1;
                    break;
                default:
                    cout<<"Your value in the \"Product category\" column does not match 1 or 2 or 3. Restart the program and enter the value according to the instructions."<<endl;
                    break;
                }
             break;
        default :
            cout<<"Your value in the \"Client category\" column does not match 1 or 2 or 3 or 4. Restart the program and enter the value according to the instructions."<<endl;
            break;

    }
    return 0;
}