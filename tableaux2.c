//Initiation aux tableaux n°2
#define DIM 49

int saisie_notes(float tab[]);
void saisie_notes_bis(float tab[],int* nb);
int maximum(float tab[],int effectif);

int main(){
    float notes[DIM];
    int indice_max;
    int effectif;
    effectif=saisie_notes(notes);
    //Alternative:
    //saisie_not_bis(notes,&effectif)

    indice_max=maximum(notes,effectif);
    printf("La note max=%f",notes[indice_max]);
}

int saisie_notes(float tab[]){
    int i,eff;
    do{
        printf("effectif? "); scanf("%d",&eff);
    }while(eff<1||eff>DIM);

    for(i=0; i<eff; i++){
        do{
            printf("note %d ",i+1);
            scanf("%f",&tab[i]);
        }while(tab[i]<0||tab[i]>20);
    }
    return eff;
}

void saisie_notes_bis(float tab[],int* nb){
    int i;
    do{
        printf("effectif? "); scanf("%d",nb);
    }while(nb<1||nb>DIM);

    for(i=0;i<*nb;i++){
        do{
            printf("note %d ",i+1);
            scanf("%f",&tab[i]);
        }while(tab[i]<0||tab[i]>20);

    }
}

int maximum(float tab[],int effectif){
    int indice,i;
    float max=tab[0];
    indice = 0;
    for(i=1;i<effectif;i++){
        if(max<tab[i]){
            max=tab[i];
            indice=i;
        }
    }
    return indice;
}