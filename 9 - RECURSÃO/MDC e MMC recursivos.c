#include <stdio.h>

int calc_mdc_mmc(int x, int y){
    if (x % y == 0)
        return y;
    else
        return calc_mdc_mmc(y, x % y);
}

int main(void) {
  int n, m, mdc = 0, mmc = 0;
  scanf("%d %d", &n, &m);  
  printf("MDC = %d, MMC = %d", calc_mdc_mmc(n, m), (n * m)/calc_mdc_mmc(n, m));
  return 0;
}

