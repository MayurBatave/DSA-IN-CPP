#include<iostream>
using namespace std;

int main(){
    int m,n;
    cout<<" Enter the Number of rows : ";
    cin>>m;
    cout<<" Enter the Number of Columns : ";
    cin>>n;

    int arr[m][n];

    cout<<" Enter the Elements Of the Matrix : ";
    for( int i=0 ; i<m ; i++){
        for( int j=0 ; j<n ; j++){
            cin>>arr[i][j];
        }
    }

    int minr = 0, minc = 0;
    int maxr = m - 1, maxc = n - 1;
    while (minr <= maxr && minc <= maxc)
    {
        // Right

        for (int j = minc; j <= maxc; j++)
        {
            cout<<arr[minr][j]<<" ";
        }
        minr++;
        if (minr > maxr || minc > maxc)
            break;

        // Down

        for (int i = minr; i <= maxr; i++)
        {
            cout<<arr[i][maxc]<<" ";
        }
        maxc--;
        if (minr > maxr || minc > maxc)
            break;

        // Left

        for (int j = maxc; j >= minc; j--)
        {
            cout<<arr[maxr][j]<<" ";
        }
        maxr--;
        if (minr > maxr || minc > maxc)
            break;

        // up

        for (int i = maxr; i >= minr; i--)
        {
            cout<<arr[i][minc]<<" ";
        }
        minc++;
    }

}