# cincoValores

Sistema onde o usuário informa cinco valores e mostra quantos deles são repetidos e suas posiçãoes.


Instale o Dev C++;
Sistema Operacional: Windows 10;
Desenvolvido em C++;

Autor: Matheus Alexsander da Cruz
Data: 30/11/2021


	#include <iostream>
	using namespace std; 

	class valores{  // Criando uma classe
	int i, j, n;  // Declaração de variáveis
	public:
	cincoValores(int array[5]);
	};

	int valores::cincoValores(int array[5]){
	for (i=0;i<5;i++){
	
	cout << "Digite o valor da posicao: " << i << endl;
	cin >> array[i];
	}	


	for(i=0;i<5;i++){
		for(j=i;j<5;j++){
			if(array[i] == array[j]){
				if(i != j){
					
					cout << "O valor repetido eh " << array[i] << " e suas posicoes sao " << i << " e " << j << endl;
					break;
				}
			}
		}
	}
	
	}

	int main(){
		
		int array[5];
		
		valores posicao;
		posicao.cincoValores(array);

	return 0;

	}
