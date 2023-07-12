#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>

//打印函数

//int main()
//{
//	printf("hello world\n");//直接打印需要用""引起来
//	printf("hello world\n");
//	printf("99999");
//	return 0;
//}

//储存/申请空间并打印

//int main()
//{
//	char ch = 'A';
//	printf("%c\n", ch);
//	int age = 20;
//	printf("%d\n", age);
//	float f = 5.0;
//	printf("%f\n", f);
//	double d = 3.14;
//	printf("%lf\n", d);
//	return 0;
//}

//计算申请空间大小

//int main()
//{
//	printf("%d\n", sizeof(char));//1(单位：字节，下同)
//	printf("%d\n", sizeof(int));//4
//	printf("%d\n", sizeof(long));//4
//	printf("%d\n", sizeof(long long));//8
//	printf("%d\n", sizeof(double));//8
//	printf("%d\n", sizeof(short));//2
//	printf("%d\n", sizeof(float));//4
//	return 0;
//}

//变量位置（同时有相同的全局变量和局部变量，打印时以局部变量为准）

//int num = 10;//----此为全局变量
//int main()
//{
//	int num = 20;//----此为局部变量
//	printf("%d\n", num);
//	return 0;
//}

//计算两个数的和

//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf_s("%d%d", &num1, &num2);
//	int sum = 0;
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//	return 0;
//}
//scanf_s是VS提供的而非C库里的，如果要有好的兼容性
//则加上#define _CRT_SECURE_NO_WARNINGS 再写如下
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d%d", &num1, &num2);
//	int sum = 0;
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//	return 0;
//}

//几个常量

//define定义的常变量
//const int num = 10;
//#define定义的标识符常量
//#define MAX 10
//enum 枚举常量
//	enum SEX
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//int main()
//{
//	enum SEX s = FEMALE;
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//	return 0;
//}

//字符串

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c',0 };
//	printf(" % s\n", arr1);
//	printf(" % s\n", arr2);
//	return 0;
//}

//计算字符串长度

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c',0 };
//	printf(" %d\n", strlen(arr1));
//	printf(" %d\n", strlen(arr2));
//
//	return 0;
//}

//转义字符

//int main()
//{
//	printf("%c\n", '\'');
//	printf("%s\n", "\"");
//	printf("%c\n", '\63');
//	printf("%c\n", '\x61');
//	return 0;
//}

//选择语句

//int main()
//{
//	int input = 0;
//	printf("加入比特\n");
//	printf("你还要好好学习吗？(1/0)>:");
//	scanf("%d", &input);
//	if (input == "要")
//		printf("好offer");
//	else
//		printf("卖红薯");
//		return 0;
//}

//while循环语句

//int main()
//{
//	int line = 0;
//	printf("加入比特\n");
//
//	while (line < 2000)
//	{
//		printf("yes\n");
//		line++;
//	}
//	printf("确实");
//	return 0;
//}

//函数

//int add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int sum = add(222,111);
//	printf("%d", sum);
//	return 0;
//}

//数组

//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	char ch[6];
//	float arr2[5];
//	printf("%d\n", arr[4]);
//	printf("%d\n%d\n",arr[9], arr[6]);
//	int i = 0;
//	while (i <= 9)
//	{
//		printf("%d\n", arr[i]);
//		i++;
//	}
//	printf("完毕");
//	return 0;
//
//}
//商与模

//int main()
//{
//	int b = 5 / 2;
//	printf("%d\n", b);//商
//	int a = 5 % 2;
//	printf("%d\n", a);//模
//	return 0;
//}

//移位操作符

//int main()
//{                       //每一位均是二进制位
//	int a = 1;//a储存方式为00000000000000000000000000000001
//	printf("%d\n", a);
//	int b = a << 1;//b则为 00000000000000000000000000000010
//	printf("%d\n", b);//即b输出2
//	int c = a << 2;//c即为 00000000000000000000000000000100
//	printf("%d\n", c);//即c输出4
//	return 0;
//}

//位操作

//int main()
//{              //二进制序列
//	int a = 3; //011
//	int b = 5; //101
//	int c = a & b;//按位与
//	printf("%d\n", c);
//	int d = a | b;//按位或
//	printf("%d\n", d);
//	int e = a ^ b;//按位或与
//	printf("%d\n", e);
//	return 0;
//}

//赋值操作符

//int main()
//{
//	int a = 10;
//	int b = 20;      //=为赋值  ==为判断相等
//	int c = a + 10;
//	int d =a+= 10;
//	int e = a - 20;
//	int f =a-= 20;
//	int g = a & 2;
//	int h=a &=  2;
//	printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n", b, c, d, e, f, g, h);
//
//	return 0;
//}

//单目操作符

//int main()
//{
//	int c = 0;
//	printf("%d\n",c );
//	printf("%d\n", !c);//假变真
//	int d=10;
//	printf("%d\n",d);
//	printf("%d\n", !d);//真变假
//
//	int e = 0;
//	printf("%d\n", sizeof(e)); //另一种写法
//	printf("%d\n", sizeof(int));//再一种写法
//	printf("%d\n", sizeof e);
//  
//    int arr[] = { 1,2,3,4,5,6};
//	printf("%d\n%d\n", sizeof(arr[4]),sizeof(arr[3]));
//	printf("%d\n", sizeof arr);//计算数组的大小
//    printf("%d\n", sizeof(arr));
//	
//    int f = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", f);//计算数组中元素个数
//
//	int g = 0;
//	int h = ~g;      //~按位取反，所有位均取反
//	printf("%d\n", h);
//
//	int i = 10;
//	int j = i++;//后置++,j赋原i输出，i加1输出
//    printf("i = %d j = %d\n",i, j);
//	int k = 10;
//	int l = ++k;//前置++，i加1输出，j赋加1后的i输出
//	printf("k = %d l = %d\n", k, l);
//
//	int m =(int) 3.14;//将3.14强制转换成int类型
//	
//	return 0;
//}
//

//逻辑操作符

//int main()
//{     //逻辑与
//	int a = 3;
//	int b = 5;
//	int c = 0;
//	int d = 0;
//	int e = a && b;//全真为真，输出1
//	printf("%d\n", e);
//	int f = a && c;//真假为假，输出0
//	printf("%d\n", f);
//	int g = c && d;//假假为假，输出0
//	printf("%d\n", g);
//	  //逻辑或
//	int h = a || b;//全真为真，输出1
//	printf("%d\n", h);
//	int i = a || c;//真假为真，输出1
//	printf("%d\n", i);
//	int j = c || d;//假假为假，输出0
//	printf("%d\n", j);
//	return 0;
//}

//条件操作符/三目操作符

//int main()
//{
//	int a = 10;
//	int b = 20;
//	scanf("%d%d", &a, &b);
//
//	int max = 0;
//	max = (a > b ? a : b);//这一行可替代下方屏蔽的四行代码
//	//if (a > b)
//	//	max = a;
//	//else
//	//	max = b;
//	//printf("%d\n", max);
//	//下面一行直接表达int max...开始的几行代码
//	a > b ? printf("d\n", a) : printf("%d\n", b);
//	return 0;
//}

//几个关键字auto typedef static

//void test1()
//{
//	int a = 1;//不加static，每次再次调用此函数a都是从一开始
//	a++;
//	printf("a = %d\n", a);
//}
//void test2()
//{
//	static int a = 1;//加了static，再次调用此函数是从上次的结果开始
//	a++;
//	printf("a = %d\n", a);
//}
//int main()
//{
//	auto int a = 10;//局部变量/自动变量auto被省略了，局部变量都有
//	a = -2;
//	//register
//	register int b = 10;//建议把a定义为寄存器变量---访问速度更快
//	//typedef
//	typedef unsigned int u_int;//将名称重新取名
//	u_int c = 2;
//	printf("%d\n", c);
//	//static修饰局部变量
//	int d = 0;
//	while (d < 5)
//	{
//		test1();
//		d++;
//	}
//	int e = 0;
//	while (e < 5)
//	{
//		test2();
//		e++;
//	}
//    extern int g_val;//用extern声明引用外部变量
//	printf("g_val = %d\n", g_val);
//	//static修饰函数
//	int f = 10;
//	int j = 20;
//	extern int Add(int, int);//用extern声明引用外部函数
//	int sum = Add(f, j);
//	printf("sum = %d\n", sum);
//	return 0;
//}

//定义常量和宏

////#define定义的标识符常量
//#define MAX 100
////#define定义宏--带参数
//#define MAx(X,Y) (X>Y?X:Y)
//   //用函数实现比大小
//Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = MAX;
//	int b = 10;
//	int c = 20;
//	int max1 = Max(b, c);
//	printf("%d\n", max1);
//	int max2 = 0;
//	max2 = MAx(b, c);
//	printf("%d\n", max2);
//    return 0;
//}

//& *  指针变量

//int main()
//{
//	int a = 10;//四个字节
//	int* p = &a;//有一种变量是用来存放地址的，称为指针变量
//	printf("%p\n", &a);//%p用于打印地址
//	printf("%p\n", p);//打印出来十六进制序列的的地址
//	*p = 20;//*解引用操作符/间接访问操作符--此行表示把p表示的地址的变量改成20
//	printf("%d\n", a);
//	char ch = 'w';
//	char* pc = &ch;
//	*pc = 'q';
//	printf("%c\n", ch);
//	//计算指针变量的大小
//	printf("%d\n", sizeof(pc));
//	double d = 3.14;
//	double* pd = &d;
//	*pd = 5.4;
//	printf("%p\n", pd);
//	printf("%d\n", d);
//	printf("%d\n", sizeof(pd));//-----地址的大小32位平台4字节，64位平台8字节
//	return 0;
//}

//结构体

//struct book
//{
//	char name[20];//书名
//	short price;//55
//};
//int main()
//{
//	//利用结构体-创建一个该类型的结构体变量
//	struct book b1 = { "数学书",55 };
//	printf("书名：%s\n价格：%d\n", b1.name, b1.price);
//	b1.price = 15;//改价格
//	strcpy(b1.name, "数学");//改名字,strcpy关于字符串操作的，头文件是string.h
//	printf("打折后：%d\n", b1.price);
//	printf("改名后：%s\n", b1.name);
//	struct book* pb = &b1;
//	printf("%p\n", pb);
//	//用指针打印
//	printf("书名：%s\n价格：%d\n", (*pb).name, (*pb).price);
//	//简化
//	printf("%s\n", pb->name);
//	printf("%d\n", pb->price);
//	//.运用于结构体变量
//	//->结构体指针->成员
//	return 0;
//}
