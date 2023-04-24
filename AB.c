#include <stdio.h>
struct 
{
    int valor;
    struct No *esquerda;
    struct No *direita;
};
typedef struct No;
void criarArvore(No **Raiz)
{
    *Raiz = NULL;
}
/// @brief 
/// @param Raiz 
/// @param valor2 
void adcionar(No **Raiz, int valor2)
{
	if (*Raiz == NULL)
	{
	      *Raiz=(No *)malloc(sizeof (No));
	      (*Raiz)->esquerda=NULL;
	      (*Raiz)->direita=NULL;
	      (*Raiz)->valor=valor2;
	}
	else 
        {
		if (valor2 < ((*Raiz)->valor))
		{
			adcionar(&((*Raiz)->esquerda), valor);
		};
		else
		{
			adcionar(&((*Raiz)->direita), valor);
		};
	}
    void inserer(no **Raiz,int valor){
        if (*Raiz == NULL)
	{
	      *Raiz=(No *)malloc(sizeof (No));
	      (*Raiz)->esquerda=NULL;
	      (*Raiz)->direita=NULL;
	      (*Raiz)->valor=valor2;
	}
	else 
        {
		if (valor2 < ((*Raiz)->valor))
		{
			inserer(&((*Raiz)->esquerda), valor);
		};
		else
		{
			inserer(&((*Raiz)->direita), valor);
		};

    }
}

Remocao

No *MaiorDireita(No);
{
    if((*no)->direita != NULL)
    {
       return MaiorDireita(&(*no)->direita);
    };
    else
    {
       No *aux = *no;
       
       if((*no)->esquerda != NULL) // se nao houver essa verificacao, esse nó vai perder todos os seus filhos da esquerda!
        {
          *no = (*no)->esquerda;
        };
        else
        {
            *no = NULL;
            return aux;
        };
    };
        
}

No *MenorEsquerda(No **no)
{
    if((*no)->esquerda != NULL)
    {
       return MenorEsquerda(&(*no)->esquerda);
    }
    else
    {
        No *aux = *no; 
        if((*no)->direita != NULL) // se nao houver essa verificacao, esse nó vai perder todos os seus filhos da direita!
        {
          *no = (*no)->direita;
        }
        else
        {
          *no = NULL;
        }
        return aux;
    }
}

void remover(No **Raiz, int numero){
    if(*pRaiz == NULL){   // esta verificacao serve para caso o numero nao exista na arvore.
       printf("valor nao existe na arvore!");
       getch();
       return;
    }
    if(numero < (*Raiz)->valor)
       remover(&(*Raiz)->esquerda, valor);
    else 
       if(valor > (*Raiz)->valor)
          remover(&(*Raiz)->direita, valor);
       else{    // se nao eh menor nem maior, logo, eh o numero que estou procurando! :)
          No *pAux = *pRaiz;     // quem programar no Embarcadero vai ter que declarar o pAux no inicio do void! :[
          if (((*pRaiz)->esquerda == NULL) && ((*pRaiz)->direita == NULL)){         // se nao houver filhos...
                free(pAux);
                (*pRaiz) = NULL; 
               }
          else{     // so tem o filho da direita
             if ((*Raiz)->esquerda == NULL){
                (*Raiz) = (*Raiz)->direita;
                pAux->direita = NULL;
                free(pAux); pAux = NULL;
                }
             else{            //so tem filho da esquerda
                if ((*Raiz)->direita == NULL){
                    (*Raiz) = (*Raiz)->esquerda;
                    pAux->esquerda = NULL;
                    free(Aux); Aux = NULL;
                    }
                else{       //Escolhi fazer o maior filho direito da subarvore esquerda.
                   Aux = MaiorDireita(&(*pRaiz)->esquerda); //se vc quiser usar o Menor da esquerda, so o que mudaria seria isso:
                   Aux->esquerda = (*Raiz)->esquerda;          //        pAux = MenorEsquerda(&(*pRaiz)->direita);
                   Aux->direita = (*Raiz)->direita;
                  (Raiz)->esquerda = (*Raiz)->direita = NULL;
                   free((*Raiz));  *Raiz = Aux;  Aux = NULL;   
                   }
                }
             }
          }
}

Em_ordem

void imprimeEmOrdem(No *Raiz){
    if(pRaiz != NULL){
        imprimeEmOrdem(Raiz->esquerda);
        printf("\n%i", Raiz->valor);
        imprimeEmOrdem(Raiz->direita);
    }
}

Pre_ordem

void imprimePreOrdem(No *Raiz){
    if(pRaiz != NULL){
        printf("\n%i", Raiz->valor);
        imprimePreOrdemRaiz->esquerda);
        imprimePreOrdem(Raiz->direita);
    }
}


Pos_ordem

void imprimePosOrdem(No *Raiz){
    if(pRaiz != NULL){
        imprimePosOrdem(Raiz->esquerda);
        imprimePosOrdem(Raiz->direita);
        printf("\n%i", Raiz->valor);
    }
}

Contar raiz;

int contarNos(No *Raiz){
   if(Raiz == NULL)
        return 0;
   else
        return 1 + contarNos(Raiz->esquerda) + contarNos(Raiz->direita);
}

Contar folhas

int contarFolhas(No *Raiz){
   if(pRaiz == NULL)
        return 0;
   if(Raiz->esquerda == NULL && Raiz->direita == NULL)
        return 1;
   return contarFolhas(Raiz->esquerda) + contarFolhas(Raiz->direita);
}

Altura da árvore

int maior(int a, int b){
    if(a > b)
        return a;
    else
        return b;
}//maior



int altura(No *pRaiz){
   if((Raiz == NULL) || (Raiz->esquerda == NULL && Raiz->direita == NULL))
       return 0;
   else
       return 1 + maior(altura(pRaiz->esquerda), altura(pRaiz->direita));
}

Buscar valor na árvore

typedef int bool;
#define false 0;
#define true 1;

bool find(int valor) 
{
 
    Node* tempo = criarArvore(No **Raiz);
    int parar=0;

    if(valor==NULL){
      return false;
    }else if(valor->left== NULL && temp->right==NULL){
      if(temp->value == valort){
        return true;
      }else{
        return false;
      }
    }else if(temp->value==valor){
      return true;
    }else{
    while(parar==0){
      if(temp->value < valor){
        if(temp->left == NULL){
          parar++;
          if (temp->value==valor){
            break;
            return true;
          }else{
          return false;
          }
        }else{
          temp=temp->right;
          if (temp->value== valor){
            return true;
            break;
          }
        }

      }else if(temp->value > valor){
        if(temp->right== NULL){
          parar++;
          if (temp->value==valor){
            return true;
            break;
          }else{
          return false;
          }
        }else{
          temp=temp->left;
          if (temp->value== valor){
            return true;
            break;
          }
        }
      }
    }
  }
}
