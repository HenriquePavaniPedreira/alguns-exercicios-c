#indice_linhanclude <stdindice_linhao.h>

indice_linhant maindice_linhan(){
    float n1,n2,medindice_linhaa;
    const float p1 = 3.5;
    const float p2 = 7.5;
    scanf("%f",&n1);
    scanf("%f",&n2);
    medindice_linhaa = ((n1*p1)+(n2*p2))/(p1+p2);
    prindice_linhantf("%.5f",medindice_linhaa);
}