#define _CRT_SECURE_NO_WARNINGS 1
// 放在代码的第一行

// 1. 写出主函数（main函数）
// 如何执行呢？ C语言是从主函数的第一行开始执行的
// 所以C语言代码中需要有main函数作为入口

// 1. int：函数返回类型（整型）
// 2. main：函数名
// 3. {
// ...
//}：函数体
// 
// 4. printf：库函数（在屏幕上打印信息）
// printf的使用，也得打招呼（引用头文件stdio.h）

// 编译+链接+运行代码：快捷键ctrl+f5

#include <stdio.h>
//int main() {
//	printf("hello world!");
//	return 0;
//}

//int main() {        
//	// 字符类型        
//	char ch = 'a'; // ch是变量名        
//	
//	// 整型        
//	int age = 20;        
//	
//	// 短整型        
//	short num = 10;        
//	
//	// 单精度浮点型        
//	float weight = 55.5;        
//	
//	// 双精度浮点型        
//	double d = 0.0;  
//
//	//printf("%d\n", 100); // %d代表打印一个整数
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
//	printf("%d\n", age); // %d打印 int
//	printf("%f\n", height); // %f打印 float
//	printf("%lf\n", weight);// %lf打印 double
//
//	return 0;
//}

//// 全局变量 - {}外部定义的
//int a = 100;
//int main() {
//	// 局部变量 - {}内部定义的
//	// 当局部变量和全局变量名字冲突的情况下，局部优先
//	// 不建议：把全局变量和局部变量的名字写成一样的
//	int a = 10;
//	printf("%d\n", a);
//	return 0;
//}

// 写一个代码：求两个整数的和
int main() {
	int a = 0;
	int b = 0;
	int sum = 0;
	// scanf是输入函数，捕捉输入的值
	// &代表取地址
	// 这句代码的意思是捕捉输入的两个整型，分别存到变量a b中
	scanf("%d %d", &a, &b); 
	sum = a + b;
	printf("sum = %d\n", sum); // %d可以当做一个变量理解
	return 0;
}