#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "launchlove.h"

int main(int argc, char const *argv[])
{
    char *name = NULL;
    printf("你好呀，心上人~\n");
    sleep(1);
    printf("请问你叫什么名字呀~：");
    scanf("%ms", &name); // 使用 %m 修饰符，自动分配内存并读取一行文本
    usleep(200000);
    printf("%s，哇呜！好特别的名字呢！\n", name);
    usleep(900000);
    printf("那么，现在给你三秒钟的时间爱上我~  \n");
    usleep(1900000);
    printf("1秒~  \n");
    sleep(1);
    printf("2秒~  \n");
    usleep(900000);
    printf("时间到！那你爱上我了吗？(Y/n): ");
    char *option = NULL;
    scanf("%ms", &option);
    if (strcmp(option, "Y") == 0 || strcmp(option, "y") == 0)
    {
        printf("太好了，向你发射爱心气泡~\n\n");
    }
    else if (strcmp(option, "N") == 0 || strcmp(option, "n") == 0)
    {
        printf("哼，你一定会爱上我的！爱心气泡~\n\n");
    }
    else
    {
        printf("真讨厌，不按照人家的套路回答！我一定会让你爱上我的，爱心气泡~\n\n");
    }
    launchlove();
    usleep(400000);

    free(name);
    free(option);
    return 0;
}

