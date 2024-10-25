  
  
   /*
   
   
                          EXPERIMENT: 03
                          
   
    WAP to design a menu driven calculator using switch aND goto.

      NAME    :    VERMA PRITI BHANU
      UIN     :    241P012    ROLL NO. : 12
     DIVISION :    C          BATCT    :  C1
     BRANCH   :    COMPUTER ENGINEERING
    

 
     
    */
   #include <stdio.h>

   int main() {
   
    float num1, num2,result;
     char operations;
     printf("+:Addition\n");
     printf("-:Subtraction\n");
     printf("*:Multiplication \n");
     printf("/: Division\n");
     printf("%%:Modulus\n");
     printf("@:Exit\n");
     
     backagain:   
     
      
     printf("\nEnter Num1:");
     scanf("%f",&num1);
     printf("\nEnter Num2:");
     scanf("%f",&num2);
     printf("\nEnter Operations: ");
     scanf(" %c",&operations);
     
     switch(operations){
    
    case'+':
      result=num1 + num2;
      printf("\n%.1f +%.1f=%.1f\n",num1,num2,result);
      break;
      
    
    case '-':
    result=num1 - num2;
    printf("\n%.1f-%.1f=%.1f\n",num1,num2, result);
    break;
    
    
    case '*':
    result =num1 * num2;
    printf("\n%.1f*%.1f =%.1f\n",num1,num2,result);
     break;
    
    
    case '/':
    result =num1 / num2;
  printf("\n%.1f/%.1f=%.1f\n",num1,num2, result);
   break;
    
    
    case'%':
    result= (int)num1 % (int)num2;
    printf("\n%d% %d= %d\n", (int)num1,(int)num2,(int)result);
     break ;
 
    default:
    printf("invalid");
    break;
    
    }
    
    printf ("continue?(Y/N)");
    scanf("%c",&operations);
    
    if (operations =='Y' || operations =='y')
    {
      goto  backagain;
    }
    
        
     return 0; 
      
      
     }
    /* 
     
                      OUTPUT
                      
                      
        -:Subtraction
        *:Multiplication
        /: Division
        %:Modulus
        @:Exit

        Enter Num1:12

        Enter Num2:12

        Enter Operations: +

        12.0 +12.0=24.0
        continue?(Y/N)
     
     
     */
     
     
     
     