//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//
//////printf():
////int main() {
//////printf()函数的作用是将参数文本输出到屏幕。他名字里面的的f代表format（故事化）表示可以定制输出的格式。
//////printf函数不会自动换行，如果想换行需要在字符串中加入换行符\n。
////printf("Hello World!\n");
////printf("Hello C!\n");
////
//////占位符：%d（整数）、%f（浮点数）、%c（字符型）、%s(字符串型）、%p（指针）、%x（十六进制整数、%o（八进制整数）...。所谓占位符，就是在输出文本中预留一个位置，等到程序运行时再将变量的值填充到这个位置上。占位符的作用是告诉printf函数在输出文本中预留一个位置，等到程序运行时再将变量的值填充到这个位置上。
//////printf函数可以在输出文本指定占位符。
////printf("这里有 %d 个苹果。\n", 5);	//输出5个苹果
////printf("%s\t", "Hello C!","zhangsan");	//输出Hello C!
////printf("%s says: %d + %d = %d\n", "zhangsan", 3, 5, 3 + 5);	//输出zhangsan says: 3 + 5 = 8
////
////
//////输出格式：
////printf("这里有 %2d 个苹果。\n", 5);	//输出05个苹果（右对齐）
////printf("这里有 %-2d 个苹果。\n", 5);	//输出05个苹果（左对齐）
////printf("这里有 %2d 个苹果。\n", 456);	//输出456个苹果，限制格式小于要打印的数时，按照要打印的数来
////printf("这里有 %+d 个苹果。\n", 5);	//输出5个苹果
////printf(" % -5d", 123);
////printf("hehe\n");
////printf(" %f\n", 12.5);// 小数精度默认到小数点后六位。
////printf(" %.2f\n", 12.55);// 小数精度默认到小数点后六位。
////printf(" %.1f\n", 12.55);// 小数精度默认到小数点后六位。当输出位数小于打印的位数时，四舍五入。
////printf(" %4.1f\n", 12.55);// 小数精度默认到小数点后六位。
////printf(" %*.*f\n",6,2,12.55);// 6指定第一个*号，2指定第二个*号。
////printf("%s\n", "asdfghj");
////printf("%.3s\n", "asdfghj");
////
////return 0;
////}
//
//
////scanf
////scanf函数：用于读取用户的键盘输入。
//int main()
//{
//
//	//int score;
//	//printf("请输入成绩");
//	//scanf("%d", &score);
//	//printf("score:%d\n", score);
//	//int i = 0;
//	//int j = 0;
//	//float x = 0;
//	//float y = 0;
//	//scanf("%d%d%f%f", &i, &j, &x, &y);//多行输入也可。
//	//printf("i = %d\n", i);
//	//printf("j = %d\n", j);
//	//printf("x = %f\n", x);
//	//printf("y = %f\n", y);
//
//	//int x;
//	//float y;
//	//scanf("%d", &x);//输入：-13.45e12# 0
//	//printf("%d\n", x);
//	//scanf("%f", &y);
//	//printf("%f\n", y);
//	////输出：-13、449999994880.000000。原因：scanf都到小数点时，停止，将被-13放入x中，将.45e12放入y中，浮点数有可能不能精确保存。
//
//	////scanf返回值：
//	//int q = 0;
//	//int w = 0;
//	//float e = 0.0f;
//	//int r = scanf("%d %d %f", &q, &w, &e);
//	//printf("q=%d,w=%d,e=%f\n", q, w, e);
//	//printf("r = %d\n", r);
//	////输入：10 20 3.5时返回：q=10,w=20,e=3.500000，r = 3
//	////输入：10 20 # 3.5时返回：q=10,w=20,e=0.000000，r = 2
//	//多组求和：
//	//int a = 0;
//	//int b = 0;
//	//while (scanf("%d%d", &a, &b) == 2)
//	//{
//	//	int c = a + b;
//	//	printf("%d\n", c);
//	//}
//
//	//占位符(%c,%d.%f,%lf,%Lf,%s,%[]：与printf基本一致：float必须使用%f，dounle必须使用%lf，
//	//%[]:
//	//char str1[100];
//	//scanf("%[a-zA-Z]", &str1);//输入：ASDasd123		asd456asd
//	//printf("%s\n", str1);//输出：	  ASDasd		asd
//	
//	//除了%c以外，都可以忽略空格
//	//char c = 0;
//	////scanf("%c", &c);//  asd
//	////printf("------%c------\n", c);// ------ ------
//	////如要忽略，在%c前面加空格表示忽略开始的字符。
//	//scanf(" %c", &c);//  asd
//	//printf("------%c------\n", c);
//	
//	//%s:从空白字符开始读，直到再次遇到空白字符
//	//char b[100] ;
//	//scanf("%s", &b);//sdfv sdf
//	//printf("%s\n", b);//sdfv
//
//	//scanf("%5s", &b);//dhfdksfk
//	//printf("%s\n", b);//dhfdk
//	
//
//	//赋值忽略符：*,吧*放在任何占位符的百分号后面，该占位符就不会返回值，解析后会被丢弃。
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d-%d-%d", &a, &b,&c);
//	printf("%d %d %d", a, b, c);
//
//	scanf("%d%*c%d%*c%d", &a, &b,&c);
//	printf("%d %d %d", a, b, c);
//	return 0;
//}