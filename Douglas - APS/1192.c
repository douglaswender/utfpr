#include<stdio.h>
#include<ctype.h>
int main()
{
      char c;
      int i,test,a,b;
      while(scanf("%d",&test)==1){
      	
            for(i=1;i<=test;i++){
            	
                scanf("%d%c%d",&a,&c,&b);
                
            	if(a>=0 && a<=9 && b>=0 && b<=9){
            		
               		if(a==b){
               			printf("%d\n",a*b);
					   }
                	else if( islower(c) ){
                		printf("%d\n",a+b);
					}
                    else if( isupper(c) ){
                    	printf("%d\n",b-a);
					}
           }
      }
}
return 0;
}
