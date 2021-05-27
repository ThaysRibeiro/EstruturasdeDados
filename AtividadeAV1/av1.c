//PRIMEIRA QUESTAO
//A)

int igual (Arv* a, Arv* b){
  if(a != NULL && b!= NULL){
    if(a->info == b->info){
      return 1 && igual(a->esq, b->esq) && igual(a->dir, b->dir);
    }
    
  } else if (a == NULL && b == NULL){
  return 1;
  }
  return 0;
}



//SEGUNDA QUESTAO
//A)

int busca_precedente (Arv *a){

  if (a->esq == NULL) return -1;

  Arv* prox = a->esq;

  if (prox->dir == NULL) return prox->info;

  while (prox->dir != NULL){
    prox = prox->dir;
  }
  return prox->info;
}
