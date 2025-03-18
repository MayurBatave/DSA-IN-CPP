// Ques : Take input marks of a student and
// print the Grade according to marks:
// 1) 91-100 Excellent
// 2) 81-90 Very Good
// 3) 71-80 Good
// 4) 61-70 can do better
// 5) 51-60 Average
// 6) 40-50 Below Average
// 7) <40 Fail
#include<iostream>
using namespace std;
int main(){
    cout<<"Enter Your Marks :  ";
    int n;
    cin>>n;
    if(n>=91){
        cout<<"Excellent";
    }
    else if(n>=81){
       cout<<"Very Good"; 
    }
    else if(n>=71){
       cout<<"Good"; 
    }
    else if(n>=61){
       cout<<"can do better"; 
    }
    else if(n>=51){
       cout<<"Average"; 
    }
    else if(n>=41){
       cout<<"Below Average "; 
    }
    else{
        cout<<"Fail";
    }


}