#include <stdio.h>
#include <string.h> 

int main(){
    char name[20];
    
    printf("이름을 입력하세요: ");
    
    fgets(name, 20, stdin);  //scanf 대신 fgets 사용
    // name[strlen(name) - 1] = "\0";
    // 입력 : abc + 엔터
    // index : 0 1 2 3 4
    // value : a b c \n \0

    //실무용
    if (name[strlen(name) - 1] == '\n') {
    name[strlen(name) - 1] = '\0';
}
    printf("입력한 이름: %s\n", name);
//문자열 끝에 개행문자가 있으면 널문자로 바꿈

    return 0;
}