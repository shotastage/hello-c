#include <stdio.h>


int main(void) {
  short int a;  // まずは、変数の型を宣言しましょう。
  a = 143; //　変数はいわば空の箱のようなものです。値を入力しましょう。
  short int b = 156; // もちろん、このように宣言と代入を同時にすることも可能です。

  printf("変数aに入力された値は%dです。\n", a);
  printf("変数bに入力された値は%dです。\n", b);

  // 変数に入力した値は後から上書きできます。
  a = 111;
  b = 789;
  printf("上書きされたaの値は%dです。\n", a);
  printf("上書きされたbの値は%dです。\n", b);

  // もちろん変数に他の変数の値を入力することも可能です。
  a = b;
  printf("変数aはbの値に上書きされました。\n結果は%dです\n", a);


  return 0;
}
