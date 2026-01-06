#include<iostream>
#include<vector>
using namespace std;

int partition( vector<int>&v , int startIdx , int endIdx ){
    int pivotElement = v[startIdx];
    int count = 0 ;

    for( int i = startIdx+1 ; i<=endIdx ; i++){
        if( v[i] < pivotElement ) count++;
    }

    int pivoteIdx = startIdx+count;
    
    swap( v[pivoteIdx] , v[startIdx] ) ;

    while( startIdx < pivoteIdx && endIdx > pivoteIdx){
        if( v[startIdx] <= pivotElement  ) startIdx++;
        if( v[endIdx] > pivotElement ) endIdx--;
        if( v[startIdx] > pivotElement && v[endIdx] <= pivotElement) {
            swap( v[startIdx] , v[endIdx] );
            startIdx++;
            endIdx--;
        }
    }

    return pivoteIdx;
}

void quickSort( vector<int> &v , int startIdx , int endIdx ){

    if( startIdx >= endIdx ){
        return ;
    }

    int pivot = partition( v , startIdx , endIdx );

    quickSort( v , startIdx , pivot-1 );
    quickSort( v , pivot+1 , endIdx );
}

int main(){
    int arr[] ={ 4,20 ,1,2,7,5,8,9,3,30};
    int n = 10;
    // Copy the array into Vector
    vector<int>v( arr, arr+n);

    quickSort( v , 0 , n-1 );

    for( int i = 0 ; i < n ; i++){
        cout<<v[i]<<endl;
    }



}