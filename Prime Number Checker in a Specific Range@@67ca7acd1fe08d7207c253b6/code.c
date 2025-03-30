int printPrimesInRange(int a,int b){
    for(int i=a;a<=b;i++){
        if(isprime(num)){
            return num ;
        }
        
    }
}
isprime(int num){
    if(num<2) return 0;
    if(num==2) return 1;
    if (num %2==0) return 0;
    fot(int i=3;i*i<=num;i+=2){
        if(num%i==0) return 0;
    }
    return 1;
}