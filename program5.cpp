#include <iostream>
 
using namespace std;
 

void calc(int n, char c, int m){
switch (c) 
       {
          case'+':cout<<n<<c<<m<<" = "<<(n+m)<<endl; break;
          case'-': cout<<n<<c<<m<<" = "<<(n-m)<<endl;break; 
          case'/': cout<<n<<c<<m<<" = "<<(n/m)<<endl; break; 
          case'*': cout<<n<<c<<m<<" = "<<(n*m)<<endl;break;
          default: cout<<"����������� ��������"<< endl;
         }
}
void calc(float n, char c, float m){
switch (c) 
       {
          case'+':cout<<n<<c<<m<<" = "<<(n+m)<<endl; break;
          case'-': cout<<n<<c<<m<<" = "<<(n-m)<<endl;break; 
          case'/': cout<<n<<c<<m<<" = "<<(n/m)<<endl; break; 
          case'*': cout<<n<<c<<m<<" = "<<(n*m)<<endl;break;
          default: cout<<"����������� ��������"<< endl;
         }
}
int main(){ 
setlocale(0,"");
    char a; 
    float c,b;
    cout<<"������� 1 �����: \n";
       cin>>c;
    cout<<"������� ���� ��������: \n";
       cin>>a;
    cout<<"������� 2 �����:\n";
       cin>>b;
    calc(c, a, b);
 
    return 0;
}
