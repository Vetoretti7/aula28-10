#include <iostream>
using namespace std;
 

   float soma(float a, float b){
    return a + b;
  }
  float subtracao(float a, float b){
    return a - b;
  }
  float multiplicacao(float a, float b){
    return a * b;
  }
  float divisao(float a, float b){
    if(b != 0){
    return a / b;
    }else{
        cout << "erro : divisao por zero" << endl;
        return 0;
    }
  }

int main (){
    float num1, num2;
    char operacao;
    char continuar;
    /**********
     * MENU *
     *********/
    do{
    cout << "digite o primeiro numero: ";
    cin >> num1;
    cout << "digite o segundo numero: ";
    cin >> num2; 
    cout << "escolha a operacao ( +, -, *, /): ";
    cin >> operacao;

    if (operacao == '+'){
        cout << soma (num1, num2) << endl;
    }else if (operacao = '-'){
    cout <<  subtracao << num1 - num2 <<endl;
    }else if (operacao = '*'){
    cout << multiplicacao << num1 * num2 <<endl;
    }else if (operacao = '/'){
        if(num2 !=0){
    cout << divisao << num1 / num2 << endl;
        }
    } else{
    cout << "operacao invalida" << endl;

    }
    cout <<" deseja continuar o programa? (s/n)" ;
    cin >> continuar;

} while (continuar  == 's' || continuar == 's');
cout << "saindo do programa. " << endl;


    return 0;
}