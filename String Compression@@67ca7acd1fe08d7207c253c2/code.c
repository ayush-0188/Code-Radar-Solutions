int compressString(int str[],int comp[]){
    int count=1;
    int index=0;
    for(int i=1;i<5;i++){
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