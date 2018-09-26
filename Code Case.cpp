#include<stdio.h>

int main(){
	int select;
	printf("Please Select Your Case \n");
	printf("case 1 is Max&&Min\n");
	printf("case 2 is grade\n");
	printf("case 3 is plus Number\n");
	printf("case 4 is multiplication table\n");
	printf("case 5 is Prime Number\n");
	printf("Enter Number");
	scanf("%d",&select);
	
	switch (select){
	    case 1 : printf("Max&Min Number\n");
		int Number1,Number2,Number3;
	printf("Enter Number1:");
	scanf("%d",&Number1);
	printf("Enter Number2:");
	scanf("%d",&Number2);
	printf("Enter Number3:");
	scanf("%d",&Number3);
	//Max&&Min-----------------------------------------------------------------------**Max&&Min**--------------------------------------------------------------------------
	if(Number1>Number2 && Number1>Number3||Number1>Number3&&Number2>Number3&&Number1>Number2){
		printf("Number Max: %d\n",Number1);
	}
	else if(Number2>Number1 && Number2>Number3){
		printf("Number Max: %d\n",Number2);
	}
	else if(Number3>Number1 && Number3>Number2){
		printf("Number Max: %d\n",Number3);
	}
	else if(Number1>2&&Number3>2&&Number1>3){
		printf("Number Max :%d\n",Number1);
	}
	else if(Number1>2&&Number3>2&&Number1<3){
		printf("Number Max :%d\n",Number3);
	}
	//---------------------MaxEnd----------------------------
	 if(Number1<Number2 && Number1<Number3 ||Number1==Number3 ||Number1==Number2){
		printf("Number Min: %d\n",Number1);
	}
	else if(Number2<Number1 && Number2<Number3||Number2==Number3||Number2==1){
		printf("Number Min: %d\n",Number2);
	}
	else if(Number3<Number1 && Number3<Number2||Number3==Number2||Number3==Number1){
		printf("Number Min: %d\n",Number3);
	}	
	break;	//End Case1
	
	case 2:printf("Grade\n");
	int YourGrade;
	printf("Enter Your Grade :\n");
	scanf("%d",&YourGrade);
	
	if(YourGrade>=80&&YourGrade<=100){
		printf("Your Grade A!\n");
	}
	else if(YourGrade<80&&YourGrade>=75){
		printf("Your Grade B+!\n");
	}
	else if(YourGrade<75&&YourGrade>=70){
		printf("Your Grade B!\n");
	}
	else if(YourGrade<70&&YourGrade>=65){
		printf("Your Grade C+!\n");
	}
	else if(YourGrade<65&&YourGrade>=60){
		printf("Your Grade C!\n");
	}
	else if(YourGrade<60&&YourGrade>=55){
		printf("Your Grade D+!\n");
	}
	else if(YourGrade<55&&YourGrade>=50){
		printf("Your Grade D!\n");
	}
	else if(YourGrade<50&&YourGrade>=0){
		printf("Your Grade F!\n");
	}
	else {
		printf("ProGrams Error!!\n");
	}
	break;
	//End Case2
	
	case 3 :
		printf("Plus Number\n");
	    int NumberP1,NumberP2;
	    printf("Enter YourNumber1:\n");
	    scanf("%d",&NumberP1);
	    printf("Enter YourNumber2:\n");
	    scanf("%d",&NumberP2);
	    //AswerP=NumberP1+NumberP2;
	    printf("Number1 + Number2 = %d",NumberP1+NumberP2);
	break ;
	//End case3
                         
	case 4 : 
		printf("multiplication table\n");
	    int NumberM;
	    printf("Enter Your Numebr:");
	    scanf("%d",&NumberM);
	    printf("%d x 1 = %d\n",NumberM,NumberM*1);
		printf("%d x 2 = %d\n",NumberM,NumberM*2);
		printf("%d x 3 = %d\n",NumberM,NumberM*3);
	    printf("%d x 4 = %d\n",NumberM,NumberM*4);
		printf("%d x 5 = %d\n",NumberM,NumberM*5);
		printf("%d x 6 = %d\n",NumberM,NumberM*6);
		printf("%d x 7 = %d\n",NumberM,NumberM*7);
		printf("%d x 8 = %d\n",NumberM,NumberM*8);
		printf("%d x 9 = %d\n",NumberM,NumberM*9);
		printf("%d x 10 = %d\n",NumberM,NumberM*10);
		printf("%d x 11 = %d\n",NumberM,NumberM*11);
		printf("%d x 12 = %d",NumberM,NumberM*12);
	break;
	///End case4
	case 5:
		printf("Prime Number is ");
		int i,j;
		for(i=1;i<=30;i++){
			for(j=2;j<=i;j++){
				if(i%j==0){
					break;
				}
				
			}
			if(i==j){
				printf("%d ",i);
			}
		}//end for
	//case 5
	
	}//End Switch
	
	
	
	
}//End Main
