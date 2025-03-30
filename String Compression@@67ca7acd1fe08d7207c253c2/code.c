int compressString(char str[],char comp[]){
    int count=1;
    int index=0;
    for(int i=0;str[i]!='\0';i++){
          if(str[i]==str[i+1]){
            count++;}
            else{
                comp[index++]=str[i];
                if(count>1){
                    comp[index++]=count+'0';
            }
          count=1; }
          comp[index]='\0';
}}