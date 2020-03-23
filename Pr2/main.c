#include <stdio.h>


int main(void) {
  int point;
  int reExam;
  int rePoint;


  printf("点数を入力してください。");
  scanf("%d", &point);

  if ( point >= 70 ) {
    printf("合格点です。\n");
  } else {
    printf("残念。不合格\n");
  }
}
