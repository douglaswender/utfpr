#include <stdio.h>
#include <string.h>

void reverse(char word[], int len)
{
	int i;
    char temp;
     
    for (i=0;i<len/2;i++){
    	temp=word[i];
        word[i]=word[len-i-1];
        word[len-i-1]=temp;
    }
}

int main(){
    int n,i,j,len;
    char linha[1001];
    
    scanf("%d",&n);
    for(i = 0; i < n; i++){
        scanf(" %[^\n]s", &linha);
        for(j = 0; linha[j] != '\0'; j++){
        	if((linha[j] >= 65 && linha[j] <= 90) ||  (linha[j] >= 97 && linha[j] <= 122)){
            	linha[j] += 3;
			}
		}
		len = strlen(linha);
        reverse(linha,len);
        	
        for(j = len/2; linha[j] != '\0'; j++){
         	linha[j] -= 1;
		}
			
        printf("%s\n",linha); 
		         
    } 
    return 0;
}
