int isprime(int num);
int printPrimesInRange(int a,int b){
    int count=0;
    for(int i=a;i<=b;i++){
        if(isprime(i)){
            printf("%d ",i);
            count++;
        }
        
    }
    if(count==0){
        printf("No prime numbers");
    }
}
int isprime(int num){
    if(num<2) return 0;
    if(num==2) return 1;
    if (num %2==0) return 0;
    for(int i=3;i*i<=num;i+=2){
        if(num%i==0) return 0;
    }
    return 1;
}