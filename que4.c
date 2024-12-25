#include<stdio.h>

int main(){
	
	int i,j,k;

    for(i=6 ;i>=1; i--){     //i=6 j=6 op=-  
    	                      
    	for(j=i ; j<=5 ;j++){ 
    	
    		printf(" ");    
    		
		}                     //i=5 j=5 k=1 op=1,i=5 k=2 op=0,i=5 k=3 op=1,i=5 k=4 op=0,i=5 k=5 op=1 op=newline
    	                      
    	for(k=1 ; k<i ;k++){ 
    		
    		if(k%2 == 1){
    			printf("1");
			}
			else{
				printf("0");
			}
    		
		}
		printf("\n");    	
	}
	
	return 0;
}
