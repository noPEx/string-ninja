#include <stdio.h>

int main( int argc,char** argv ) {
	char* pmessage = "hello world" ;
	printf("pmessage is : %s\n", pmessage ) ;
	pmessage++;
	printf("pmessage is : %s\n", pmessage ) ;
	*pmessage = 'd' ;
	printf("pmessage is : %s\n", pmessage ) ;

}
