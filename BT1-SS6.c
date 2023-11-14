#include <stdio.h>

int main(){
    int n;
    printf("Nhap so n: ");
    scanf("%d", &n);
    int i;
	for(i = 1; i <= 9; i++){
        printf("%d x %d = %d\n", n, i, n * i);
    }
    return 0;
}
