#include<stdio.h> 
#include<conio.h> 
#include<malloc.h> 
#include<string.h> 
#include<math.h> 
#include<ctype.h> 
void main(){ 
int i=0,j=0,x=0,flag=0,n; 
void *p, *add[15]; 
char c, ch, srch, b[15],d[15],g[10]; 
printf("Expression Terminated by '$' :: \n"); 
while((c=getchar())!='$'){ 
b[i]=c; 
i++; 
} 
n=i-1; 
printf("Given Expression :: "); 
i=0; 
while(i<=n){ 
printf("%c",b[i]); 
i++; 
} 
printf("\n---- SYMBOL TABLE ----\n"); 
printf("SYMBOLE \t ADDRESS \t TYPE \n"); 
while(j<=n){ 
c=b[j]; 
if(isalpha(toascii(c))) 
{ 
if(j<=n){ 
p=malloc(c); 
add[x]=p; 
d[x]=c; 
 
    printf("%c \t %d \t IDENTIFIER \n",c,p); 
    goto b; 
   } 
   else{ 
    b: 
    ch=b[j+1]; 
    if(ch=='+' || ch=='-' || ch=='*' || ch=='/' || ch=='=' ){ 
     p=malloc(c); 
     add[x]=p; 
     g[x]=ch; 
     printf("%c \t %p \t OPERATOR \n",g[x],p); 
     x++; 
    } 
   } 
  }j++; 
 } 
getch(); 
} 

            