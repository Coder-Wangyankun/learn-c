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
int main() {
	printf("hello world!");
	return 0;
}