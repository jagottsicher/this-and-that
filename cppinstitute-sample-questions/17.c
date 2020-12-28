#include <stdio.h>

int main(void) {
    FILE *f;
    int i;
    f = fopen("f","wb");

    // writes size of 2 bytes 1 element, the position indicator is raise 2x 1 = 2 (so, it is two now)
    fwrite(f,2,1,f);
    fclose(f);

    // goto end of File and get position, 2 bytes in, so 2
    f = fopen("f","rb");
    fseek(f,0,SEEK_END);
    i = ftell(f);

    fclose(f);
    printf("%d",i);
return 0;
}
