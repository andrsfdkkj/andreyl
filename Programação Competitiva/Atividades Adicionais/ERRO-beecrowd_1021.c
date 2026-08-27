{
    int ncem, ncinq, nvin, ndez,ncin, nds, mum, mcinq, mvnc, mdez, mcinc, munzin;
    double x;
    scanf("%lf", &x);
    
    
    ncem = x/100;
    x = fmod(x , 100);
    
    ncinq = x/50;
    x = fmod(x , 50);
    
    nvin = x/20;
    x = fmod(x , 20);
    
    ndez = x/10;
    x = fmod(x , 10);
    
    ncin = x/5;
    x = fmod(x , 5);
    
    nds = x/2;
    x = fmod(x , 2);
    
    mum = x;
    
    mcinq = x/0.5;
    x = fmod(x , 0.5);
    
    mvnc = x/0.25;
     x = fmod(x , 0.25);
    
    mdez = x/0.10;
    x = fmod(x , 0.10);
    
    mcinc = x/0.05;
    x = fmod(x , 0.05);
    
    munzin = x/0.01;
    
    printf("NOTAS:\n%d nota(s) de R$ 100.00\n%d nota(s) de R$ 50.00\n%d nota(s) de R$ 20.00\n%d nota(s) de R$ 10.00\n%d nota(s) de R$ 5.00\n%d nota(s) de R$ 2.00\nMOEDAS:\n%d moeda(s) de R$ 1.00\n%d moeda(s) de R$ 0.50\n%d moeda(s) de R$ 0.25\n%d moeda(s) de R$ 0.10\n%d moeda(s) de R$ 0.05\n%d moeda(s) de R$ 0.01\n", ncem, ncinq, nvin, ndez, ncin, nds, mum, mcinq, mvnc, mdez, mcinc, munzin);
    
return 0;}


//Deu certo no compilador, mas o beecrowd é vacilão e quer tirar meu mérito.
