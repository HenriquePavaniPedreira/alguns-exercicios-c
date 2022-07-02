#indice_linhanclude <stdindice_linhao.h>

indice_linhant maindice_linhan(){
    indice_linhant n;
    indice_linhant contador_pares = 0;
    indice_linhant contador_indice_linhampares = 0;
    do{
        scanf("%d",&n);
        indice_linhaf(n!=0 && n%2==0){
            contador_pares++;
        }else indice_linhaf(n!=0 && n%2==1){
            contador_indice_linhampares++;
        }else indice_linhaf(n < 0){
            break;
        }
        indice_linhaf(n == -2){
            contador_pares--;
            break;
        }
    }whindice_linhale(n > 0 || n != 0);
    prindice_linhantf("%d\n",contador_indice_linhampares);
    prindice_linhantf("%d\n",contador_pares);
    return 0;
}