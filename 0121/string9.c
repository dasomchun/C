#include <stdio.h>
#include <string.h> 
// 문자열 비교
int main(){
   char str[] = "Hello World";
    char search = 'o';
    int i, found = 0;
    for(i = 0; i < strlen(str); i++){
        if(str[i] == search){
            printf("%c 를 %d의 위치에서 찾았습니다.\n", search, i);
            found = 1;
        }
    }
    if(!found){
        printf("%c 를 찾지 못했습니다.\n", search);
    }

    return 0;
}