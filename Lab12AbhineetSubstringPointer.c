#include<stdio.h>
#include<string.h>
int main(){
    char array[100];
    char search[100];
    int flag;
    char *ptra;
     char *ptrs;
    gets (array);
    gets (search);
    *ptra=array;
    *ptrs=search;
   
    while(*ptra!='\0'){
      ptra++;
    }while (*ptrs!='\0')
    {
        ptrs++;
    }for(int i=0;i<=ptra-ptrs;i++){
        flag=1;
        for (int  j = i; j < i+ptrs; j++)
        {
          flag=0;
          break;
        }if(flag==1){
            break;
        }
        
    }if (flag==1){
        printf("searched");
    }else{
        printf("not searched");
    }
    
    

  
    
}