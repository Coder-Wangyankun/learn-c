#define _CRT_SECURE_NO_WARNINGS 1
// ���ڴ���ĵ�һ��

// 1. д����������main������
// ���ִ���أ� C�����Ǵ��������ĵ�һ�п�ʼִ�е�
// ����C���Դ�������Ҫ��main������Ϊ���

// 1. int�������������ͣ����ͣ�
// 2. main��������
// 3. {
// ...
//}��������
// 
// 4. printf���⺯��������Ļ�ϴ�ӡ��Ϣ��
// printf��ʹ�ã�Ҳ�ô��к�������ͷ�ļ�stdio.h��

// ����+����+���д��룺��ݼ�ctrl+f5

#include <stdio.h>
//int main() {
//	printf("hello world!");
//	return 0;
//}

//int main() {        
//	// �ַ�����        
//	char ch = 'a'; // ch�Ǳ�����        
//	
//	// ����        
//	int age = 20;        
//	
//	// ������        
//	short num = 10;        
//	
//	// �����ȸ�����        
//	float weight = 55.5;        
//	
//	// ˫���ȸ�����        
//	double d = 0.0;  
//
//	//printf("%d\n", 100); // %d�����ӡһ������
//
//	printf("%d\n", sizeof(char)); // 1
//	printf("%d\n", sizeof(short)); // 2
//	printf("%d\n", sizeof(int)); // 4
//	printf("%d\n", sizeof(long)); // 4
//	printf("%d\n", sizeof(long long)); // 8
//	printf("%d\n", sizeof(float)); // 4
//	printf("%d\n", sizeof(double)); // 8
//
//	return 0; 
//}

//int main() {
//	int age = 20;
//	float height = 180.4;
//	double weight = 75.3;
//
//	age = age + 1;
//	weight = weight - 10;
//
//	printf("%d\n", age); // %d��ӡ int
//	printf("%f\n", height); // %f��ӡ float
//	printf("%lf\n", weight);// %lf��ӡ double
//
//	return 0;
//}

//// ȫ�ֱ��� - {}�ⲿ�����
//int a = 100;
//int main() {
//	// �ֲ����� - {}�ڲ������
//	// ���ֲ�������ȫ�ֱ������ֳ�ͻ������£��ֲ�����
//	// �����飺��ȫ�ֱ����;ֲ�����������д��һ����
//	int a = 10;
//	printf("%d\n", a);
//	return 0;
//}

// дһ�����룺�����������ĺ�
int main() {
	int a = 0;
	int b = 0;
	int sum = 0;
	// scanf�����뺯������׽�����ֵ
	// &����ȡ��ַ
	// ���������˼�ǲ�׽������������ͣ��ֱ�浽����a b��
	scanf("%d %d", &a, &b); 
	sum = a + b;
	printf("sum = %d\n", sum); // %d���Ե���һ���������
	return 0;
}