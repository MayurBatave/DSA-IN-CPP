#include<iostream>
#include<vector>
using namespace std ;

void merge ( vector<int>&arr1 , vector<int>&arr2 , vector<int>&arr3 ){
    int i=0;
    int j=0;
    int k=0;
    int n1=arr1.size();
    int n2=arr2.size();

    while( i<n1 && j<n2){
        if( arr1[i]< arr2[j]){
            arr3[k]=arr1[i];
            i++;
            k++;
        }
        else{
            arr3[k]=arr2[j];
            j++;
            k++;
        }
    }
    while(i<n1){
        arr3[k]=arr1[i];
        i++;
        k++;
    }
    while(j<n2){
        arr3[k]=arr2[j];
        j++;
        k++;
    }
    
}

int main(){
    vector<int>arr1;
    int n;
    cout<<" Enter the size 1st array  :"<<endl;
    cin>>n;
    cout<<" Enter the elements : ";
    for (int i=0 ; i<n ; i++){
        int x;
        cin>>x;
        arr1.push_back(x);
    }

    vector<int>arr2;
    int m;
    cout<<" Enter the size 2nd array  :"<<endl;
    cin>>m;
    cout<<" Enterr the elements : ";
    for (int i=0 ; i<m ; i++){
        int x;
        cin>>x;
        arr2.push_back(x);
    }

    vector<int>arr3(arr1.size()+arr2.size());
    merge(arr1 ,arr2 , arr3);

    for (int i=0 ; i<arr3.size() ; i++){
        cout<<arr3[i]<<" ";
    }
 return 0;
}