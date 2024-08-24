// Watched the above video for a idea  
 LINK:[https://www.youtube.com/watch?v=i4Upj7tDPp8]

#include <stdio.h>
#include<math.h>

int main() {
    int n , sum = 0;
    printf("enter n:");
    scanf("%d", &n);
    int temp=n;
    int length = 0;
    int num = n;
    while(num!=0){
        num = num/10;
        length++;
    }
    num = temp;
    while(num!=0)
    {
        int lastDigit = num%10;
        sum=sum+pow(lastDigit,length);
        num=num/10;
    }
    if(temp==sum){
        printf("armstrong");
    }
    else {
        printf(" not a armstrong");
    }
    return 0;
} 
O/P 
  enter n:1634
armstrong
  enter n:121
 not a armstrong
