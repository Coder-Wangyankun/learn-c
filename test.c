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

//// дһ�����룺�����������ĺ�
//int main() {
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//	// scanf�����뺯������׽�����ֵ
//	// &����ȡ��ַ
//	// ���������˼�ǲ�׽������������ͣ��ֱ�浽����a b��
//	scanf("%d %d", &a, &b); 
//	sum = a + b;
//	printf("sum = %d\n", sum); // %d���Ե���һ���������
//	return 0;
//}

// ������������
// �ֲ������������򣺱������ڵľֲ���Χ
// ȫ�ֱ�������������������

//extern int l_val;
//int g_val = 2021; // ȫ�ֱ���
//int main() {
//	printf("1��%d\n", g_val);
//	{	int a = 10; // �ֲ�����
//		printf("a=%d\n", a);
//		printf("2��%d\n", g_val);
//	}
//	printf("3��%d\n", g_val);
//	printf("%d\n", l_val);
//	return 0;
//}

// �������������ڣ����Ǳ����Ĵ���������֮���ʱ���
// �ֲ��������������ڣ�����ֲ���Χ������ʼ�����ֲ���Χ��������
// ȫ�ֱ������������ڣ����ǳ������������
//int main() {
//	{
//		int a = 10;
//		printf("%d\n", a);
//		return 0;
//	}
//}

//int main() {
//	// 1.���泣��
//	3.14;
//	10;
//	'a';
//	"abcdef";
//	return 0;
//}

//int main() {
//	// 2.const���εĳ�����
//	const int num = 10; // num���ǳ����� - ���г����ԣ����ܱ��ı�����ԣ�
//	num = 20; // �����������޸�
//	printf("num = %d\n", num);
//	return 0;
//}

//#define MAX 10000
//int main() {
//	// 3.#define����ı�ʶ������
//	//MAX = 20000 // ���������޸�
//	int n = MAX;
//	printf("n = %d\n", n);
//	return 0;
//}

//// �Ա�
//// enmu��ö�ٹؼ���
//enum Sex {
//	// ����ö�����͵ı�����δ������ȡֵ
//	MALE = 3,
//	FEMALE,
//	SECRET
//};
//int main() {
//	// 4.ö�ٳ���
//	// ����һһ�оٵĳ���
//	enum Sex s = MALE;
//	printf("s = %d\n", s);
//	printf("MALE = %d\n", MALE);
//	printf("FEMALE = %d\n", FEMALE);
//	printf("SECRET = %d\n", SECRET);
//	return 0;
//}

// �ַ�������һ���ַ� - ��˫���������һ���ַ�
//int main() {
//	// �ַ����� - ����ʶһ����ͬ���͵�Ԫ��
//	// �ַ����ڽ�β��λ��������һ��\0���ַ�
//	// \0���ַ����Ľ�����־
//	char arr[] = "hello";
//	return 0;
//}

#include <string.h>
//int main() {
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c' };
//
//	// ��һ���ַ����ĳ���
//	printf("%d\n", strlen(arr1)); // 3
//	printf("%d\n", strlen(arr2)); // ���ֵ
//
//	return 0;
//}

//int main() {
//	printf("c:\test\test.c");
//	return 0;
//}

int main() {
	//printf("(are you ok??)"); // ����ĸ��
	// �Ͱ汾��������ת���are you ok]

	/*printf("%c\n", 'a');
	printf("%c\n", '\'');
	printf("\a\a\a");*/

	//printf("%c\n", '\130');
	//printf("%c\n", '\x30'); // 3*16��һ�η� + 0 * 16��0�η� = 48

	printf("%d\n", strlen("c:\test\328\test.c"));
	return 0;
}