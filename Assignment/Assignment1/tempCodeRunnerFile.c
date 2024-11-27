#include <stdio.h>

int main(int argc, char const *argv[])
{
    char char1, char2;
    int result_num;

    printf("Please enter two characters: ");
    scanf(" %c %c", &char1, &char2); // 注意这里要加个空格，避免缓存影响

    // 检查输入字符是否是有效的字母
    if ((char1 >= 'A' && char1 <= 'Z') || (char1 >= 'a' && char1 <= 'z'))
    {
        if ((char2 >= 'A' && char2 <= 'Z') || (char2 >= 'a' && char2 <= 'z'))
        {
            result_num = (char1 > char2) ? (char1 - char2) : (char2 - char1);
        }
        else
        {
            printf("Input invalid.");
            return 0;
        }        
    }
    else
    {
        printf("Input invalid.");
        return 0;
    }

    printf("The difference is %d\n", result_num);

    return 0;
}
