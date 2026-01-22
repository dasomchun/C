#include <stdio.h>
#include <string.h>

// 평균이상인 값의 개수 정답
int main(){
    char str[101];
    char ch;
    int i;
    int count = 0; //문자 개수 저장     
    int len;

    printf("전체문자열을 입력하세요: ");
    // 문자열 입력받기
    fgets(str, 101, stdin);
    len = strlen(str);
    if(len > 0 && str[len - 1] == '\n'){
        str[len - 1] = '\0';
        len--;
    }
    // Data Structure
    // t 
    printf("\n");
    printf("찾을 문자를 입력하세요: ");
    // 찾을 문자 입력하기
    scanf(" %c", &ch); // 공백문자 주의
    // 앞의 공백은 "공백문자들을 모두 건너 뛰라"
    // (스페이스, 엔터 \n, 탭 \t 등) 

    // 문자열(Data Structure)에서 특정 문자(t) 개수 세기
    for(i = 0; i < len; i++){
        if(str[i] == ch){
            count++;
        }
    }
    printf("%c가 나타나는 횟수: %d\n", ch, count);

    return 0;
}