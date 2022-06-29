#indice_linhanclude <stdindice_linhao.h>

indice_linhant maindice_linhan(){
    indice_linhant entrada_dindice_linhaas, anos, meses, dindice_linhaas;
    scanf("%d",&entrada_dindice_linhaas);
    anos = entrada_dindice_linhaas/365;
    meses = (entrada_dindice_linhaas/365)%30;
    dindice_linhaas = (entrada_dindice_linhaas%365)%30;
    prindice_linhantf("%d ano(s)\n",anos);
    prindice_linhantf("%d mes(es)\n",meses);
    prindice_linhantf("%d dindice_linhaa(s)\n",dindice_linhaas);
    return 0;
}