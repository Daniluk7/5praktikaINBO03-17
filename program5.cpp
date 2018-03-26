#include <iostream>
 
using namespace std;
 

void calc(int n, char c, int m){
switch (c) 
       {
          case'+':cout<<n<<c<<m<<" = "<<(n+m)<<endl; break;
          case'-': cout<<n<<c<<m<<" = "<<(n-m)<<endl;break; 
          case'/': cout<<n<<c<<m<<" = "<<(n/m)<<endl; break; 
          case'*': cout<<n<<c<<m<<" = "<<(n*m)<<endl;break;
          default: cout<<"Неизвестная операция"<< endl;
         }
}
void calc(float n, char c, float m){
switch (c) 
       {
          case'+':cout<<n<<c<<m<<" = "<<(n+m)<<endl; break;
          case'-': cout<<n<<c<<m<<" = "<<(n-m)<<endl;break; 
          case'/': cout<<n<<c<<m<<" = "<<(n/m)<<endl; break; 
          case'*': cout<<n<<c<<m<<" = "<<(n*m)<<endl;break;
          default: cout<<"Неизвестная операция"<< endl;
         }
}
int main(){ 
setlocale(0,"");
    char a; 
    float c,b;
    cout<<"Введите 1 число: \n";
       cin>>c;
    cout<<"Введите знак операции: \n";
       cin>>a;
    cout<<"Введите 2 число:\n";
       cin>>b;
    calc(c, a, b);
 
    return 0;
}
