void caesarCipher(char mess[],int shift,char enc[]){
    for(int i=0;mess[i]!='\0';i++){
        if(mess[i]!=NULL){
        enc[i]=mess[i]+shift;
        enc[i+1]='\0';}
    }
}