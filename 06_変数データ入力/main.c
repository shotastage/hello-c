#include <stdio.h>

int main(void) {

  long long int a;
  long long int b;
  long long int c;


  printf("二つの数(整数限定)の掛け算をするしょうもない電卓\nVer 0.0.1\n");
  printf("整数1を入力してください。\n");
    scanf("%lld", &a );
  printf("整数2を入力してください。\n");
    scanf("%lld", &b );
    c = a*b;
  printf("%lldx%lld=%lldです。\n", a, b, c);


  return 0;
}
