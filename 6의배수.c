// �Է¹��� ���� 6�� ����̸� "6�� ���" ���
// �׷��� �ʴ��� "no" 
// 6�� ���; %2 ==0, %3 == 0 

/*
 ����
 	1. ���� ����(kwargs|input, mod2, mod3
	2. input �Է¹ޱ� (scanf)
	3. mod2 <- input�� 2�� ���� ������, mod3 <- 3���� ���� ������ 
	4. if(mod2 == 0 & mod3 == 0) "6�� ���" ��� 
*/

#include <stdio.h>


int main() {
	int input, mod2, mod3;
	scanf("%d", &input);
	
	mod2 = input % 2;
	mod3 = input % 3;
	
	if(mod2 || mod3)	printf("no");
	else				printf("6�� ���"); 
	
	return 0;
}

