#include<stdio.h>
#include <string.h>

int* stringTObinary(){
    char str[100];
    int char_number[100],i=0,j=0,k=0;
    int binary_number[200];
    
    printf("Message : ");
    scanf("%10[0-9a-zA-Z ]",&str);
    printf("The string is : %s\n", str);
    
    while(str[i]!='\0'){
        char_number[i] = (int)str[i];
        i++;
    }
    
    for(j=0; j<i; j++){
        while(char_number[j]!=0){
            binary_number[k++] = char_number[j] % 2;
            char_number[j] = char_number[j] >> 1;
        }
    }
    
    printf("binary number of the string : ");
    
    for(int a=j-1; a>0; a--){printf("%d",binary_number[a]);}
    
    return binary_number;
}
