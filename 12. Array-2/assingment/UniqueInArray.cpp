//  Find the unique number in a given Array where all the elements are being repeated twice with one 
// value being unique.

#include<iostream>
#include<vector>
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
    
    for( int i=0 ;i<v.size() ; i++){
        int count=0;
        for(int j=0 ; j<v.size() ; j++){
            if( i!=j && v[i]==v[j]){
                count++;
                break;
            }
            
            
        }
        if(count==0){
            cout<<v[i];
            return 0;
        }
        
    }
    cout<<" No Unique element is present ";
    return 0;
    
}