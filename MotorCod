#include <iostream>
#include <locale.h>
using namespace std; 
 int main(){
 	setlocale(LC_ALL, "Portuguese");
 	int OP,OP2;          // opção do usuario
 	float total,quant, Vela, Valvula,Pistao,Biela,Vibre,Carter; // para armazenar valor e quantidade
 	
OP=0;
Vela=130;
Valvula=800;
Pistao=80;
Biela=440;
Vibre=230;
Carter=40;

 	
 while (OP==0){	
    cout << "                              ¦¦¦¦¦¦¦  .VENDA DE PEÇAS.  ¦¦¦¦¦¦¦"<<endl<<endl<<endl;
 	cout << "1. Vela de ignição (R$130,00)         "  << "2. Válvulas (R$800,00)           " << "3. Pistão (R$80,00)"<< endl<<endl<< "4. Biela (R$440,00)                   "<< "5. Virabrequim (R$230,00)        "<< "6. Cárter (R$40,00)"<< endl <<endl<<endl;
 	cout << "escolha a peça desejada para mais informaçoes: ";
	cin >> OP;
 	cout << endl ;
 
 	

 	
switch (OP){
		case 1:
			cout << "informaçoes da peça"<< endl;	
			cout<<	"DESEJA COMPRAR ?";	
			cin>> OP2;
					
			while(OP2!=1&&OP2!=0){
			cout << "opção invalida invalido , digite novamente: (1 pra sim/0 para não) : ";
			cin>>OP2;}
				
				
			if (OP2==1){
			cout << "DIGITE A QUANTIDADE: ";
			cin >> quant;
			total=Vela*quant;
			cout <<"o valor total é "<<total<< " reais";}
				
			else {
			OP=OP2;}		
	}
  }
}
