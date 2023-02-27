

// void f()
// {
//     int a;
//     printf("Enter any number: \n");
//     scanf("%d", &a);
//     printf("")
// }
// #include <stdio.h>

// void main()
// {

//     f();
// }
// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char s[20];
//     prinf("Enter a string :");
//     getc(s);
//     printf("the value is %c", s);
//     return 0;
// }
// # include<stdio.h>

//      int main(){

//      return 0 ;
// }
// #include <stdio.h>

// int main()
// {
//     int a[5] = {10, 37, 26, 40, 80};
//     for (int i = 0; i < 5; i++)
//     {
//         if (i % 2 == 0)
//         {
//             printf("%d ", a[i]);
//         }
//     }
//     return 0;
// }
// #include <stdio.h>

// int main()
// {
//     int x;
//     printf("Enter the number:\n");
//     scanf("%d", &x);
//     int i, num = x;
//     for (i = 1; i <= x; i++)
//     {
//         for (int j = x; j >= 1; j--)
//         {
//             printf("%d ", num);
//         }
//         num--;
//     }
//     x = x + 2;
//     printf("\n");
//     for (i = 1; i <= x; i++)
//     {
//         for (int j = x; j >= 1; j--)
//         {
//             printf("%d ", num);
//         }
//         num--;
//     }
//     return 0;
// }
// # include<stdio.h>
//    void sum(){
//     int a,b;
//     printf("Enter two numbers:\n");
//     scanf("%d %d",&a,&b);
//     printf("The sum = %d",a+b);
//    }

//      int main(){
//      sum();
//      return 0 ;
// }
//
// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char a[100] = "Avishek";
//     char b[100] = "Sandip";
//     char c[100];
//     // printf("Enter:\n");
//     // gets(a);
//     // if (a[0])
//     // {
//     //     printf("You");
//     // }
//     // else if (a[1])
//     // {
//     //     printf("hello");
//     // }
//     // else
//     // {
//     //     printf("sorry");
//     // }
//     gets(c);
//     if (c[100] == a[100])
//     {
//         printf("hi");
//     }
//     return 0;
// }
// #include <stdio.h>

// int main()
// {
//     char a[100];
//     char b[100] = "math";
//     char c[100] = "english";
//     char d[100] = "both";
//     printf("Enter any subject\n");
//     gets(a);
//     if (a[100] == b[100])
//     {
//         printf("you can gift for 15");
//     }
//     else if (a[100] == c[100])
//     {
//         printf("you can gift for 30");
//     }
//     else if (a[100] == d[100])
//     {
//         printf("you can gift for 45");
//     }
//     else
//     {
//         printf("you have no gift");
//     }

//     return 0;
// }
#include <stdio.h>

int main()
{
    char a[2] = {"avishek", "sandip"};
    gets(a);
    switch (a[2])
    {
    case 'avishek':
        printf("you can gift for 15");
        break;
    case 'sandip':
        printf("you can gift for 45");
        break;
    default:
        printf("you have no gift");
    }
    return 0;
}