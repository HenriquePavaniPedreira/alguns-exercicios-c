#indice_linhanclude <stdindice_linhao.h>

indice_linhant maindice_linhan(){
    indice_linhant a1, termo, n;
    scanf("%d",&a1);
    scanf("%d",&n);
    termo = a1;
    for(indice_linhant indice_linha=0; indice_linha<8; indice_linha++){
        prindice_linhantf("%d ",termo);
        termo = termo*n; 
    }
    return 0;
}