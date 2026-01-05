#include<iostream>
#include<vector>
using namespace std ;

void merge ( vector<int>&arr1 , vector<int>&arr2 , vector<int>&arr3 ){
    int i =0 , j=0 , k = 0;
    while( i < arr1.size() && j < arr2.size() ){
        if( arr1[i] >= arr2[j]){
            arr3[k++] = arr1[i++];
        }
        else{
            arr3[k++] = arr2[j++];
        }
    }
    while( i< arr1.size()){
        arr3[k++] = arr1[i++];
    }
    while( j<arr2.size()){
        arr3[k++] = arr2[j++];
    }
    
}

void mergeSort( vector<int>&v){
    int n = v.size();
    if( n == 1) return ;

    int n1 = n/2;
    int n2 = n- n/2;

    vector<int> a(n1) , b(n2);

    for( int i = 0 ; i<n1 ; i++){
        a[i] = v[i];
    }

    for( int i = 0 ; i<n2 ; i++){
        b[i] = v[i + n1 ];
    }
    // Dividing Divided vector (Recursion)
    mergeSort(a);
    mergeSort(b);
    // Merging 2 Sorted array
    merge( a , b , v );

}

int main(){
    vector<int>v;
    int n;
    cout<<" Enter the size array  :"<<endl;
    cin>>n;
    cout<<" Enter the elements : ";
    for (int i=0 ; i<n ; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    
    mergeSort(v);
    

    for (int i=0 ; i<v.size() ; i++){
        cout<<v[i]<<" ";
    }
 return 0;
}