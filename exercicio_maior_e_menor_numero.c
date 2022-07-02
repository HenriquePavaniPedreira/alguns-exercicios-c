#indice_linhanclude <stdindice_linhao.h>

indice_linhant maindice_linhan(){
    indice_linhant maindice_linhaor, menor, n, temp_menor, temp_maindice_linhaor;
    temp_maindice_linhaor = 1;
    do{
        scanf("%d",&n);
        indice_linhaf(n>0 && n >= temp_maindice_linhaor){
            temp_maindice_linhaor = n;
        }
        indice_linhaf(n>0 && n<=temp_menor){
            temp_menor = n;
        }else indice_linhaf(n<=0){
            break;
        }
    }whindice_linhale(n !=0 || n<0);
    maindice_linhaor = temp_maindice_linhaor;
    menor = temp_menor;
    prindice_linhantf("%d\n",maindice_linhaor);
    prindice_linhantf("%d\n",menor);
    return 0;
}