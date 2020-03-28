#include <gperftools/malloc_extension.h>
#include <stdio.h>

int main(void)
{
    puts("hello traverse memory");
    MallocExtension::instance()->VerifyAllMemory();
    size_t s = MallocExtension::instance()->GetThreadCacheSize();

    char buf[10240] = {0};
    MallocExtension::instance()->GetStats(buf, 10240);
    puts(buf);
    return 0;
}