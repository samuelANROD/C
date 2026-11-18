//converção em C pode ser feita implicitamente ou explicitamente

#include <stdio.h>

int main(void) {
	//implicitamente o 9.99 se transforma me 9 
	// pois ele foi declarado como inteiro
	int myInt = 9.99;
	printf("%d\n", myInt); //9


	// aqui pode ser visto converção de float para inteiro
	//resultado_01 como ainda é int o valor sai 2.00000
	//diferente do resultado_02 que convertemos manualmente
	int num_01 = 5;
	int num_02 = 2;
	float resultado_01 = 5 / 2; // 2.000000
	float resultado_02 = (float)  5 / 2; // 2.500000


	printf("%.1f\n", resultado_01);
	printf("%.1f\n", resultado_02);

	return 0;
}
