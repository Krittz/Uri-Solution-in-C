#include <stdio.h>
#include <ctype.h>

char autentication(char caracter);

void main(){

        unsigned short cases, i;
        
        char quant_digitos, text[1000];

scanf("%hu", &cases);

                    while(cases--){

                    scanf(" %[^\n]", text);
                        
                        i = 0;
                        quant_digitos = 0;

            while(text[i]){

                if(isalpha(text[i]))
                        if(quant_digitos < 12){

                                printf("%hhd", autentication(text[i]));
                                quant_digitos++;
                    }

            i++;
            }
 printf("\n");
    }

}
//*********************FUNÇÃO COVERTENDO**************************
char autentication(char caracter){

    switch (caracter)
    {
        case 'G': case 'Q': case 'a': case 'k': case 'u':
			return 0;
//--------------------------------------------------------------

		case 'I': case 'S': case 'b': case 'l': case 'v':
			return 1;
//--------------------------------------------------------------

		case 'E': case 'O': case 'Y': case 'c': case 'm': case 'w':
			return 2;
//--------------------------------------------------------------

		case 'F': case 'P': case 'Z': case 'd': case 'n': case 'x':
			return 3;
//--------------------------------------------------------------

		case 'J': case 'T': case 'e': case 'o': case 'y':
			return 4;
//--------------------------------------------------------------

		case 'D': case 'N': case 'X': case 'f': case 'p': case 'z':
			return 5;
//--------------------------------------------------------------

		case 'A': case 'K': case 'U': case 'g': case 'q':
			return 6;
//--------------------------------------------------------------

		case 'C': case 'M': case 'W': case 'h': case 'r':
			return 7;
//--------------------------------------------------------------

		case 'B': case 'L': case 'V': case 'i': case 's':
			return 8;
//--------------------------------------------------------------

		case 'H': case 'R': case 'j': case 't':
			return 9;
    
};
}
