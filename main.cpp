#include <iostream>
using namespace std;

int main(){
   int idade;
   cout << "digite sua idade: ";
   cin >> idade;
   if(idade >= 18){
    cout << "voce pode ser preso";
   }
   else{
    cout << "voce vai pra fase";
   } 
   return 0;
}