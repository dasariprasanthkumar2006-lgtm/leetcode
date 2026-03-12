signed int countPrimes(int n) {
    if(n<=2) return 0;

    int prime[n];
    int i,j,s=0;

    for(i=0;i<n;i++)
        prime[i]=1;

    prime[0]=0;
    prime[1]=0;

    for(i=2;i*i< n;i++){
        if(prime[i] == 1){
            for(j=i*i;j<n ;j+=i)
                prime[j]=0;
        }
    }
    for(i=2;i<n;i++){
        if(prime[i]==1)
            s++;
    }
    return s;
}