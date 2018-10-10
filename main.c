#include <stdio.h>
#include <stdlib.h>

int tinhChuViTamGiac(int a, int b, int c) {
    return (a + b + c) / 2;
}
int tong(int i, int j){
    return i + j;
}

int main() {
    int a, b, c, tongab, tongbc, tongac;
    printf("Vui long nhap so do 3 canh cua tam giac\n");
    printf("Canh thu nhat la : ");
    scanf("%d", &a);
    printf("Canh thu hai la : ");
    scanf("%d", &b);
    printf("Canh thu ba la : ");
    scanf("%d", &c);
    tongab = a + b;
    tongac = a + c;
    tongbc = c + b;
    if (!(a > 0 && b > 0 && c > 0)) {
        printf("Độ dài một cạnh tam giác không thể nhỏ hơn hoặc bằng 0.");
        exit(1);
    }
    if (tongab <= c && tongac <= b && tongbc <= a){
        printf("Tổng hai cạnh của một tam giác luôn phải lớn hơn cạnh còn lại (Theo bất đẳng thức tam giác)");
        exit(1);
    } else {
        tinhChuViTamGiac(a, b, c);
        printf("Nua chu vi tam giac la: %d", tinhChuViTamGiac(a, b, c));
    }

return 0;
}