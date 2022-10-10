void substring(char string1[30], char string2[30], int inicio, int fim){
    int i,j=0;
    for(i=inicio;i<=fim;i++){
        string2[j] = string1[i];
        j++;
    }
    string2[j]='\0';
}
