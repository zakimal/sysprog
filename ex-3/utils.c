/* 61604239 */

/* This file is definitions of utility functions for mysh. */

static void* my_malloc(size_t sz);
static void* my_realloc(void *ptr, size_t sz);

// my_malloc() allocates size bytes on memory, initializes it and returns its pointer.
static void*
my_malloc(size_t sz)
{
    void *p;
    p = calloc(1, sz);
    if (!p) {
        exit(3);
    }
    return p;
}

// my_realloc() reallocates size bytes to ptr amd return its pointer.
static void*
my_realloc(void *ptr, size_t sz)
{
    void *p;
    if (!ptr) {
    	return my_malloc(sz);
    }
    p = realloc(ptr, sz);
    if (!p) {
        exit(3);
    }
    return p;
}
