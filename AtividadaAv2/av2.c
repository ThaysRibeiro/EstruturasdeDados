// PRIMEIRA QUESTAO
int ocorrencias(Arv* r, int k){
    if (r==NULL) return 0;
    if (r->info == k) return 1 + ocorrencias(r->dir, k);
return ocorrencias(r->dir, k) + 0;
}


// SEGUNDA QUESTAO
    LETRA C: "A" e "D"


// TERCEIRA QUESTAO
a) | 18.0 | 14.0 | 17.0 | 12.0 | 7.0 | 13.0 | 15.0 | 10.0 | 9.0 | 6.0 | Livre | Livre | Livre | Livre |

b) Primeiro: Colocar na raiz o último elemento
   Segundo: Comparar ele com seus filhos:
        a. Se estiver em ordem, a remoção termina.
        b. Se não estiver, troque com o maior filho e repita o passo 2
        até terminar ou chegar numa folha.

// QUARTA QUESTAO
int quantidade (Hash tab, int matric){
int h = hash(matric);
int q = 0;
Aluno* a = tab[h];

   if (a != NULL) {
      while (a != NULL ) {
         q++;
         a = a->prox;
      }
      return q;
   }
   else return -1;
}
