//#include <stdio.h>
//
//int main()
//{
//	int i1, i2, i3;
//	scanf("%d %d %d", i1, i2, i3);
//	printf("%10d%10d%10d", i1, i2, i3);
//	prinf();
//}

// �迭�� ����
#include <stdio.h>

int main()
{
	int num[3];
	int i;int j;
	//�Է� 
	for(i = 0; i<3; i++)
	{
		scanf("%d", &num[i]);
	}
	//��� 
	for(j =0; j<3; j++)
	{
		printf("%10d", num[j]);
	}
	return 0;	
} 
