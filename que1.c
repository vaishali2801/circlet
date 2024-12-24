#include<stdio.h>

int main(){
	
	int i,j;
	
	for(i=41 ;i<=45 ;i++){ //i=41 j=41 op=41 newline
		                   //i=42 j=41 op=41 ,i=42 j=42 op=42 
		for(j=41 ;j<=i;j++){ //i=43 j=41 op=41 ,i=43 j=42 op=42, i=43 j=43 op=43
		                    // i=44 j=41 op=41,i=44 j=42 op=42,i=44 j=43 op=43,i=44 j=44 op=44
			printf(" %d ",j); //i=45 j=41 op=41,i=45 j=42 op=42,i=45 j=43 op=43,i=45 j=44 op=44,i=45 j=45 op=45
			
		}
		
		printf("\n");
		
    }
	printf("----------\n");
	
	
	return 0;
}
