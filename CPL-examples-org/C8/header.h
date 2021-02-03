typedef long Align;  /* for alignment to long boundary  \
                        long is an arbitrary choice     \
                        so "Align is now an equivalence \
                        to a long                       */

union header {       /* block header: this union defines a block of memory      \
                        which will be allocated. the union contains a struct    \
                        which is made of a union "recursively. So a chain of    \
                        blocks is built, haha, it's a blockchain!               */
    struct {
        union header *ptr; /* next block if on free list */
        unsigned size;     /* size of this block */
    } s;
    Align x;         /* force alignment of blocks. Here: the size of a long */
};

typedef union header Header; /* so this union called header is now the definition for Header */
