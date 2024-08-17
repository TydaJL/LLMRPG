
#include <stdio.h>
#include <string.h>

void a() {
    const char *str1 = " abcdefghijklmnopqrstuvwxyz ";
    const char *str2 = " $ % !  & %  :  * # ! ";
    const char *str3 = " ABC DEF ! !  G &  % $ ! # $ ! ";
    const char *str4 = " & $ & ! # ! % %  ";
    const char *str5 = " #  #  #  # !  # $ & # # ";
    const char *str6 = " % !  % ";
    const char *str7 = " % $  $  $  $ # % %  % $ ! ! % $ ";
    const char *str8 = " # $ ! #  $  $ #  #  # ! $ ";
    const char *str9 = " $  $ # % $ % !  #  $ ! $ # !!";

    printf("Length of str1: %lu\n", strlen(str1));
    printf("Length of str2: %lu\n", strlen(str2));
    printf("Length of str3: %lu\n", strlen(str3));
    printf("Length of str4: %lu\n", strlen(str4));
    printf("Length of str5: %lu\n", strlen(str5));
    printf("Length of str6: %lu\n", strlen(str6));
    printf("Length of str7: %lu\n", strlen(str7));
    printf("Length of str8: %lu\n", strlen(str8));
    printf("Length of str9: %lu\n", strlen(str9));
}

int main() {
    a();
    return 0;
}
