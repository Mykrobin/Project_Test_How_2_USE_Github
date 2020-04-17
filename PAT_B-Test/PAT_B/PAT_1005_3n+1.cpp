//  Guess Number from 3*n+1 -> 1
//  Go ahead
//  ���ֽⷨ��22/25�� ���һ�����Ե����ȥ 
//  ���������Ѿ�������ڴ��� 47�У�48�и����˲��ֽ��� 
/*
��������֤�����Ȳ����ʱ��Ϊ�˱����ظ����㣬
���Լ�¼�µ��ƹ�����������ÿһ����������� n=3 ������֤��ʱ��
������Ҫ���� 3��5��8��4��2��1�������Ƕ� n=5��8��4��2 ������֤��ʱ��
�Ϳ���ֱ���ж������Ȳ������α��������Ҫ�ظ����㣬
��Ϊ�� 4 �����Ѿ�����֤3��ʱ���������ˣ�
���ǳ� 5��8��4��2 �Ǳ� 3�����ǡ����������ǳ�һ�������е�ĳ���� n Ϊ���ؼ�������
��� n ���ܱ������е��������������ǡ�
���ڸ���һϵ�д���֤�����֣�����ֻ��Ҫ��֤���еļ����ؼ�����
�Ϳ��Բ������ظ���֤���µ����֡�
�����������ҳ���Щ�ؼ����֣������Ӵ�С��˳��������ǡ�
*/

# include <stdio.h>

int main(void)
{
	int k;  // ����һ������ k<100
	int n, temp;
	int i;
	int table[101] = {0};  //  ��¼�����Ƿ����  (�����ٵ�������)
	// ����Ϊ300 �����������Խ������ 
	int val = 0; // ��¼ ����table ���ж��ٸ���Ϊ����� 
	
	scanf("%d",&k);
	for (i=0; i<k; i++)
	{
		scanf("%d",&temp);
		table[temp] = 1;
	}
	
	for (i=1; i<=100; i++)
	{
		//  �����������table�г��ֹ������������ 
		if (1 == table[i]) 
		{
			n = i;
			while(n>1)
			{
				if (n%2 == 0)
					n = n/2;
				else
					n = ((3*n)+1)/2; 
// ����˴�д n = 3*n+1 ��������һ�����Ե��޷�ͨ����û����ϸ�Ŀ����ֲ�����̣���3*n+1��/2 
				//  �жϼ�������е����Ƿ������������г���	
				
				//  ע�����ύ������ ���ֱ���ж� table[n] ��n==100�����ܻ��������Խ������ 
				if (n<=100 && n>=2)
				{
					table[n] = 0;
				}
					
			}
				
		}
	}

	//  ���table�в�Ϊ0 ���±�ĸ��� 
	for (i=100; i>=1; i--) 
	{
		if (1 == table[i]) 	
			val++; 
	}
	
	for (i=100; i>=1;  i--)
	{
		if (1==table[i])
		{
			printf("%d",i);
			val--;
			if (val != 0)
				printf(" ");
		}
		
	}
	return 0;
}