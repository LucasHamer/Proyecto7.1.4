#include <stdio.h>
#include <stdlib.h>

int IgualTamanio(int[], int[]);
void carga(int[]);

int main()
{
    int v1[5]={0},v2[5]={0},iguala;

    carga(v1);
    carga(v2);
    iguala=IgualTamanio(v1,v2);
    if(iguala==1)
        printf("Iguales");
    else
        printf("Distintos");

    return 0;
}
int IgualTamanio(int vec1[],int vec2[])
{
    int x=0,igual=0;
    while(x<5&&vec1[x]==vec2[x])
    {
        x++;
    }
    if(x==5)
    {
       igual=1;
    }
    else
        igual=0;

    return igual;
};
void carga(int vector[])
{
    int x;

    for(x=0;x<5;x++)
    {
        printf("Ingrese numero %d: ",x+1);
        scanf("%d",&vector[x]);
        fflush(stdin);
    }
};
