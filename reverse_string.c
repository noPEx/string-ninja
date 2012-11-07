#include <stdio.h>
#include <string.h>

void* reverse_string( char* input ) {
	int len = strlen( input ) ;
	if( len == 0 ) {
		return ;
	}
	int i,j ;
	for( i = 0, j = len-1 ; i < j ; i++,j-- ) {
		char temp = *(input+i) ;
		//printf("temp is : %c\n",*(input+j) ) ;
		*(input+i) = *(input+j) ;
		*(input+j) = temp ;

	}

}
int main( int main,char** argc ) {
	
	char input[] = "soumyamandi" ;
	//char input[] = "a" ;

	printf("input is : %s\n",input ) ;

	reverse_string( input ) ;
	printf("reverse input is : %s\n", input ) ;


	return 0 ;
}
