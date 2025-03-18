#include<iostream>
using namespace std;
int main(){
    int cp, sp;
    cout<<"Enter the selling price item : \n";
    cin>>sp;
    cout<<"Enter thr cost price of the item : \n";
    cin>>cp;
    if(sp>cp){
        cout<<"\nprofit";
        cout<<"\nProfit gain is : "<<(sp-cp);
    }
   
    if(cp>sp) {
        cout<<"\nLoss";
        cout<<"\ntotal loss is : "<<(cp-sp);
    }

    if(sp==cp){
        cout<<" NO Profit ,NO Loss !";
    }
}