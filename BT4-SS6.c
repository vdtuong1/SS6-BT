#include <stdio.h>

int main() {
    int n, choice, i, sum = 0;
    printf("Nhap vao mot so nguyen n: ");
    scanf("%d", &n);

    do {
        printf("\nMENU:\n");
        printf("1. In day so chia het cho 2 va giam dan (n >= so >= 2)\n");
        printf("2. In cac so nho hon n va tinh tong\n");
        printf("3. In ra cac uoc so chan cua n\n");
        printf("4. In ra cac uoc so le va so luong cac uoc le cua n\n");
        printf("5. In ra uoc so le lon nhat cua n\n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Day so chia het cho 2 va giam dan: ");
                for (i = n; i >= 2; i -= 2) {
                    printf("%d ", i);
                }
                break;
            case 2:
                printf("Cac so nho hon %d: ", n);
                for (i = 1; i < n; i++) {
                    printf("%d ", i);
                    sum += i;
                }
                printf("\nTong cac so nho hon %d: %d", n, sum);
                break;
            case 3:
                printf("Cac uoc so chan cua %d: ", n);
                for (i = 1; i <= n; i++) {
                    if (n % i == 0 && i % 2 == 0) {
                        printf("%d ", i);
                    }
                }
                break;
            case 4:
                printf("Cac uoc so le cua %d: ", n);
                int count = 0;
                for (i = 1; i <= n; i++) {
                    if (n % i == 0 && i % 2 != 0) {
                        printf("%d ", i);
                        count++;
                    }
                }
                printf("\nSo luong cac uoc so le cua %d: %d", n, count);
                break;
            case 5:
                printf("Uoc so le lon nhat cua %d: ", n);
                int maxOddDivisor = 1;
                for (i = 1; i <= n; i++) {
                    if (n % i == 0 && i % 2 != 0 && i > maxOddDivisor) {
                        maxOddDivisor = i;
                    }
                }
                printf("%d", maxOddDivisor);
                break;
            case 6:
                printf("Thoat chuong trinh!");
                break;
            default:
                printf("Lua chon khong hop le!");
        }
    } while (choice != 6);

    return 0;
}
