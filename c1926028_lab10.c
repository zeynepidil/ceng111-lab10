//Question1
#include<stdio.h>
int isArmstrong(int num);
void printArmstrong(int start, int end);
int main(){
	int lowerlimit;
	int upperlimit;
	printf("Enter lower limit to print armstrong numbers:");
	scanf("%d",&lowerlimit);
	printf("Enter upper limit to print armstrong numbers:");
	scanf("%d",&upperlimit);
	printf("All armstrong numbers between %d to %d are:\n",lowerlimit,upperlimit);
	printArmstrong(lowerlimit,upperlimit);
	return 0;
}
int isArmstrong(int num){
	int r,temp;
	int sum=0.0;
	for(temp=num;num!=0;num=num/10){
		r=num%10;
		sum=sum+(r*r*r);	
	}
	if(sum==temp)
	     return 1;
    else
         return 0;
  }
void printArmstrong(int lowerlimit,int upperlimit){
	while(lowerlimit<upperlimit){
	   if(isArmstrong(lowerlimit)){
	   	    printf("%d, ",lowerlimit);
	   }
	   lowerlimit++;
}
}
//Question2
#include<stdio.h>
void triangular_series(int n)
{
    int i, j = 1, k = 1;
    for (i = 1; i <= n; i++) {
        printf(" %d ", k);
        j = j + 1; 
        k = k + j; 
    }
}
int main()
{   int n;
    printf("Input a number:");
    scanf("%d",&n);
    printf("Triangular series:\n");
    triangular_series(n);
    return 0;
}
//Question3
#include <stdio.h>

int countDigits(int number, int reqDigit)
{
    int count = 0; 
    while (number > 0)
    {
        if (number % 10 == reqDigit) 
            count++;                 

        number = number /= 10; 
    }
    return count; 
}
int main()
{
    int number;                
    printf("Input a number: "); 
    scanf("%d", &number);       

    int reqDigit;                        
    printf("Input a number to check: "); 
    scanf("%d", &reqDigit);              

    printf("The number of %d in the said number is %d\n", reqDigit, countDigits(number, reqDigit));
}
//Question4
#include <stdio.h>
void find(){
    int i,great_val, low_val, great_ind, low_ind;
    int arr[5];
    for(i=0;i<5;i++){
        printf("Input integer: ");
        scanf("%d",&arr[i]);
    }

    great_val = arr[0];
    low_val = arr[0];

    great_ind = 1;
    low_ind = 1;

    for(i=1;i<5;i++){

        if (arr[i] < low_val){
            low_val = arr[i];
            low_ind = i+1;
        }
        if (arr[i] > great_val){
            great_val = arr[i];
            great_ind = i+1;
        }

    }

    printf("\nHighest value: %d",great_val);
    printf("\nPosition: %d\n",great_ind);

    printf("\nLowest value: %d",low_val);
    printf("\nPosition: %d\n",low_ind);

}

int main(){
    find();
    return 0;
}
