#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>

//��ӡ����

//int main()
//{
//	printf("hello world\n");//ֱ�Ӵ�ӡ��Ҫ��""������
//	printf("hello world\n");
//	printf("99999");
//	return 0;
//}

//����/����ռ䲢��ӡ

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

//��������ռ��С

//int main()
//{
//	printf("%d\n", sizeof(char));//1(��λ���ֽڣ���ͬ)
//	printf("%d\n", sizeof(int));//4
//	printf("%d\n", sizeof(long));//4
//	printf("%d\n", sizeof(long long));//8
//	printf("%d\n", sizeof(double));//8
//	printf("%d\n", sizeof(short));//2
//	printf("%d\n", sizeof(float));//4
//	return 0;
//}

//����λ�ã�ͬʱ����ͬ��ȫ�ֱ����;ֲ���������ӡʱ�Ծֲ�����Ϊ׼��

//int num = 10;//----��Ϊȫ�ֱ���
//int main()
//{
//	int num = 20;//----��Ϊ�ֲ�����
//	printf("%d\n", num);
//	return 0;
//}

//�����������ĺ�

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
//scanf_s��VS�ṩ�Ķ���C����ģ����Ҫ�кõļ�����
//�����#define _CRT_SECURE_NO_WARNINGS ��д����
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

//��������

//define����ĳ�����
//const int num = 10;
//#define����ı�ʶ������
//#define MAX 10
//enum ö�ٳ���
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

//�ַ���

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c',0 };
//	printf(" % s\n", arr1);
//	printf(" % s\n", arr2);
//	return 0;
//}

//�����ַ�������

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c',0 };
//	printf(" %d\n", strlen(arr1));
//	printf(" %d\n", strlen(arr2));
//
//	return 0;
//}

//ת���ַ�

//int main()
//{
//	printf("%c\n", '\'');
//	printf("%s\n", "\"");
//	printf("%c\n", '\63');
//	printf("%c\n", '\x61');
//	return 0;
//}

//ѡ�����

//int main()
//{
//	int input = 0;
//	printf("�������\n");
//	printf("�㻹Ҫ�ú�ѧϰ��(1/0)>:");
//	scanf("%d", &input);
//	if (input == "Ҫ")
//		printf("��offer");
//	else
//		printf("������");
//		return 0;
//}

//whileѭ�����

//int main()
//{
//	int line = 0;
//	printf("�������\n");
//
//	while (line < 2000)
//	{
//		printf("yes\n");
//		line++;
//	}
//	printf("ȷʵ");
//	return 0;
//}

//����

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

//����

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
//	printf("���");
//	return 0;
//
//}
//����ģ

//int main()
//{
//	int b = 5 / 2;
//	printf("%d\n", b);//��
//	int a = 5 % 2;
//	printf("%d\n", a);//ģ
//	return 0;
//}

//��λ������

//int main()
//{                       //ÿһλ���Ƕ�����λ
//	int a = 1;//a���淽ʽΪ00000000000000000000000000000001
//	printf("%d\n", a);
//	int b = a << 1;//b��Ϊ 00000000000000000000000000000010
//	printf("%d\n", b);//��b���2
//	int c = a << 2;//c��Ϊ 00000000000000000000000000000100
//	printf("%d\n", c);//��c���4
//	return 0;
//}

//λ����

//int main()
//{              //����������
//	int a = 3; //011
//	int b = 5; //101
//	int c = a & b;//��λ��
//	printf("%d\n", c);
//	int d = a | b;//��λ��
//	printf("%d\n", d);
//	int e = a ^ b;//��λ����
//	printf("%d\n", e);
//	return 0;
//}

//��ֵ������

//int main()
//{
//	int a = 10;
//	int b = 20;      //=Ϊ��ֵ  ==Ϊ�ж����
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

//��Ŀ������

//int main()
//{
//	int c = 0;
//	printf("%d\n",c );
//	printf("%d\n", !c);//�ٱ���
//	int d=10;
//	printf("%d\n",d);
//	printf("%d\n", !d);//����
//
//	int e = 0;
//	printf("%d\n", sizeof(e)); //��һ��д��
//	printf("%d\n", sizeof(int));//��һ��д��
//	printf("%d\n", sizeof e);
//  
//    int arr[] = { 1,2,3,4,5,6};
//	printf("%d\n%d\n", sizeof(arr[4]),sizeof(arr[3]));
//	printf("%d\n", sizeof arr);//��������Ĵ�С
//    printf("%d\n", sizeof(arr));
//	
//    int f = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", f);//����������Ԫ�ظ���
//
//	int g = 0;
//	int h = ~g;      //~��λȡ��������λ��ȡ��
//	printf("%d\n", h);
//
//	int i = 10;
//	int j = i++;//����++,j��ԭi�����i��1���
//    printf("i = %d j = %d\n",i, j);
//	int k = 10;
//	int l = ++k;//ǰ��++��i��1�����j����1���i���
//	printf("k = %d l = %d\n", k, l);
//
//	int m =(int) 3.14;//��3.14ǿ��ת����int����
//	
//	return 0;
//}
//

//�߼�������

//int main()
//{     //�߼���
//	int a = 3;
//	int b = 5;
//	int c = 0;
//	int d = 0;
//	int e = a && b;//ȫ��Ϊ�棬���1
//	printf("%d\n", e);
//	int f = a && c;//���Ϊ�٣����0
//	printf("%d\n", f);
//	int g = c && d;//�ټ�Ϊ�٣����0
//	printf("%d\n", g);
//	  //�߼���
//	int h = a || b;//ȫ��Ϊ�棬���1
//	printf("%d\n", h);
//	int i = a || c;//���Ϊ�棬���1
//	printf("%d\n", i);
//	int j = c || d;//�ټ�Ϊ�٣����0
//	printf("%d\n", j);
//	return 0;
//}

//����������/��Ŀ������

//int main()
//{
//	int a = 10;
//	int b = 20;
//	scanf("%d%d", &a, &b);
//
//	int max = 0;
//	max = (a > b ? a : b);//��һ�п�����·����ε����д���
//	//if (a > b)
//	//	max = a;
//	//else
//	//	max = b;
//	//printf("%d\n", max);
//	//����һ��ֱ�ӱ��int max...��ʼ�ļ��д���
//	a > b ? printf("d\n", a) : printf("%d\n", b);
//	return 0;
//}

//�����ؼ���auto typedef static

//void test1()
//{
//	int a = 1;//����static��ÿ���ٴε��ô˺���a���Ǵ�һ��ʼ
//	a++;
//	printf("a = %d\n", a);
//}
//void test2()
//{
//	static int a = 1;//����static���ٴε��ô˺����Ǵ��ϴεĽ����ʼ
//	a++;
//	printf("a = %d\n", a);
//}
//int main()
//{
//	auto int a = 10;//�ֲ�����/�Զ�����auto��ʡ���ˣ��ֲ���������
//	a = -2;
//	//register
//	register int b = 10;//�����a����Ϊ�Ĵ�������---�����ٶȸ���
//	//typedef
//	typedef unsigned int u_int;//����������ȡ��
//	u_int c = 2;
//	printf("%d\n", c);
//	//static���ξֲ�����
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
//    extern int g_val;//��extern���������ⲿ����
//	printf("g_val = %d\n", g_val);
//	//static���κ���
//	int f = 10;
//	int j = 20;
//	extern int Add(int, int);//��extern���������ⲿ����
//	int sum = Add(f, j);
//	printf("sum = %d\n", sum);
//	return 0;
//}

//���峣���ͺ�

////#define����ı�ʶ������
//#define MAX 100
////#define�����--������
//#define MAx(X,Y) (X>Y?X:Y)
//   //�ú���ʵ�ֱȴ�С
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

//& *  ָ�����

//int main()
//{
//	int a = 10;//�ĸ��ֽ�
//	int* p = &a;//��һ�ֱ�����������ŵ�ַ�ģ���Ϊָ�����
//	printf("%p\n", &a);//%p���ڴ�ӡ��ַ
//	printf("%p\n", p);//��ӡ����ʮ���������еĵĵ�ַ
//	*p = 20;//*�����ò�����/��ӷ��ʲ�����--���б�ʾ��p��ʾ�ĵ�ַ�ı����ĳ�20
//	printf("%d\n", a);
//	char ch = 'w';
//	char* pc = &ch;
//	*pc = 'q';
//	printf("%c\n", ch);
//	//����ָ������Ĵ�С
//	printf("%d\n", sizeof(pc));
//	double d = 3.14;
//	double* pd = &d;
//	*pd = 5.4;
//	printf("%p\n", pd);
//	printf("%d\n", d);
//	printf("%d\n", sizeof(pd));//-----��ַ�Ĵ�С32λƽ̨4�ֽڣ�64λƽ̨8�ֽ�
//	return 0;
//}

//�ṹ��

//struct book
//{
//	char name[20];//����
//	short price;//55
//};
//int main()
//{
//	//���ýṹ��-����һ�������͵Ľṹ�����
//	struct book b1 = { "��ѧ��",55 };
//	printf("������%s\n�۸�%d\n", b1.name, b1.price);
//	b1.price = 15;//�ļ۸�
//	strcpy(b1.name, "��ѧ");//������,strcpy�����ַ��������ģ�ͷ�ļ���string.h
//	printf("���ۺ�%d\n", b1.price);
//	printf("������%s\n", b1.name);
//	struct book* pb = &b1;
//	printf("%p\n", pb);
//	//��ָ���ӡ
//	printf("������%s\n�۸�%d\n", (*pb).name, (*pb).price);
//	//��
//	printf("%s\n", pb->name);
//	printf("%d\n", pb->price);
//	//.�����ڽṹ�����
//	//->�ṹ��ָ��->��Ա
//	return 0;
//}
