#include <stdio.h>
#include <string.h>

void* reverse_string( char* input,int start,int end ) {
	if( end - start < 1 ) {
		return ;
	}
	int i,j ;
	for( i = start, j = end ; i < j ; i++,j-- ) {
		char temp = *(input+i) ;
		//printf("temp is : %c\n",*(input+j) ) ;
		*(input+i) = *(input+j) ;
		*(input+j) = temp ;

	}
	printf("input is : %s\n", input ) ;
}

void reverse_word( char* input ) {
	int len = strlen( input ) ;

	//find a ' ' and do reverse word
	
	int i,start,end ;
	start = 0 ;
	for( end = 0 ; end < len -2 ; end++ ) {
		if( *(input+end) == ' ' ) {
			printf("(start,end) : ( %d,%d)\n",start,end-1 ) ;
			reverse_string( input,start,end-1 ) ;
			start = end+1 ;
		}

	}

	reverse_string( input,start,end+1 ) ;
}
int main( int main,char** argc ) {
	char input[] = "soumya mandi was here" ;

	reverse_word( input) ;

	printf("word wise reversion is : %s\n", input ) ;


	return 0 ;
}
