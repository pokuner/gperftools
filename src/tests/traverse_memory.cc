#include <gperftools/malloc_extension.h>
#include <stdio.h>

int main(void)
{
    puts("hello traverse memory");
    size_t s = MallocExtension::instance()->GetThreadCacheSize();
    return 0;
}