int caesarCipher(char mess[],int shift,char enc[]){
    int i;
    for( i=0;mess[i]!='\0';i++){
        enc[i]=mess[i]+shift;
    }
    enc[i]='\0';
}