#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char *argv[]) {
	
	if(argc == 2){
		printf("%s\t %s\n", argv[1], "C:");
		printf("%.2f\t %c\n", 9.0/5.0*atoi(argv[1]) + 32, 'F');
		printf("%.2f\t %c", atoi(argv[1]) + 273.15, 'K');
		printf("%c\n\n",' ');
		
		printf("%s\t %s\n", argv[1], "F:");
		printf("%.2f\t %c\n", 5.0/9.0*(atoi(argv[1]) - 32), 'C');
		printf("%.2f\t %c\n", 5.0/9.0*(atoi(argv[1]) - 32) + 273.15, 'K');	
		printf("%c\n\n",' ');
		
		printf("%s\t %s\n", argv[1], "K:");
		printf("%.2f\t %c\n", atoi(argv[1]) - 273.15, 'C');
		printf("%.2f\t %c", 9.0/5.0*(atoi(argv[1]) - 273.15) + 32, 'F');
	}
	else if(argc > 2){
	    if(!strcmp(argv[2], "F")){
			printf("%.2f\t %c\n", 5.0/9.0*(atoi(argv[1]) - 32), 'C');
			printf("%.2f\t %c\n", 5.0/9.0*(atoi(argv[1]) - 32) + 273.15, 'K');
		}
		else if(!strcmp(argv[2],"K")){
			printf("%.2f\t %c\n", atoi(argv[1]) - 273.15, 'C');
			printf("%.2f\t %c", 9.0/5.0*(atoi(argv[1]) - 273.15) + 32, 'F');
		}
		else if(!strcmp(argv[2],"C")){		
			printf("%.2f\t %c\n", 9.0/5.0*atoi(argv[1]) + 32, 'F');
			printf("%.2f\t %c", atoi(argv[1]) + 273.15, 'K');
		}
	}

		
}






