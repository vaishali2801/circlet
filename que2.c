#include<stdio.h>

int main(){
	

    int rows = 4;   
    int num = 11;
    int i,j;
    
    for (i=1; i<=rows; i++) {  //i=1 j=1 op=11 newline
                                      //i=2 j=1 op=12,i=2 j=2 op=13 newline
        for (j=1; j<=i; j++) {       //i=3 j=1 op=14,i=3 j=2 op=15,i=3 j=3 op=16
            printf(" %d ",num);     //i=4 j=1 op=17,i=4 j=2 op=18,i=4 j=3 op=19,i=4 j=4 op=20
            num++;
        }
        printf("\n"); 
    }
	
	
	return 0;
}
