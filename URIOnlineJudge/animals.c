#include<stdio.h>
int main ()
{
    char n1,n2,n3;
    scanf("%s %s %s",&n1,&n2,&n3);
    if (n1=="vertebrado"){
        if(n2=="ave"){
                if(n3=="carnivoro"){printf("aguia\n");}
                else if(n3=="onivoro"){printf("pomba\n");}
    }
        else if(n2=="mamifero"){
            if(n3=="onivoro"){printf("homem\n");}
            else if(n3=="herbivoro"){printf("haca\n");}
        }
}
    if (n1=="invertebrado"){
        if(n2=="insecto"){
                if(n3=="hematofago"){printf("pulga\n");}
                else if(n3=="herbivoro"){printf("lagarta\n");}
    }
        else if(n2=="anelideo"){
            if(n3=="hematofago"){printf("sanguessuga\n");}
            else if(n3=="onivoro"){printf("minhoca\n");}
        }
}



return 0;
}
