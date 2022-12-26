#include <iostream>
using namespace std;

void a(){
    int x = 3;
 switch(x){
 case 7:
 x*=2;
 x++;
 break;
 case 3:
 x++;
 case 5:
 x%=3;
 x+=4;
 break;
 case 0:
 case 2: 
 x/=2;
 x--;
 break;
 default:
 x++;
 }
 cout << "x = " << x;

}
void b(){
int num = 20;
 
 if (num >= 10){
 cout << "A";
 cout << "B";
 }else if(num >= 5)
 cout << "C";
 else
 cout << "D";
 cout << "E";
 
 cout <<"F";
}
int main(){
  a();
  b();
  return 0;
}