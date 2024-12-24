#include<stdio.h>

int main(){
	
	int i,j,k;

    
	for (i=1; i<=5; i++) {    // i=1 j=1 op=-- ,i=1 j=2 op=--,i=1 j=3 op=--,i=1 j=4 op=--  
	                           //i=2 j=1 op=-- ,i=2 j=2 op=--,i=2 j=3 op=--
        for (j=1; j<=5-i; j++) { //i=3 j=1 op=-- ,i=3 j=2 op=--
            printf("  ");       //i=4 j=1 op=-- 
        }                       
        
        for (j=6-i ; j<=5; j++) { // i=1 j=5 op=5 newline
            printf("%d ", j);    //i=2 j=4 op=4 , i=2 j=5 op=5 newline
        }                        //i=3 j=3 op=3 , i=3 j=4 op=4 ,i=3 j=5 op=5 newline
                                 //i=4 j=2 op=2 , i=4 j=3 op=3 ,i=4 j=4 op=4 ,i=4 j=5 op=5 newline
        printf("\n");            //i=5 j=1 op=1 , i=5 j=2 op=2 ,i=5 j=3 op=3,i=5 j=4 op=4,i=5 j=5 op=5 newline
	}	
   
	
	return 0;
}
