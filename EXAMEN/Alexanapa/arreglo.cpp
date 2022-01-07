#include<iostream>
using namespace std;

int main(){
	int numeros[3],n;

	cout<<"digite el numeros elementos que va ha tener el arreglo:";
	cin>>n;

	for(int i=0;i<n;i++){
		cout<<"digite un numro :";
		cin >>numeros[i];
	}


	for (int i=0;i<n;i++){

		cout<<i<<" -> "   <<numeros[i]<<endl;
	}
         
	return 0;


}
