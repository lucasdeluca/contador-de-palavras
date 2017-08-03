/* Contador de palavras
 *
 * Este programa recebera uma serie de caracteres representando palavras em sua
 * entrada. Ao receber um caractere fim de linha ('\n'), deve imprimir na tela o
 * numero de palavras separadas que recebeu e, apos, encerrar.
 */

#include <stdio.h>

int main() {

  char c;
  int num;
  
  num = 0;
  c = 1;

  while (c != '\n') {
    scanf("%c", &c);

    if (c == ' '){
       num++;
    }
  }

  num = num++;

  printf("%d", num);
  return 0;
}
