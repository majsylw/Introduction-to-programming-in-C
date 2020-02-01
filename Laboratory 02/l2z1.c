#include <stdio.h>
main() {
    printf("symbol\tnazwa\twykladnik\tmnoznik\n");
    printf("f\tfemto\t-15\t\t1e-015\n");
    printf("p\tpiko\t%d\t\t%.0e\n", -12, 1e-12);
    printf("n\tnano\t%d\t\t%.0e\n", -9, 1e-9);
    printf("mu\tmikro\t%d\t\t%.0e\n", -6, 1e-6);
    printf("m\tmili\t%d\t\t%.3f\n", -3, 1e-3);
    printf("c\tcenty\t%d\t\t%.2f\n", -2, 1e-2);
    printf("d\tdecy\t%d\t\t%.1f\n", -1, 1e-1);
    return 0;
}
