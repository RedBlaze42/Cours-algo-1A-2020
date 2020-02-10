//Initiation aux tableaux
#define DIM 50

int main(){
    float notes[DIM];
    for(int i=0;i<DIM;i++){
        printf("\nEntrez la note numéro %d: ",i+1);
        scanf("%f",&notes[i]);
    }

    for(int i=0;i<DIM;i++){
        printf("Note numéro: %d=%f\n",i+1,notes[i]);
    }
}