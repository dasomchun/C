#include <stdio.h>
#include <string.h> 
// 문자열 비교
int main(){
   char str1[] = "Hello";
   char str2[] = "Hello";
   char str3[] = "World";

    if(strcmp(str1, str2) == 0){
        printf("str1과 str2는 같습니다.\n");
    }
    if (strcmp(str1,str3) !=0){
        printf("str1과 str3는 다릅니다.\n");
    }
//    strcmp() 함수는 두 문자열이 같으면 0을 반환하고, 다르면 0이 아닌 값을 반환합니다.    
    return 0;
}