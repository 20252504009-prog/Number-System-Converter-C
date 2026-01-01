// NUMBER SYSTEM CONVERSION                                                
// AUTHOR:BHAKKTI GAUTAM                                                  
// DESCRIPTION :A simple C program that converts decimal numbers into binary, octal, and hexadecimal formats using fundamental logic and functions.
// CONCEPTS USED:FUNCTIONS,LOOPS(for),CONDITIONALS,MODULUS(%) AND DVISION
#include<stdio.h>
//Function to convert decimal to binary
void decimaltobinary(int a)
{
        int n,num,j;
        num =0;//to store binary number
        j=1;//multiplier for positional value
        for(int i=a;i>=1;i=i/2)
        {
                n=i%2;//getting current binary digit
                num = num+j*n;
                j=j*10;//moving to next position of a number
        }
        printf("%d",num);//printing binary number
}
//Function to convert decimal to octal
void decimaltooctal(int a)
{
        int n,num,j;
        num=0;
        j=1;
        for(int i=a;i>=1;i=i/8)
        {
                n=i%8;//getting current octal digit
                num=num+j*n;
                j=j*10;//move to next position
        }
        printf("%d",num);//printing the octal number
}
//Function to convert decimal to hexadecimal
void decimaltohexadecimal(int a)
{
        int n;
        if(a==0)
        {
                return;// End recursion when decimal number is 0
        }
                n=a%16;//get current hex digit
                decimaltohexadecimal(a/16);//recursive call
                if(n<10)
                {

                        printf("%d",n);//prinitng digit0-9
                }
                else{
                        printf("%c",n-10+'A');//prinitng characters A-F for 10-15
                }
        }


int main()
{
        int a;//Variables to store input values
        char ch;//Type conversion chosen by the user
        // Display menu and take user input
        printf("ENTER THE DECIMAL NUMBER YOU WANT TO CONVERT");
        scanf("%d",&a);
        printf("ENTER THE TYPE IN WHICH YOU WANT TO CONVERT\nO FOR OCTAHEDRAL\nH FOR HEXADECIMAL\n B FOR BINARY");
        scanf(" %c",&ch);
        //CALL THE OPERATIONAL FUNCTIONS ACCORDING TO THE GIVEN INPUT
        if(ch=='B')
        {
                decimaltobinary(a);
        }
        else if(ch=='O')
        {
                decimaltooctal(a);
        }
        else if(ch=='H')
        {
                decimaltohexadecimal(a);
        }
        else
        {
                printf("INVALID OPERATION");
        }
return 0;//END OF PROGRAM
}

