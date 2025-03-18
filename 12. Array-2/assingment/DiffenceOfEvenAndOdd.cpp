//  Find the difference between the sum of elements at even indices to the sum of elements at odd 
// indices.

#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int sum(int a , vector<int>& v , int n , int * sum){
    for(int i=a ; i<n ; i+=2){
        *sum+=v[i];
    }
    
}
int main(){
    vector<int>v;
    int n;
    cout<<" Enter the size of the Array : ";
    cin>>n;
    cout<<" Enter the elements of array : ";
    for ( int i=0 ; i<n ; i++ ){
        int a;
        cin>>a;
        v.push_back(a);
    }
    int sum1=0;  // Even indices
    sum(0,v,v.size(),&sum1);
    int sum2=0;  // Odd indices
    sum(1,v,v.size(),&sum2);
    
    cout<<" Difference between the sum of elements at even indices to the sum of elements at odd indices is : "<<sum1-sum2;
}

// #include <iostream>
//  using namespace std;
//  int main() {
//  int a[5]={7,2,32,5,20};
//  int  sume=sumo=0;
//  for(int i=0;i<5;i++){
//  if(i%2==0)
//  sume+=a[i];
//  else
//  sumo+=a[i];
//     }
//     cout<<abs(sume-sumo);
//  return 0;
//  }