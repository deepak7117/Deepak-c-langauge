#include <stdio.h>
#include <math.h>
#include <string.h>
int squarearea();
int rectanglearea();
int circlearea();
int trianglearea();
int arithematics();
int swap();
int factorial();
int fibonacci();
int evenodd();
int modulo();
int gcd();
int lcm();
int lcd();

int main(){
    char username[20],password[20];
    printf("Enter username:");
    scanf("%s",username);
    printf("Enter password:");
    scanf("%s",password);
   
   

    if(strcmp(username,"Deepak")==0 && strcmp(password,"Deepak@7117")==0){
    int choice;
    printf("Menu:\n1. Area of Square\n2. Area of Rectangle\n3. Area of Circle\n4. Area of Triangle\n5. Arithematics Operations\n6. Swap Two Numbers\n7. Factorial of a Number\n8. Fibonacci Series\n9. check even odd\n10. remider after division\n11. Greatest common divisor\n12. Lowest Common Multiple\n13. Lowest Caommon Divisor\nEnter your choice:");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            squarearea();
            break;
        case 2:
            rectanglearea();
            break;
        case 3:
            circlearea();
            break;
        case 4:
            trianglearea();
            break;
        case 5:
            arithematics();
            break;
        case 6:
            swap();
            break;
        case 7:
            factorial();
            break;
        case 8:
            fibonacci();
            break;
        case 9:
        	evenodd();
        	break;
        case 10:
        	modulo();
        	break;
        case 11:
        	gcd();
        	break;
        case 12:
        	lcm();
        	break;
        case 13:
        	lcd();
        	break;
        default:
            printf("Invalid choice");
    }}
    else{
    	printf("invalid Username or password");
    } 
}

int squarearea(){
    int side,area;
printf("Enter side of square:");
    scanf("%d",&side);
    area=side*side;
    printf("Area of square is %d",area);
    return 0;
}

int rectanglearea(){
    int length,breadth,area;
    printf("Enter length and breadth of rectangle:");
    scanf("%d %d",&length,&breadth);
    area=length*breadth;
    printf("Area of rectangle is %d",area);
    return 0;
}

int circlearea(){
    float radius,area;
    printf("Enter radius of circle:");
    scanf("%f",&radius);
    area=3.14*radius*radius;
    printf("Area of circle is %.2f",area);
    return 0;
}

int trianglearea(){
    float base,height,area;
    printf("Enter base and height of triangle:");
    scanf("%f %f",&base,&height);
    area=0.5*base*height;
    printf("Area of triangle is %.2f",area);
    return 0;
}
int arithematics(){
    int a,b,sum,diff,prod,quot;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    sum=a+b;
    diff=a-b;
    prod=a*b;
    quot=a/b;
    printf("Sum=%d\nDifference=%d\nProduct=%d\nQuotient=%d",sum,diff,prod,quot);
    return 0;
}
int swap(){
    int a,b,temp;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("After swapping: a=%d b=%d",a,b);
    return 0;
}
int factorial(){
    int n,fact=1,i;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        fact=fact*i;
    }
    printf("Factorial of %d is %d",n,fact);
    return 0;
}
int fibonacci(){
    int n,a=0,b=1,next,i;
    printf("Enter number of terms:");
    scanf("%d",&n);
    printf("Fibonacci Series:\n");
    for(i=1;i<=n;i++){
        printf("%d\n",a);
        next=a+b;
        a=b;
        b=next;
    }
    return 0;
}
int evenodd(){
	int a;
	printf("enter the number:");
	scanf("%d",&a);
	if( a%2 == 0){
	printf("entered number is even ");
}
else{
	printf("entered number is odd");
	
}
return 0;
}
int modulo(){
    int a,b,d;
    printf("Enter the number:");
    scanf("%d",&a);
    
    printf("Enter the divisor:");
   scanf("%d",&b);
    if (b == 0) {
        printf("Error: division by zero\n");
        return 1;

    }
    d = a % b;
    printf("The remainder after dividing %d by %d is %d", a, b, d);
    return 0;
}
int gcd(){
    int a,b,i,gcd;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    for(i=1;i<=a && i<=b;i++){
        if(a%i==0 && b%i==0){
            gcd=i;
        }
    }
    printf("GCD of %d and %d is %d",a,b,gcd);
    return 0;
}
int lcm(){
    int a,b,max,lcm,i;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    max=(a>b)?a:b;
    while(i=1){
        if(max%a==0 && max%b==0){
            lcm=max;
            break;
        }
        max++;
    }
    printf("LCM of %d and %d is %d",a,b,lcm);
    return 0;
}
int lcd(){
    int a,b,min,lcd,i;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    min=(a<b)?a:b;
    while(i=1){
        if(a%min==0 && b%min==0){
            lcd=min;
            break;
        }
        min--;
    }
    printf("LCD of %d and %d is %d",a,b,lcd);
    return 0;
}























