#include <iostream>
#include <string>
using namespace std;

string pTu(int face,int trait){
   
   if(face < 50 && trait < 50) return "Unfriend";
   if(face < 50 && trait >= 50) return "friend";
   if((face >= 50 && face < 80) && trait < 50) return "One-night-stand ";
   if((face >= 50 && face < 80) && trait >= 50) return "Friend";
   if(face >= 80 && trait >= 50) return "Girlfriend";

}  


int main(){

    cout << pTu(60 , 40) << endl;
    return 0;
}