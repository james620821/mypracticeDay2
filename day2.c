//char-->1byte
//short int -->2byte
//int/long int -->4byte
//sizeof(long int) -->�i��Xlong int�e�δX�Ӧ줸��
#include <stdio.h>
int main()
{
    /*int a = 123456789;
    unsigned int b = 3000000000;
    printf("%d\n", a); //123456789
    printf("%d\n", b); //-1294967296
    printf("%u\n", b); //3000000000
    printf("%u\n", a); //123456789
    */
    /*float a = 123.45;
    double b = 123.45;
    printf("%f\n", a); //123.449997
    printf("%f\n" , b); //123.450000
    */
    /*
    int num1, num2, num3;
    printf("Please enter the first integer: ");
    scanf("%d", &num1);
    printf("Please enter the second integer: ");
    scanf("%d", &num2);
    printf("Please enter the third integer: ");
    scanf("%d", &num3);
    double average = (num1 + num2 + num3 )/ 3.; //�v��2-4 3.����ƫ��A�Odouble(���I)
    printf("Average: %f\n", average);
    */
    /*
    char ch = 'A' + 1;  //char�i�H����ƹB��A�v��2-8 (���I)
    char ch1 = 'A' + '1'; // 65+49=114 ���G��r
    printf("%c\n", ch1);
    */
    char input, output;
    printf("Please enter one upper letter: ");
    scanf("%c", &input);
    output = input + 32; // output = input + ('a' - 'A');
    printf("the lowercase is %c\n", output);
    return 0;
}



