// Implemente um sistema onde o usu�rio entre com cinco valores e mostre quantos deles s�o repetidos e suas posi��es
// O valor repetido � : 3
// Sua posi��o �: 1 e 3
// Repetir apenas duas posi��es

#include <iostream>

using namespace std;

class valores{
	int i, j, n;
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
