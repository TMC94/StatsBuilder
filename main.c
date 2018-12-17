#include <stdio.h>
#include <stdlib.h>

float myHigh(float numbers[]);
float myLow(float numbers[]);
float mySum(float numbers[]);
float myAvg(float numbers[]);

int main()
{
int i, h;
float num[10];

float highNum = myHigh(num);
float lowNum = myLow(num);
float sum = mySum(num);
float avg = myAvg(num);

printf("From 1 to 10, enter how many numbers you want to calculate: ");
scanf("%d", &h);

while (h > 10 || h <= 0)
    {
        printf("Error! Must enter a number from 1 to 10: ");
        scanf("%d", &h);
    }


for (i = 0; i <h; i++)
{
    printf("Number %d: ", i+1);
        scanf("%f", &num[i]);
        sum += num[i];

}

printf("Highest: %.1f\n", highNum);
printf("Lowest: %.1f\n", lowNum);
printf("Sum: %.1f\n", sum);
printf("Average: %.1f\n", avg);

return 0;

}


float myHigh(float numbers[10])
{
    int i;
    float h = numbers[0];

    for (i = 0; i < 10; i++)
    {
        if (numbers[i] < h)
        {
            h = numbers[i];
        }
    }

    return h;
}

float myLow(float numbers[10])
{
    int i;
    float h = numbers[0];

    for (i = 0; i < 10; i++)
    {
        if (numbers[i] > h)
        {
            h = numbers[i];
        }
    }

    return h;
}


float mySum(float numbers[10])
{
int i;
float sum = 0;

for (i = 0; i <10; i++)
{
    sum+= numbers[i];
}
return sum;
}

float myAvg(float numbers[10])
{
int h;
float avg = 0, sum = 0;

    avg = sum / h;

   return avg;
}

/*int main() {
     int a[5],sum=0,i;
     float avg;
     for(i=0;i<5;i++) {
		printf("Enter any 5 numbers: ");
        scanf("%d",&a[i]);
        sum+=a[i];
     }
     avg=sum/5;
     printf("Sum = %d",sum)
	 printf("Average = %f",avg);
     getch();
} */

