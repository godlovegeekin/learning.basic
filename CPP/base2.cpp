#include <stdio.h>
#include <assert.h>

int strcmp(const char *src, const char *dst)
{
    int ret;
    if (src == dst)
        return 0;
    assert(src != NULL);
    if (dst == NULL)
        return -1;
    while (!(ret = *(unsigned char *)src - *(unsigned char *)dst) && *dst)
    {
        src++;
        dst++;
    }
    if (ret < 0)
        return -1;
    else if (ret > 0)
        return 1;
    return ret;
}


void * memset(void * buf, int c, size_t count);
{
    char * pCur = (char *)buf;
    assert(buf != NULL);
    while (count > 0)
    {
        pCur = (char)c;
        pCur++;
        count--;
    }

    return buf;
}


int main(void)
{
    printf("%d\n", sizeof(size_t));
    return 0;
}
