#include<iostream>
using namespace std;

int main()
{
	
	int c=0,n;
	float s=0,x;
	cout<<"ingrese la cantidad de valore a suma : ";
	cin>>n;
	do{
		cout<<"ingrese el elemento  "<<c+1;
		cin>>x;
		c=c+1;
		s=s+x;
	}while(c<n);
	cout<<"la suma de los elemento fue : "<<s<<endl;
	return(0);
}
