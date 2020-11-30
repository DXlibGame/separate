#include <stdio.h>

void main() {

	//初期値
	int i, j;
	
	//k1:足し算結果　k2：引き算結果　k3：掛け算結果　k4：割り算結果
	int k1, k2, k3, k4;
	
	i = 16;
	j = 16;

	printf("初期値 i:%d　j:%d\n\n", i, j);

	//足し算
	k1 = i + j;
	printf("足し算結果:%d\n\n", k1);

	//引き算
	k2 = i - j;
	printf("引き算結果:%d\n\n", k2);

	//掛け算
	k3 = i * j;
	printf("掛け算結果:%d\n\n", k3);

	//割り算
	k4 = i / j;
	printf("割り算結果:%d\n\n", k4);

}