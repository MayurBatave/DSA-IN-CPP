//  WAP to find the largest three elements in the array.
#include<iostream>
#include<vector>
#include<climits>
using namespace std;
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

    int max1= INT_MIN;
    int max2= INT_MIN;
    int max3= INT_MIN;
    for( int i=0 ; i<n ; i++){
        if(v[i]>max1){
            max3=max2;
            max2=max1;
            max1=v[i];
            
            
        }
        if(v[i]>max3 && v[i]!=max1 && v[i]!=max2){
            max3=v[i];
        }
    }
    cout<<max3;
    


}

// #include <iostream>
//  using namespace std;
//  int main() {
//  int arr[5]={10,3,1,21,3};
//  int max, max2, max3;
//  max3 = max = max2 = arr[0];
//  for(int i = 0; i < 5; i++){
//  if (arr[i] > max){
//          max3 = max2;
//          max2 = max;
//          max = arr[i];
//       }
//  else if (arr[i] > max2){
//          max3 = max2;
//          max2 = arr[i];
//       }
//  else if (arr[i] > max3)
//          max3 = arr[i];
//  }
//  cout<<endl<<"Three largest elements of the array are "<<max<<", "<<max2<<", 
// "<<max3;
//  return 0;
//  }