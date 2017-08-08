/* Contador de palavras
 *
 * Este programa recebera uma serie de caracteres representando palavras em sua
 * entrada. Ao receber um caractere fim de linha ('\n'), deve imprimir na tela o
 * numero de palavras separadas que recebeu e, apos, encerrar.
 */

#include <stdio.h>
#include <ctype.h>

int main() {

  char c = 0, anterior = 0, anterior2 = 0;
  int num = 0;

    while (c != '\n') {
      anterior2 = anterior;
      anterior = c;

      scanf("%c", &c);

      if(c == ' ' || c == '.' || c == ',' || c == '!' || c == '?' || c == '-' || c == ';'){
        if(anterior != ' ' && anterior != '.' && anterior != ',' && anterior != '!' && anterior != '?' && anterior != '-' && anterior != ';' && anterior != '@' && anterior != '#' && anterior != '$' && anterior != '%' && anterior != '¨' && anterior != '&' && anterior != '*'){
            num++;
        }
      }

      if((c >= '0' && c <= '9') && (anterior == '.' || anterior == ',') && (anterior2 >= '0' && anterior2 <= '9')){
        num--;
      }
    }

    if (isalnum(anterior)){
        num++;
    }

  printf("%d\n", num);

  return 0;
}

