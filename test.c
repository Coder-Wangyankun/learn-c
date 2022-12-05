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

//// 写一个代码：求两个整数的和
//int main() {
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//	// scanf是输入函数，捕捉输入的值
//	// &代表取地址
//	// 这句代码的意思是捕捉输入的两个整型，分别存到变量a b中
//	scanf("%d %d", &a, &b); 
//	sum = a + b;
//	printf("sum = %d\n", sum); // %d可以当做一个变量理解
//	return 0;
//}

// 变量的作用域
// 局部变量的作用域：变量所在的局部范围
// 全局变量的作用域：整个工程

//extern int l_val;
//int g_val = 2021; // 全局变量
//int main() {
//	printf("1：%d\n", g_val);
//	{	int a = 10; // 局部变量
//		printf("a=%d\n", a);
//		printf("2：%d\n", g_val);
//	}
//	printf("3：%d\n", g_val);
//	printf("%d\n", l_val);
//	return 0;
//}

// 变量的生命周期：就是变量的创建和销毁之间的时间段
// 局部变量的生命周期：进入局部范围生命开始，出局部范围生命结束
// 全局变量的生命周期：就是程序的生命周期
//int main() {
//	{
//		int a = 10;
//		printf("%d\n", a);
//		return 0;
//	}
//}

//int main() {
//	// 1.字面常量
//	3.14;
//	10;
//	'a';
//	"abcdef";
//	return 0;
//}

//int main() {
//	// 2.const修饰的常变量
//	const int num = 10; // num就是常变量 - 具有常属性（不能被改变的属性）
//	num = 20; // 常变量不可修改
//	printf("num = %d\n", num);
//	return 0;
//}

//#define MAX 10000
//int main() {
//	// 3.#define定义的标识符常量
//	//MAX = 20000 // 报错，不可修改
//	int n = MAX;
//	printf("n = %d\n", n);
//	return 0;
//}

//// 性别
//// enmu：枚举关键字
//enum Sex {
//	// 这种枚举类型的变量的未来可能取值
//	MALE = 3,
//	FEMALE,
//	SECRET
//};
//int main() {
//	// 4.枚举常量
//	// 可以一一列举的常量
//	enum Sex s = MALE;
//	printf("s = %d\n", s);
//	printf("MALE = %d\n", MALE);
//	printf("FEMALE = %d\n", FEMALE);
//	printf("SECRET = %d\n", SECRET);
//	return 0;
//}

// 字符串就是一串字符 - 用双引号引起的一串字符
//int main() {
//	// 字符数组 - 数组识一组相同类型的元素
//	// 字符串在结尾的位置隐藏了一个\0的字符
//	// \0是字符串的结束标志
//	char arr[] = "hello";
//	return 0;
//}

#include <string.h>
//int main() {
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c' };
//
//	// 求一下字符串的长度
//	printf("%d\n", strlen(arr1)); // 3
//	printf("%d\n", strlen(arr2)); // 随机值
//
//	return 0;
//}

//int main() {
//	printf("c:\test\test.c");
//	return 0;
//}

int main() {
	//printf("(are you ok??)"); // 三字母词
	// 低版本编译器会转义成are you ok]

	/*printf("%c\n", 'a');
	printf("%c\n", '\'');
	printf("\a\a\a");*/

	//printf("%c\n", '\130');
	//printf("%c\n", '\x30'); // 3*16的一次方 + 0 * 16的0次方 = 48

	printf("%d\n", strlen("c:\test\328\test.c"));
	return 0;
}