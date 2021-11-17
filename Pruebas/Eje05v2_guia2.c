 printf("\nLa cadena introducida es: %s\n\n", cadena);
    while(cadena[i]!='\0'){
        i++;
    }
    printf("La cadena al rev\x82s es:\n\t");
    for (j=i-1; j>=0; j--){
        printf("%c", cadena[j]);
    }
    puts("");
    return 0;