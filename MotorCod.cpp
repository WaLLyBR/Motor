#include <iostream>
#include <locale.h>
using namespace std; 
 int main(){
 	setlocale(LC_ALL, "Portuguese");
 	
 	// opção do usuario
 	int OP=0;
 	char OP2;
 	 
 	// para armazenar valor e quantidade        
 	float total, quant, vela =130, valvula=130, pistao=800, biela=440, vibre=230, carter=40; 
 OP;	
while (OP==0) {	
	cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
    cout << "                              ¦¦¦¦¦¦¦  .VENDA DE PEÇAS.  ¦¦¦¦¦¦¦"<<endl<<endl<<endl;
 	cout << "1. Vela de ignição (R$130,00)         "  << "2. Válvulas (R$800,00)           " << "3. Pistão (R$80,00)"<< endl<<endl<< "4. Biela (R$440,00)                   "<< "5. Virabrequim (R$230,00)        "<< "6. Cárter (R$40,00)"<< endl <<endl<<endl;
 	cout << "Escolha a peça desejada para mais informaçoes, para isso ultilize o número da peça: ";
	cin >> OP;
 	cout << endl ; 


 while(OP>6){
			cout << "OPÇÃO INVALIDA, DIGITE NOVAMENTE O PRODUTO DE 1 A 6 : ";
			cin>>OP;}	

 	
switch (OP){
		case 1:
			cout << "~~Informaçoes da peça~~"<< endl ;
			
			cout<< "Uma vela de ignição é um dispositivo elétrico que se encaixa à cabeça do cilindro"<<endl<< "num motor de combustão interna e inflama a mistura comprimida de ar/combustível por meio de uma faísca elétrica." <<endl <<endl;	
			
			cout<<	"DESEJA COMPRAR ? Digite 's' para sim e 'n' para não: "	;
			cin>> OP2;
					
			while(OP2!='n'&&OP2!='s'){
			cout << "OPÇÃO INVALIDA, DIGITE NOVAMENTE: ('s' pra sim e 'n' para não) : ";
			cin>>OP2;}
				
				
			if (OP2=='s'){
			cout << "DIGITE A QUANTIDADE: ";
			cin >> quant;
			total=vela*quant;
			cout <<"O valor total é: " << "$" << total;}
				
			else {
			OP=0;}
	break;	
		
			
		case 2:
			cout << "Informaçoes da peça"<< endl;
		
		
			cout<< "A válvula de um motor de combustão interna é um dispositivo que visa permitir"<<endl <<"ou bloquear a entrada ou a saída de gases dos cilindros do motor." <<endl <<endl;

				
			cout<<	"DESEJA COMPRAR ? Digite 's' para sim e 'n' para não: "<<endl;	
			cin>> OP2;
					
			while(OP2!='n'&&OP2!='s'){
			cout << "OPÇÃO INVALIDA, DIGITE NOVAMENTE: ('s' pra sim e 'n' para não) : ";
			cin>>OP2;}
				
				
			if (OP2=='s'){
			cout << "DIGITE A QUANTIDADE: ";
			cin >> quant;
			total=valvula*quant;
			cout <<"O valor total é: "<< "$" << total;}
				
			else {
			OP=0;}
			break;
			
		case 3:
			cout << "Informaçoes da peça"<< endl;	
			
			cout << "O pistão ou êmbolo de um motor é uma peça cilíndrica normalmente feita de "<<endl <<"alumínio ou liga de alumínio, que se move no interior do cilindro dos motores de explosão." <<endl <<endl ;
			
			cout<<	"DESEJA COMPRAR ? Digite 's' para sim e 'n' para não: "<<endl;	
			cin>> OP2;
					
			while(OP2!='n'&&OP2!='s'){
			cout << "OPÇÃO INVALIDA, DIGITE NOVAMENTE: ('s' pra sim e 'n' para não) : ";
			cin>>OP2;}
				
				
			if (OP2=='s'){
			cout << "DIGITE A QUANTIDADE: ";
			cin >> quant;
			total=pistao*quant;
			cout <<"O valor total é: "<< "$" << total;}
				
			else {
			OP=0;}
			break;
			
		case 4:
			cout << "Informaçoes da peça"<< endl;
			
			cout<< "Uma biela é qualquer peça de uma máquina que serve para transmitir ou transformar o movimento  " <<endl<<"retilíneo alternativo em circular contínuo. Um exemplo de biela nointerior de um motor de automóvel  " <<endl<< " é a peça que liga o êmbolo (pistão) à cambota " <<endl <<endl ;	
			
			
			cout<<	"DESEJA COMPRAR ? Digite 's' para sim e 'n' para não: "<<endl;	
			cin>> OP2;
					
			while(OP2!='n'&&OP2!='s'){
			cout << "OPÇÃO INVALIDA, DIGITE NOVAMENTE: ('s' pra sim e 'n' para não) : ";
			cin>>OP2;}
				
				
			if (OP2=='s'){
			cout << "DIGITE A QUANTIDADE: ";
			cin >> quant;
			total=biela*quant;
			cout <<"O valor total é: "<< "$" << total;}
				
			else {
			OP=0;}
			break;
			
		case 5:
			cout << "Informaçoes da peça"<< endl;	
			
			cout<< "Um virabrequim, também chamado de eixo de manivela, está localizado  " <<endl <<endl <<"no motor de um veículo e converte a força criada por pistões do motor,  "<<endl<< "que se movem para cima e  para baixo, em uma força que gira as rodas do  " <<endl <<" automóvel em um movimento circular de modo que o carro possa ir para a frente."   <<endl <<endl ;
		
			cout<<	"DESEJA COMPRAR ? Digite 's' para sim e 'n' para não: "<<endl;	
			cin>> OP2;
					
			while(OP2!='n'&&OP2!='s'){
			cout << "OPÇÃO INVALIDA, DIGITE NOVAMENTE: ('s' pra sim e 'n' para não) : ";
			cin>>OP2;}
				
				
			if (OP2=='s'){
			cout << "DIGITE A QUANTIDADE: ";
			cin >> quant;
			total=vibre*quant;
			cout <<"O valor total é: "<< "$" << total;}
				
			else {
			OP=0;}
			break;
			
		case 6:
			cout << "Informaçoes da peça"<< endl;	
			 
            cout<< "O cárter é um recipiente metálico que protege e "<<endl <<"assegura a lubrificação de certos mecanismos." ;  
			
			cout<<	"DESEJA COMPRAR ? Digite 's' para sim e 'n' para não: "<<endl;	
			cin>> OP2;
					
			while(OP2!='n'&&OP2!='s'){
			cout << "OPÇÃO INVALIDA, DIGITE NOVAMENTE: ('s' pra sim e 'n' para não) : ";
			cin>>OP2;}
				
				
			if (OP2=='s'){
			cout << "DIGITE A QUANTIDADE: ";
			cin >> quant;
			total=carter*quant;
			cout <<"O valor total é: "<< "$" << total;}
				
			else {
			OP=0;}			
			break;	
	}

  }
}
