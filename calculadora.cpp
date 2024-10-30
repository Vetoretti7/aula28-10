#include <iostream>
using namespace std;
int main (){
    int stop = 1;
    while(stop){
    int num1, num2;
    char operacao;
    cout << "digite o primeiro numero: ";
    cin >> num1;
    cout << "digite o segundo numero: ";
    cin >> num2;

    cout << "escolha a operacao ( +, -, *, /): ";
    cin >> operacao;

    if(operacao == '+'){
        cout << "resultado: " << num1 + num2 <<
        endl;
}else if (operacao == '-'){
    cout << "resultado: " << num1 - num2 <<
    endl;

}else if(operacao == '*'){
    cout << "resultado: " << num1 * num2 << 
    endl;
}else if(operacao == '/'){
    if(num2 !=0){ 
        cout << "resultado" << num1 / num2 << endl;
    }


} else{
    cout << "operação invalida" << endl;

}
int a =1;
cout << "deseja parar o progrma ? (1 - sim / 2 - não): ";
cin >> a;
if(a ==1){
    stop = false;
}
}
return 0;
}