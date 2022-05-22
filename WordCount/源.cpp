
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    char fname[80];/*存贮文件名*/
    FILE* rfp;
    long count;/*文件字符计数器*/
    printf("请输入文件名：");
    scanf("%s", fname);
    if ((rfp = fopen(fname, "r")) == NULL)
    {
        printf("Can't open file %s.\n", fname);
        exit(1);
    }
    count = 0;
    while (fgetc(rfp) != EOF)
    {
        count++;
    }
    fclose(rfp);/*关闭文件*/
    printf("共有 %ld 个字符在文件 %s 中。\n", count, fname);
    return 0;
}
