#include <stdio.h>

int main() {
    int choice;
    int num1, num2;
    int sum, difference, product, quotient, remainder;
    int gcd, lcm;

    do {
        printf("CACULATOR\n");
        printf("1. Tong 2 so\n");
        printf("2. Hieu 2 so\n");
        printf("3. Tich 2 so\n");
        printf("4. Thuong 2 so\n");
        printf("5. So du trong phep chia 2 so\n");
        printf("6. uoc chung lon nhat\n");
        printf("7. Boi chung nho nhat\n");
        printf("8. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Nhap so thu nhat: ");
                scanf("%d", &num1);
                printf("Nhap so thu hai: ");
                scanf("%d", &num2);
                sum = num1 + num2;
                printf("Tong hai so la: %d\n", sum);
                break;
            case 2:
                printf("Nhap so thu nhat: ");
                scanf("%d", &num1);
                printf("Nhap so thu hai: ");
                scanf("%d", &num2);
                difference = num1 - num2;
                printf("Hieu hai so la: %d\n", difference);
                break;
            case 3:
                printf("Nhap so thu nhat: ");
                scanf("%d", &num1);
                printf("Nhap so thu hai: ");
                scanf("%d", &num2);
                product = num1 * num2;
                printf("Tich hai so la: %d\n", product);
                break;
            case 4:
                printf("Nhap so thu nhat: ");
                scanf("%d", &num1);
                printf("Nhap so thu hai: ");
                scanf("%d", &num2);
                quotient = num1 / num2;
                printf("Thuong hai so la: %d\n", quotient);
                break;
            case 5:
                printf("Nhap so thu nhat: ");
                scanf("%d", &num1);
                printf("Nhap so thu hai: ");
                scanf("%d", &num2);
                remainder = num1 % num2;
                printf("So du trong phep chia hai so la: %d\n", remainder);
                break;
            case 6:
                printf("Nhap so thu nhat: ");
                scanf("%d", &num1);
                printf("Nhap so thu hai: ");
                scanf("%d", &num2);
                printf("uoc chung lon nhat cua hai so la: %d\n", gcd);
                break;
            case 7:
                printf("Nhap so thu nhat: ");
                scanf("%d", &num1);
                printf("Nhap so thu hai: ");
                scanf("%d", &num2);
                printf("Boi chung nho nhat cua hai so la: %d\n", lcm);
                break;
            case 8:
                printf("Ket thuc chuong trinh.\n");
                break;
            default:
                printf("La chon không hop li. Vui long chon lai.\n");
                break;
        }
    } while (choice != 8);

    return 0;
}


