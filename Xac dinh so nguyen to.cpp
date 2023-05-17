#include <stdio.h>
#include <math.h>
bool songuyento(int num){
    if(num < 2) return false;
    if(num == 2) return true;
    if(num % 2 == 0) return false;
    int limit = sqrt(num);
    for(int i = 3; i <= limit; i += 2) {
        if(num % i == 0) return false;
    }
    return true;
}
int main() {
	int n;
	printf("nhap so can kiem tra: ");scanf("%d", &n);
	printf("%d %s so nguyen to", n, songuyento(n) ? "la" : "khong phai la");
	return 0;
	}

