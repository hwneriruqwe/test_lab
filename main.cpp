#include <iostream>
using namespace std;
int main()
{
int pos=3;
char dir;

while(pos<7){
switch(pos){

case 1:
    cout<<"Casa 1"<<endl;
    break;

case 2:
    break;

case 3:
    cout<<"Voce pode escolher ir para o Norte (N) ou para o Sul (S)."<<endl;
    cin>>dir;
    switch(dir){
        case 'N':
            cout<<"Voce escolheu ir para o Norte"<<endl;
            pos=1;
        break;

        case 'S':
            cout<<"Voce escolheu ir para o Sul"<<endl;
            pos=6;
        break;

        default:
            cout<<"Essa nao e uma opcao!"<<endl;
        break;
    }break;

case 4:
    break;

case 5:
    break;

case 6:
    cout<<"Casa 6"<<endl;
    break;

case 7:
    break;

case 8:
    break;
}}
return 0;
}
