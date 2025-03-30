int printPrimeInRange(int a,int b){
    for(int i=a;a<=b;i++){
        for(int j=2;j*j<=i;i+=2){
            if(j%2==0){
                return 0;
            }
            else{
                printf("%d ",j);
            }
        }
    }
}