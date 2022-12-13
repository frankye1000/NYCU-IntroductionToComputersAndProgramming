#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LEN 1000

struct ListNode {
    int val;
    struct ListNode *next;
 };
typedef struct ListNode Node;

struct ListNode* printList(struct ListNode* list) {
    struct ListNode *p = list;

    while(p) {
        printf("%d ",p->val);
        p = p->next;
    }

    printf("\n");
}

struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    Node* L1=list1;
    Node* L2=list2;

    int i=0;
    Node *first,*current,*previous;
    while(L1 && L2){
        // 創新node
        current = (Node *)malloc(sizeof(Node));
        
        // 比大小
        if(L1->val > L2->val){
            current->val=L2->val;
            L2 = L2->next;
        }else{
            current->val=L1->val;
            L1 = L1->next;
        }

        if(i==0){  // 第1個node
            first=current;
        }else{
            previous->next=current;
        }
        current->next=NULL;
        previous=current; // !!!!!!
        i++;
    }
    // printf("first=======");
    // printList(first);
        
    if(L2)
    {
        //printf("OK2\n");
        // 清空L2
        while(L2)
        {
            // 創新node
            current = (Node *)malloc(sizeof(Node));
            current->val=L2->val;
            if(i==0)
            {  // 第1個node
                first=current;
            }
            else
            {
                previous->next=current;
            }
            current->next=NULL;
            previous=current; // !!!!!!
            i++;
            L2=L2->next;
        }
    }

    if(L1)
    {
        //printf("OK1\n");
        //清空L1
        while(L1)
        {
            // 創新node
            current = (Node *)malloc(sizeof(Node));
            current->val=L1->val;
            if(i==0)
            {  // 第1個node
                first=current;
            }else
            {
                previous->next=current;
            }
            current->next=NULL;
            previous=current; // !!!!!!
            i++;
            L1=L1->next;
        }
    }
    // printf("first=======");
    // printList(first);
    return first;
}



void read_input(char *arr)
{
    int ch,i=0;
    while((ch = getchar())!='\n'){
        *(arr+i) = ch;
        i++;
    }
    *(arr+i)='\0';
    
}
void freeList(Node *first){
 Node *current,*tmp;
 current=first;
 while(current!=NULL){
  tmp=current;
  current=current->next;
  free(tmp);
 }
}


int main(){
    char arr1[MAX_LEN] = {'\0'};
    char arr2[MAX_LEN] = {'\0'};
    read_input(arr1);
    read_input(arr2);
    //printf("arr1=%s\n",arr1);
    //printf("arr2=%s\n",arr2);
    const char s[2] = " ";
    char *token;
    
    int i=0,j=0;

    Node *first1, *current1, *previous1;
    /* 获取第一个子字符串 */
    token = strtok(arr1, s);
    /* 继续获取其他的子字符串 */
    while( token != NULL ) {
        // // 創一個新node
        current1 = (Node *)malloc(sizeof(Node));
        current1->val=atoi(token);
        if(i==0){  // 第1個node
            first1=current1;
        }else{
            previous1->next=current1;
        }
        current1->next=NULL;
        previous1=current1; // !!!!!!
        i++;
        token = strtok(NULL, s);
    }
    //printList(first1);



    Node *first2, *current2, *previous2;
    /* 获取第一个子字符串 */
    token = strtok(arr2, s);
    /* 继续获取其他的子字符串 */
    while( token != NULL ) {
        // // 創一個新node
        current2 = (Node *)malloc(sizeof(Node));
        current2->val=atoi(token);
        if(j==0){  // 第1個node
            first2=current2;
        }else{
            previous2->next=current2;
        }
        current2->next=NULL;
        previous2=current2; // !!!!!!
        j++;
        token = strtok(NULL, s);
    }
    //printList(first2);
    
    // 比較
    printList(mergeTwoLists(first1,first2));


    return 0;
}