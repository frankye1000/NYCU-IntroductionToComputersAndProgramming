#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LEN 10000

// read string function
void read_input(char *arr)
{
    int ch,i=0;
    while((ch = getchar())!=EOF)
    {
        *(arr+i) = ch;
        i++;
    }
    *(arr+i)='\0';
}



char *str_replace (char *source, char *find,  char *rep){  
   // old pattern的長度  
   int find_L=strlen(find);  
   // new pattern的長度  
   int rep_L=strlen(rep);  
   // 字串的長度  
   int length=strlen(source)+1;  
   // 定位偏移量  
   int gap=0;  
   // 建立字串，並複製文字  
   char *result = (char*)malloc(sizeof(char) * length);  
   strcpy(result, source);      
   // 尚未被取代的字串  
   char *former=source;  
   // old pattern出現的起始位址指標  
   char *location= strstr(former, find);  
   // 漸進搜尋欲替換的文字  
   while(location!=NULL){  
       // 增加定位偏移量  
       gap+=(location - former);  
       // 將結束符號定在搜尋到的位址上  
       result[gap]='\0';  
       // 計算新的長度  
       length+=(rep_L-find_L);  
       // 變更記憶體空間  
       result = (char*)realloc(result, length * sizeof(char));  
       // 替換的文字串接在結果後面  
       strcat(result, rep);  
       // 更新定位偏移量  
       gap+=rep_L;  
       // 更新尚未被取代的字串的位址  
       former=location+find_L;  
       // 將尚未被取代的文字串接在結果後面  
       strcat(result, former);  
       // old pattern出現的起始位址指標  
       location= strstr(former, find);  
   }      
   return result;  
}  

int main(int argc, char *argv[])
{

    // 1. 創建 replace 字典 比較字串!!
    char* replace_dict[MAX_LEN][2]; 
    int N=0;
    // 2. 創建切割好的字串array
    char* tokenArray[MAX_LEN];
    int t=0;
    
    // 讀取字串
    char arr1[MAX_LEN] = {'\0'};
    read_input(arr1);

    // 3. use blank(" ") and "\n" to splite string
    const char s[3] = " \n";
    char *token;
    token = strtok(arr1, s);
    while( token != NULL ){
        if (strcmp(token,"replace")==0){
            // 放進字典
            token = strtok(NULL, s);   // old pattern
            replace_dict[N][0]=token;
            token = strtok(NULL, s);   // new pattern 
            replace_dict[N][1]=token;
            N++;
        }
        // 放進token array
        tokenArray[t] = token;
        t++;
        token = strtok(NULL, s);
    }
    
    // 4. 取代字串!!
    for(int j=0;j<N;j++){
        for(int i=0;i<t-N;i++){
            char* str2 = str_replace(tokenArray[i], replace_dict[j][0], replace_dict[j][1]);
            tokenArray[i] = str2;
        }
    }
      
    for(int i=0;i<t-N;i++){
        printf("%s ",tokenArray[i]);
    }
    
    return 0;
}