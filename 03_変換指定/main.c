#include <stdio.h>
//　includeはヘッダを読み込みます。Swiftでいうimportと同じような役割をします。


/* 出力結果を見やすくする関数　（勉強用のコードではない）
int SeparateBlock(void) {
  printf("\n");
  printf("+---------------------------------------------------------+\n");
}
*/




int main(void) {
  // %dは整数を指定します。変換指定を利用すると、後から数値を入れることができます。
  printf("符号付きの整数を挿入%d\n", -10);
  printf("絶対値、整数を挿入%u\n", 10);
  printf("実数を挿入%f\n", 3.14);
  printf("文字を挿入%c\n", 'A');
  printf("文字列を挿入%s\n", "This is string.");
  printf("代入する順番を守る。%d%s\n", 15, "This is string.");
  // 変換指定一覧
  /*
    %c	char	文字
    %s	char *	文字列
    %d	int	10進整数
    %hd	short int	半分の精度の10進整数
    %ld	long int	倍精度の10進整数
    %u	unsigned int	符号なし10進整数
    %hu	unsigned short int	符号なし半分の精度の10進整数
    %lu	unsigned long int	符号なし倍精度の10進整数
    %o	int	8進整数
    %x	int	16進整数
    %f	float	実数
    %lf	double	倍精度の実数
    %e	float	実数の指数表示
    %g	float	実数の最適表示
*/

  return 0;
}
