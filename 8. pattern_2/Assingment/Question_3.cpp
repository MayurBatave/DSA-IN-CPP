//  Enter the number : 4
//    A
//   B A B
//  C B A B C 
// D C B A B C D

#include <iostream> 
using namespace std;
int main() {
int n;
cout<<" Enter the number : ";
cin >> n;
for(int i = 1; i <= n; ++i) {
for(int j = 1; j <= n - i; ++j) {
cout << " ";
}
for(int j = i-1; j >= 0; --j) {
cout << (char)('A'+j) << " ";
}
for(int j = 1; j < i; ++j) {
cout << (char)('A'+j) << " ";
}
cout << endl;
}
return 0;
}