//  If an array arr contains n elements, then check if the given array is a palindrome or not
#include<iostream>
#include<vector>
using namespace std;
void reverse( vector<int>&v , int n){
    int i=0;
    int j=n-1;
    while(i<j){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
    }

}

void display(vector<int> &v , int n){
    for(int i=0 ; i<n ; i++){
        cout<<v[i];
    }
    cout<<endl;
}

int main(){
    vector<int>v;
    int n;
    cout<<" Enter the size of the Array : ";
    cin>>n;
    vector<int>v2;
    cout<<" Enter the elements of array : ";
    for ( int i=0 ; i<n ; i++ ){
        int a;
        cin>>a;
        v.push_back(a);
        v2.push_back(a);
    }
    //display(v , v.size());
    //display(v2 , v2.size());
    reverse(v2,v2.size());
    //display(v2 , v2.size());
    for( int i=0 ; i<n ; i++){
        if(v[i]!=v2[i]){
            cout<<" Not Palindrame ";
            return 0;
        }
    }
    cout<<" Palindrome ";

}