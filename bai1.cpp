#include<stdio.h>
void input( int &a, int &b);
void add( int a, int b);
void sub( int a, int b);
void mul(int a, int b);
void divide(float a, float b);
void menu( int a, int b);
int main(){
    int a,b;
    input(a,b);
    add(a,b);
    sub(a,b);
    mul(a,b);
    divide(a,b);
    menu(a,b);
    return 0;
}
void input( int &a, int &b){
    printf("enter your nmber: ");
    scanf("%d%d",&a,&b);
}
void add( int a, int b){
    int add=a+b;
    printf("\n%d",add);
}
void sub( int a, int b){
    int sub=a-b;
    printf("\n%d",sub);
}
void mul(int a, int b){
    int mul=a*b;
    printf("\n%d",mul);
}
void divide(float a, float b){
    float divide=a/b;
    printf("\n%.1f",divide);
}
void menu( int a, int b){
	int luachon;
	do{
		printf("\n----------menu----------");
		printf("\n1.add");
		printf("\n2.sub");
		printf("\n3.mul");
		printf("\n4.divide");
		printf("\n------------------------");
		printf("\nlua chon cua ban?");
		scanf("%d",&luachon);
		switch(luachon){
			case 1:
				add(a,b);
				break;
			case 2:
				sub(a,b);
				break;
			case 3:
				mul(a,b);
				break;
			case 4:
				divide(a,b);
				break;
			default:
				printf("\nlua chon khong hop le!");
				break;
		}
		printf("\nban co muon thoat ra khong ( nhan phim 0 de thoat!)?");
		scanf("%d",&luachon);
	}while(luachon);
}
