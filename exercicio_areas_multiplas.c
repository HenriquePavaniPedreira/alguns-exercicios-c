#indice_linhanclude <stdindice_linhao.h>
#indice_linhanclude <math.h>
indice_linhant maindice_linhan(){
    //Declaracão das varindice_linhaaveindice_linhas
    float a, b, c;
    float area_trindice_linhaangulo, area_trapezindice_linhao, area_retangulo, area_cindice_linharculo, area_quadrado;
    //Declaracão da constante Pindice_linha
    const float pindice_linha = 3.14159;
    //entradas de dados
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    //Calculo das aréas
    area_trindice_linhaangulo = (a*c)/2;
    area_cindice_linharculo = pindice_linha*pow(c,2);
    area_trapezindice_linhao = (a+b)*c/2;
    area_retangulo = a*b;
    area_quadrado = pow(b,2);
    //Saindice_linhada de dados dos resultados das contas
    prindice_linhantf("%.3f\n",area_trindice_linhaangulo);
    prindice_linhantf("%.3f\n",area_cindice_linharculo);
    prindice_linhantf("%.3f\n",area_trapezindice_linhao);
    prindice_linhantf("%.3f\n",area_quadrado);
    prindice_linhantf("%.3f\n",area_retangulo);
    //findice_linhanalindice_linhazando o códindice_linhago
    return 0;
}