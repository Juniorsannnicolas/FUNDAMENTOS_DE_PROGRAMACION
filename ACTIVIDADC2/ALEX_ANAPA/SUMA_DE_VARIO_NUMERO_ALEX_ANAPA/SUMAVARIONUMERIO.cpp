

//HACIENDO SUMA DE VARIOS NUMEROS EN C++//


//ALEX JUNIOR ANAPA SAN NICOLAS//


#include<iostream>
using namespace std;

    int main()

{
	int a=0,b;
	float z=0,x;
	cout<<"por favor ingrese la cantidad de valore a suma : ";
	cin>>b;
	do{
		cout<<" por favor ingrese el numeros : "<<a+1;
		cin>>x;
		a=a+1;
		z=z+x;
	}while(a<b);
	
	cout<<" la suma de vario numeros es : "<<z<<endl;
	return 0;

}		
