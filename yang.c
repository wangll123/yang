#include<stdio.h>
#include<math.h>//数学运算
#include<stdbool.h>
#include<time.h>
#include<unistd.h>//延时
#include<string.h>//随机数 
//#include<Windows.h>
/*40: 黑 30: 黑;
41: 红 31: 红;
42: 绿 32: 绿;
43: 黄 33: 黄;
44: 蓝 34: 深蓝;
45: 紫 35: 紫;
46: 深绿 36: 蓝;
47: 白色 37: 白色;

printf("\033[1;32m %s \033[0m", "Hello World!");*/

/*类型名称 C 语言中的关键词注释
字符型 char 用于表示一个很小的整数
短整型 short 用于表示一个不怎么大的整数
整型 int 生活中一般的整数都可以表示
长整型 long 用于表示一个较大的整数
加长整型 long long 用于表示一个非常大的整数*/

int gg[3][2]= {{0,1},{2,3},{4,5}};
int black, yellow, red,H,num,i;
int a,on,l;




int jsq1 ()
{

    int a,b,c ;
    char fh;

    printf("请输入左值\n");
    scanf("%d",&a);
    printf("请输入右值\n");
    scanf("%d",&b);

    char lj[1024];//清空缓存器空间
    fgets(lj,1024,stdin);

    printf("请输入运算符\n");
    scanf("%c",&fh);

    switch(fh)
    {
    case '+':
        c=a+b;
        break;
    case '-':
        c=a-b;
        break;
    case '*':
        c=a*b;
        break;
    case '/':
        c=a/b;
        break;
    }
    printf("%d",c);

    return jsq1;
}
int Time()//五秒刷新一次时间
{   //int a=30;
    while(1)
    {   //a++;
        time_t t = time(NULL);
        struct tm tm = *localtime(&t);
        printf("\033[1;35m现在时间是：%d-%02d-%02d %02d:%02d:%02d\n",
               tm.tm_year + 1900, tm.tm_mon + 1,tm.tm_mday,
               tm.tm_hour, tm.tm_min, tm.tm_sec);
        sleep(5);//延时5秒
    }
}



int ljf()//逻辑符
{
    int a,b;
    printf("大于0为真，0为假!\n");
    printf("与门,输入两个数字\n");
    scanf("%d%d",&a,&b);
    if (a>0 && b>0) //与
    {
        printf("真\n");
    }
    else
    {
        printf("假\n");
    }



    printf("或门,输入两个数字\n");//或门
    scanf("%d%d",&a,&b);
    if (a>0 || b>0)
    {
        printf("真\n");
    }
    else
    {
        printf("假\n");
    }



    bool  kgk ;
    printf ("非门,输入一个数字(0或1)\n");
    scanf ("%d",&kgk);

    kgk=!(kgk);


    if( kgk=1)
    {
        printf("输入为真，置反为假\n");
        printf("输出假");

    }
    else
    {
        printf("输入为假，置反为真\n");
        printf("输出假");
    }
    return ljf;
}

int ysf()  //运算符
{   int  a,b,c;
    int A,B,C,D,E,F,G,H,I,J,K,L,M;
    A=5;   //除法运算
    B=2;
    float NB = (float)A / (float)B;
    printf("%f\n",NB);


    // 除法取余数(取模)
    C = A % B;//5÷2 余1
    printf("%d\n",C);


    //自加1 D++   ++D
    //自减同理
    D=1;     //D++  先返回值，在加加
    printf("%d\n", D++);
    printf("%d\n", D);
    D=1;     //++D  先加加，再返回值
    printf("%d\n",++D);
    printf("%d\n",++D);

    //平方运算 pow(底数，幂)
    E=5;
    F=2;
    J = pow (E,F);
    printf("%d\n",J);

    /*开根号运算
    如果参数是 double 类型，使用 sqrt
    如果参数是 float 类型，使用 sqrtf
    如果参数是 long double 类型，使用 sqztl*/
    K = 36;
    M = sqrt (K);
    printf("%d\n",M);

    /* 能够放在等号左边，被赋值叫做左值
    只能放在等号右边，给别人赋值，叫做右值
    常量(字面量)只能做右值
    变量是左值，也可以当做右值*/


    a += 3;//a =a+3;
    a -= 3;//a =a-3;
    a *= 3;//a =a*3;
    a /= 3;//a =a/3;
    a %= 3;//a =a%3;



    a!=b;//a≠b

    return ysf;


}

int shu()
{
    /*输出每个数据类型在内存中占用的字节*/
    int nnnn =sizeof(char);
    printf("\033[1;33m%d\n",nnnn);
    int n=     sizeof(short);
    printf("%d\n",n);
    int nn =sizeof(int);
    printf("%d\n",nn);
    int nnn =sizeof(long);
    printf("%d\n\033[1;0m",nnn);
    return shu;
}


int jsq ()
{
    int a,b,dan ;
    char fh;

    printf("请输入左值\n");
    scanf("%d",&a);
    printf("请输入右值\n");
    scanf("%d",&b);


    /* char lj[1024];//清空缓存器空间
     fgets(lj,1024,stdin);*/
    fflush(stdin);

    printf("请输入运算符\n");
    scanf("%c",&fh);

    if (fh =='+')
    {
        dan = a + b;

    }
    else if(fh=='-')
    {
        dan = a - b;

    }
    else if(fh=='*')
    {
        dan = a * b;

    }
    else if(fh=='/')
    {
        dan = a / b;

    }
    else
    {
        printf("不支持");
    }
    printf("%d",dan );


    return jsq;


}

void XQ (black, yellow, red)//6，5，3。
{
    /*以下函数fun的功能是从3个红球(x)、
    5个白球(y)、6个黑球(z)
    中任意取出8个,且其中必须要有红球和白球。
    请编写函数，输出所有方案。*/
    for(int i=1; i<=red; i++)
    {   for(int j=1; j<=yellow; j++)
        {
            num++;
            H=8-i-j;
            printf("\033[1;32m方案%d 红:%d 黄:%d 黑:%d\n\033[1;0m",num,i,j,H);
        }
    }


    // return XQ;
}
void sjs ()
{   //无限获取随机数

    while(1)
    {
        srand((unsigned int)time(NULL));
        //刷新时间戳;
        int a=rand()%2+0;
        //随机数0------1
        printf("%d\n",a);
        sleep(1);//延时1秒
    }

}


void yang ()
{
    int a,b,c;
    printf("\033[1;32m杨帆吃糕\n");
    printf("\033[1;33m一口吃几两\n");
    scanf("%d",&a);
    if(a>2)
    {
        sleep(1);
        printf("\033[1;34m杨帆吃死了\n\033[1;0m");
    }
    else
    {
        sleep(1);
        printf("\033[1;34m太香了\n\033[1;0m");
    }
    //return yang ;
}


void caiSZ ()
{
    int b;
    int c=1;
    srand((unsigned int)time(NULL));
    //刷新时间戳;
    int a=rand()%100+1;
    printf("\033[1;32m猜一个1-100的数字\n");
    // printf("%d\n",a);
    while(1)
    {
        scanf("%d",&b);
        if(b<a)
        {
            printf("猜小了，宝💘💘\n");
        }
        else if(b>a)
        {
            printf("猜大了，宝🤔🤔\n");
        }
        else
        {
            printf("猜对了，宝贝😘😘\n");
            break;
        }
        c++;
    }
    printf("你一共猜了 %d 次\n",c);

}
void cfb()
{

    int i, j;
    for (i = 1; i <= 9; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d*%d=%-2d ", j, i, i*j);
        }
        printf("\n");
    }

}

int main()
{

    //jsq ();
    //ljf();
    //Time();
    //jsq1();
    yang();
    //caiSZ();

   // cfb();

    return 0;
}