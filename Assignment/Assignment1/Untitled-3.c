/*
=============================================
 Name: A1T4R130013034.c
 Author: Pengran Wang
 Version: 1.0
 Copyright: copyright CC_BY_NC_ND
 Description: ABC scanner
 =============================================
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    char a, b;
    int small_a, small_b;
    printf("Plz input your words");
    scanf("%c %c", &a, &b);

    small_a = (a >= 'A' && a <= 'Z') ? a + ('a' - 'A') : a;
    small_b = (b >= 'A' && b <= 'Z') ? b + ('a' - 'A') : b;

    if (!(small_a >= 'a' && small_a <= 'z'))
    {
        printf("Error\n");
        return 0;
    }

    if (!(small_b >= 'a' && small_b <= 'z'))
    {
        printf("Error\n");
        return 0;
    }

    if (small_a<=small_b)
    {
        printf("%c is the first and the %c is the second.\n", a, b);
    }
    else
    {
        printf("%c is the first and the %c is the second.\n", b, a);
    }
    
    
}
//     char input_a, input_b, output_a, output_b;
//     printf("请输入两个字母");
//     scanf("%c %c", &input_a, &input_b);

//     output_a = input_a;
//     output_b = input_b;

//     // 判断输入是否合法
//     if ((input_a >= 'a') && (input_a <= 'z') || (input_a >= 'A') && (input_a <= 'Z'))
//     {
//         if ((input_b >= 'a') && (input_b <= 'z') || (input_b >= 'A') && (input_b <= 'Z'))
//         {
//             printf("都没问题，都是正常的字母\n");
//         }
//         else
//         {
//             printf("输入不合法\n");
//             return 0;
//         }
//     }
//     else
//     {
//         printf("输入不合法\n");
//         return 0;
//     }

//     // 强制转换小写
//     if (input_a >= 'A' && input_a <= 'Z')
//     {
//         input_a += ('a' - 'A');
//     }
//     else if (input_b >= 'A' && input_b <= 'Z')
//     {
//         input_b += ('a' - 'A');
//     }

//     if (input_a <= input_b)
//     {
//         printf("%c大于%c，所以按一开始的输入顺序返回字母。返回的字母为%c,%c\n", output_a, output_b, output_a, output_b);
//     }
//     else
//     {
//         printf("%c小于%c，所以倒过来返回字母。返回的字母为%c,%c\n", output_a, output_b, output_b, output_a);
//     }

//     return 0;
// }
