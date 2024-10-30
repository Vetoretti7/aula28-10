#include <iostream>
using namespace std;

int main(){
    int opcao;
    do{
        cout << "menu: " << endl;
        cout << "1. exibir mensagem 1" << endl;
        cout << "2. exibir mensagem 2" << endl;
        cout << "3. sair" << endl;
        cout << "\n" << endl;
        cout << "escolha uma opcao: " << endl;
        cin >> opcao;

if(opcao == 1){
    cout << "\n" << endl;
    cout <<  " mensagem 1 " << endl;
    cout << "\n" << endl;   
}else if (opcao == 2){
     cout << "\n" << endl;
    cout <<  " mensagem 2 " << endl;
    cout << "\n" << endl;
    opcao = 3;  
   }
}while(opcao != 3);
    cout <<"saindo do programa. " << endl;
    return 0;
}