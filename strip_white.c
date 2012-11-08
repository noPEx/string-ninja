#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* strip_white( char* str ) {
	int len = strlen( str ) ;
	char* res = ( char* )malloc( sizeof( char ) * len ) ;
	int res_index = 0;
	//remove first bunch
	int i = 0 ;
	while( *(str+i) == ' ' ){
		i++ ;
	}

	//Now i has the first non-whitespace character
	for( ; i < len ;i++ ){
		if( *(str+i) != ' ' ){
			res[ res_index++ ] = *(str+i) ;
		}
		else {
			while( *(str+i) == ' ' &&  i < len ){
				i++ ;
			}
			if( i == len ){
				return res ;
			}
			else {
				i-- ;
				res[ res_index++ ] = ' ' ;
			}
		}
	}
	return res ;


}

int main( int main,char** argc ) {
	
	char input[] = "my      name   is soumya mandi                " ;

	char* res = strip_white( input ) ;
	printf("res is :%s<END>\n", res ) ;




	return 0 ;
}
