#include <stdio.h>
#include <string.h>

int main()
{
    int creditos, disciplinas, validadas;
    char curso [3];
    printf ("Digite o curso: ");
    scanf (" %s", curso);
    if (strcmp(curso, "CC") == 0)
    {
        int fase;
        printf ("Qual sua fase? ");
        scanf (" %i", &fase);
        if (fase == 1)
        {
            char validacao = 'N', vagt = 'N', vtgs ='N';
            printf ("Tentar validacao? S/N\n");
            scanf (" %c", &validacao);
            if (validacao == 'S' || validacao == 's')
            {
                printf ("Vai validar AGT? ");
                scanf (" %c", &vagt);
                printf ("Vai validar TGS? ");
                scanf (" %c", &vtgs);
            }
            creditos = 20;
            disciplinas = 5;
            printf ("Matricula compulsoria em: \n");
            printf ("Primeira fase --- Cred Teo ----- Cred Prat");
            printf ("AGT0001              02             02\n");
            printf ("GAN0001              04\n");
            printf ("ICD0001              04\n");
            printf ("LMA0001              02             02\n");
            printf ("TGS0001              02             02\n");
            printf ("Total de creditos: %i\n", creditos);
            printf ("Total de disciplinas: %i\n", disciplinas);
            if (validacao == 'S' || validacao == 's' && vagt == 'S' || vagt == 's' && vtgs == 'S' || vtgs == 's')
            {
                printf ("Pedidos de validacao: AGT TGS\n");
            }
            else if (validacao == 'S' || validacao == 's' && vagt == 'S' || vagt == 's' && vtgs == 'N' || vtgs == 'n')
            {
                printf ("Pedidos de validacao: AGT\n");
            }
            else if (validacao == 'S' || validacao == 's' && vagt == 'N' || vagt == 'n' && vtgs == 'S' || vtgs == 's')
            {
                printf ("Pedidos de validacao: TGS\n");
            }
            else
            {
                printf ("Pedidos de validacao: \n");
            }
        }
        else if (fase == 2)
        {
            char fALI = 'N', vGAN = 'N', fCDI = 'N', vCDI = 'N', fECC = 'N';
            printf ("Vai fazer ALI? S/N\n");
            scanf (" %c", &fALI);
            if (fALI == 'S' || fALI == 's')
            {
                printf ("Ja fez GAN? S/N\n");
                scanf (" %c", &vGAN);
                if (vGAN == 'S')
                {
                    creditos = 4;
                    disciplinas = 1;
                }
                else
                {
                    creditos = 0;
                    disciplinas = 0;
                }
            }
            else
            {
                creditos = 0;
            }
            printf ("Vai fazer CDI? S/N\n");
            scanf (" %c", &fCDI);
            if (fCDI == 'N')
            {
                printf ("Vai validar CDI? S/N\n");
                scanf (" %c", &vCDI);
            }
            else
            {
                creditos = creditos + 6;
                disciplinas = disciplinas + 1;
            }
            printf ("Vai fazer ECC? S/N\n");
            scanf (" %c", &fECC);
            if (fECC == 'S' || fECC == 's')
            {
                creditos = creditos + 4;
                disciplinas = disciplinas + 1;
            }
            printf ("Segunda fase --- Cred Teo ----- Cred Prat ----- Pre-Requisitos\n");
            printf ("ALI0001              04             00              GAN0001\n");
            printf ("CDI0001              06             00              ICD0001\n");
            printf ("ECC0001              02             02\n");
            if (fALI == 'N' || fALI == 'n' && fCDI == 'N' || fCDI == 'n' && fECC == 'N' || fECC == 'n')
            {
                printf ("Sua matricula cai constar como trancada.\n");
                printf ("Eh preciso escolher ao menos uma disciplina.\n");
                printf ("Total de creditos: %i", creditos);
                printf ("Total de disciplinas: %i", disciplinas);
            }
            else if (fALI == 'S' || fALI == 's' && vGAN == 'N' || vGAN == 'n' && fCDI == 'N' || fCDI == 'n' && fECC == 'N' || fECC == 'n')
            {
                printf ("Sua matricula cai constar como trancada.\n");
                printf ("Eh preciso escolher ao menos uma disciplina.\n");
                printf ("Total de creditos: %i", creditos);
                printf ("Total de disciplinas: %i", disciplinas);
            }
            else
            {
                printf ("Total de creditos: %i\n", creditos);
                printf ("Total de disciplinas: %i\n", disciplinas);
                if (vCDI == 'S' || vCDI == 's')
                {
                    printf ("Pedidos de validacao: CDI\n");
                }
            }
        }
        else
        {
            return 0;
        }
    }
    else
    {
        return 0;
    }
    return 0;
}
