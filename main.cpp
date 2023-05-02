#include <iostream>
using namespace std;
int main() {
 int lista[10];
 for(int i=0;i<10;i++){
 cin >> lista[i];
 }
 int a=0;
 cin >> a;
 
 
for(int i=0;i<10;i++){
    int r=0;
    if (lista[i]>a){
        r=lista[i];
        lista[i]=a;
        a=r;


}
}

for(int i=0;i<10;i++){
  cout << lista[i] << " ";
 }
 return 0;
}
