#include <stdio.h>

int main() {
    int num1, num2, num3;
    int choice;
    float average;
    int max, min;

    do {
        printf("Nhap vao 3 so nguyen:\n");
        scanf("%d %d %d", &num1, &num2, &num3);

        printf("CACULATOR\n");
        printf("1. Tong 3 so nguyen\n");
        printf("2. Trung binh cong cua 3 so nguyen\n");
        printf("3. So lon nhat, nho nhat trong 3 so\n");
        printf("4. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Tong 3 so nguyen: %d\n", num1 + num2 + num3);
                break;
            case 2:
                average = (float)(num1 + num2 + num3) / 3;
                printf("Trung binh cong cua 3 so nguyen: %.2f\n", average);
                break;
            case 3:
                max = num1;
                min = num1;
                if (num2 > max) {
                    max = num2;
                }
                if (num3 > max) {
                    max = num3;
                }
                if (num2 < min) {
                    min = num2;
                }
                if (num3 < min) {
                    min = num3;
                }
                printf("So lon nhat trong 3 so: %d\n", max);
                printf("So nho nhat trong 3 so: %d\n", min);
                break;
            case 4:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le.\n");
                break;
        }
    } while (choice != 4);

    return 0;
}
