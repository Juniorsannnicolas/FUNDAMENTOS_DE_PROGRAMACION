#include<iostream>
using namespace std;
   

    int main()
{
	float x,c=0,l=30,ca=0,cr=0;

	do{
	cout<<"Por favor ingrese el promedio del estudiante :"; cin>>x;
	  c=c+1;
	  if(x>7){
	         
	    ca=ca+1;
	
	  }else{

	        if(x<5){

		cr=cr+1;
		}else{}

		}
		}while(c<1);
		
		cout<<"los estudiantes aprobado : "<<ca<<endl;
		cout<<"los estudiantes reprobado : "<<cr<<endl;

		return (0);

		 


}		
