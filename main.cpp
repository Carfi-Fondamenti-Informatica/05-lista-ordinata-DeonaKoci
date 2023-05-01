#include <iostream>
using namespace std;
int main() {
 int lista[10];
 for(int i=0;i<10;i++){
 cin >> lista[i];
 }
 int a=0;
 cin >> a;


if ( a > lista[9]) {
    for(int i=0; i<10; i++){
    cout << lista[i] << " ";
}}
else {

for(int i=0;i<10;i++){
int j=lista[i];

    for ( ; lista [i]<a;i++){
        cout << lista[i] << " ";


    }
    for ( ; j<=a;j++){
        j=a;
        cout << j << " ";
        break;
    }
    for ( ; j>a; j++ ){
        cout << lista [i-1]<< " ";
        break;
    }
}
}

 return 0;
}
