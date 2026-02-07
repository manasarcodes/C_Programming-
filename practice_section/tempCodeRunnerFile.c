int n;
    scanf("%d",&n);
    if(10000>=n && n<=99999 ){
        int sum = 0;

        for(;n>0; n = n / 10){
        int lastdigit = n%10;
        sum = sum + lastdigit;
      }
      printf("%d",sum);
    }
    
    
return 0;
}