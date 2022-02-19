#include <process.h>
#include <cstdio>
#include <stdlib.h>
#include <time.h>
using namespace std;
char a;
int money=5000,b,c;
double stork[5]; 
double mystork[5];
void menu();     //函数声明 
void warehouse();
void shop();
void menu()
{
	system("cls");
	printf("欢迎来到股票风云! \n\n");
	printf("按S键查看当前股市\n");
	printf("按W键查看我的仓库\n"); 
	scanf("%c",&a);
	if (a=='w') warehouse();
	else if (a=='s') shop();
	else { printf("输入错误！"); menu();}
}
void warehouse()
{
	system("cls");
	printf("%30d ￥\n",&money);
	printf("按0返回\n");
	scanf("%c\n",&a);
	menu();
} 
void shop()
{
	system("cls");
	printf("%30d ￥\n",&money);
	for(int i=0;i<5;i++)
		if(rand()%2==1) stork[i]+=rand()%100/100.0;
		else stork[i]-=rand()%100/100.0;
	printf(" %.3lf￥\n",stork[1]);
	printf(" %.3lf￥\n",stork[2]);
	printf(" %.3lf￥\n",stork[3]);
	printf(" %.3lf￥\n",stork[4]);
	printf(" %.3lf￥\n",stork[5]);
	printf("按0返回\n");
	printf("选择股票（填序号）\n");
	scanf("%c\n",&c);
	if(c!=0) 
	{
		printf("买入股数？\n");
		scanf("%d",&b);
		if(money<=stork[c]*b) money-=stork[c]*b;
		else printf("\n余额不足！"); 
	}
	menu();
}
int main()
{
	srand((unsigned)time(NULL));
	printf("------------------------------------------------------------\n\n\n\n");
	printf("                        股 票 风 云                         \n\n\n");
	printf("                       by seahorizon                        \n");
	printf("                       按Enter键继续                        \n\n\n\n\n\n\n");
	printf("------------------------------------------------------------");
	for(int i=0;i<=5;i++) stork[i]=rand()%5+1;
	scanf("%c",&a);
	menu();
	return 0;
}
