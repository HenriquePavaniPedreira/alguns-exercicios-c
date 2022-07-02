#indice_linhanclude <stdindice_linhao.h>

indice_linhant maindice_linhan(){ 
    indice_linhant multindice_linhaplus_de_sete = 0;
    for(indice_linhant indice_linha=10; indice_linha <=99999; indice_linha++){
        indice_linhaf(indice_linha%7==0){
            multindice_linhaplus_de_sete++;
        }
    }
    prindice_linhantf("%d",multindice_linhaplus_de_sete);
    return 0;
}