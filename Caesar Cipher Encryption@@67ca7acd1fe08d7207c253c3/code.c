void caesarCipher(char *mess[],int shift,char *enc[]){
   int i;
    for(i=0;mess[i]!='\0';i++){
        char ch=mess[i];
        if(isalpha(ch)){
            char base=isupper(ch)?'A':'a';
            enc[i]=(ch-base+shift)%26+base;
        }
        else{
            enc[i]=ch;
        }
        enc[i]='\0';
    }
}