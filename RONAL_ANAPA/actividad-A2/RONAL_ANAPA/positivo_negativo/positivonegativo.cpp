#include<iostream>
using namespace std;
int main()
{

	float x,c=0,l,s=0,si=0, se=0;


cout<<" cuanto valores desea ingresar : ";
cin>>l;
     do{

cout<<" por favor ingrese los valores : ";cin>>x;
c=c+1;
s=s+x;
     if(x>0){
	

              si=si+x;
	}

}while(c<1);


    cout<<" el saldo de egreso es: "<<se<<endl;
    cout<<" el saldo de egreso es: "<<si<<endl;



               cout<<" el saldo total es : "<<s<<endl;
               return 0;




}
