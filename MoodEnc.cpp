#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <time.h>
#include <ctime>
 
void First()
{
    system("cls");
    std::cout<<"\t\t\t\t  _   _            _               __  __                 _"<<std::endl;
    std::cout<<"\t\t\t\t | | | | __ _  ___| | _____ _ __  |  \\/  | ___   ___   __| |"<<std::endl;
    std::cout<<"\t\t\t\t | |_| |/ _` |/ __| |/ / _ \\ '__| | |\\/| |/ _ \\ / _ \\ / _` |"<<std::endl;
    std::cout<<"\t\t\t\t |  _  | (_| | (__|   <  __/ |    | |  | | (_) | (_) | (_| |"<<std::endl;
    std::cout<<"\t\t\t\t |_| |_|\\__,_|\\___|_|\\_\\___|_|    |_|  |_|\\___/ \\___/ \\__,_|"<<std::endl;
}

void help()
{
    First();

    std::cout<<"\n\t\t\t\t\t Command \t\t\t\t Detail";
    std::cout<<"\n\t\t\t\t\t  ----- \t\t\t\t  ----";
    std::cout<<"\n\t\t\t\t\t Encrypt {enc} \t\t\t\t  To encrypt";
    std::cout<<"\n\n\t\t\t\t\t Decrypt {dec} \t\t\t\t  To decrypt";
    std::cout<<"\n\n\t\t\t\t\t Convert {conv} \t\t\t\t  To Convertt";
    std::cout<<"\n\n\t\t\t\t\t Exit \t\t\t\t\t  To Close Software \n";
    std::cout<<"\n\t\t\t\t\t\t" <<system("pause");
}

char table_vigenere(int a , int b)
{
    char table[26][26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','a','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','a','b','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','a','b','c','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','a','b','c','d','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','a','b','c','d','e','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','a','b','c','d','e','f','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','a','b','c','d','e','f','g','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','a','b','c','d','e','f','g','h','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','a','b','c','d','e','f','g','h','i','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','a','b','c','d','e','f','g','h','i','j','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','a','b','c','d','e','f','g','h','i','j','k','m','n','o','p','q','r','s','t','u','v','w','x','y','z','a','b','c','d','e','f','g','h','i','j','k','l','n','o','p','q','r','s','t','u','v','w','x','y','z','a','b','c','d','e','f','g','h','i','j','k','l','m','o','p','q','r','s','t','u','v','w','x','y','z','a','b','c','d','e','f','g','h','i','j','k','l','m','n','p','q','r','s','t','u','v','w','x','y','z','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','q','r','s','t','u','v','w','x','y','z','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','r','s','t','u','v','w','x','y','z','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','s','t','u','v','w','x','y','z','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','t','u','v','w','x','y','z','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','u','v','w','x','y','z','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','v','w','x','y','z','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','w','x','y','z','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','x','y','z','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','y','z','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','z','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y'};
    
    char letter = table[a][b];

    return letter;
}

void Loading()
{
    
    First();
    std::string load = "{Loading} : {###               }";
    std::cout<<"\n\t\t\t"<<load;
    for(int i=0; i<1600000000; i++)
    {
        if(i == 400000000 )
        {
            system("cls");
            First();
            load = "{Loading} : {#####             }";
            std::cout<<"\n\t\t\t"<<load;
            continue;
        }
        else if(i == 600000000)
        {
            system("cls");
            First();
            load = "{Loading} : {########          }";
            std::cout<<"\n\t\t\t"<<load;
            continue;
        }
        else if (i == 800000000)
        {
            system("cls");
            First();
            load = "{Loading} : {#############     }";
            std::cout<<"\n\t\t\t"<<load;
            continue;
        }
        else if (i == 1300000000)
        {
            system("cls");
            First();
            load = "{Loading} : {##################}";
            std::cout<<"\n\t\t\t"<<load;
            continue;
        }
        else if(i == 1500000000)
        {
            break;
        }
        
    }
}

void Closing()
{
    
    First();
    std::string load = "{Closing} : {###               }";
    std::cout<<"\n\t\t\t"<<load;
    for(int i=0; i<1600000000; i++)
    {
        if(i == 400000000 )
        {
            system("cls");
            First();
            load = "{Closing} : {#####             }";
            std::cout<<"\n\t\t\t"<<load;
            continue;
        }
        else if(i == 600000000)
        {
            system("cls");
            First();
            load = "{Closing} : {########          }";
            std::cout<<"\n\t\t\t"<<load;
            continue;
        }
        else if (i == 800000000)
        {
            system("cls");
            First();
            load = "{Closing} : {#############     }";
            std::cout<<"\n\t\t\t"<<load;
            continue;
        }
        else if (i == 1300000000)
        {
            system("cls");
            First();
            load = "{Closing} : {##################}";
            std::cout<<"\n\t\t\t"<<load;
            continue;
        }
        else if(i == 1500000000)
        {
            break;
        }
        
    }
}




std::string command(char choix[20])
{
    char A[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int size = strlen(choix);
    int s = 0;
    std::string comm;
    for(int t = 0 ; t < size; t++)
    {
        for(char h='A'; h <= 'Z' ; h++)
        {
            if(choix[t] == h)
            {
                choix[t] = A[s];
            }
            s++;
        }
        comm += choix[t];
    }

    return comm;
    
}

void Evegener()
{
    First();
    char A[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    std::cout<<"\n\t\t\t\t\t\t\t{Vegener Encryption} \n\t\t\t\t\tEnter Key {string key} : ";
    char key[20];
    scanf("%s",&key);
    std::cout<<"\t\t\t\t\tEnter Message {by block} : ";
    char text[20];
    scanf("%s",&text);
    int h = strlen(text);
    int d = strlen(key),l=0,en=0,g,x,n;
    n=d;
    int clee=0,mes=0;
    std::string message;

    if(d < h)
    {
        for(int f = 0; f< (h - d);f++)
        {
            key[n] += 'a';
            n++;
        }
        d = strlen(key);

        for(int q=0;q<d;q++)
        {
            //recup de la cle
            for(g=q;g<d;g++)
            {
                for(int k=0; k<26; k++)
                {
                    if(key[g] == A[k])
                    {
                        clee = k;
                        k = 27;
                        l = g;
                        g = d+1;
                    }
                }
            }
                //recup text
            for(x = q;x<h;x++)
            {
                for(int v=0; v<26; v++)
                {
                    if(text[x] == A[v])
                    {
                        mes = v;
                        v = 27;
                        en = x;
                        x = h+1;
                    }
                }
            }
                
            message += table_vigenere(mes,clee);
        }
        Loading();
        First();
        std::cout<<"\n\t\t\t\t\t\t\t{Vegener Encryption} \n\n\t\t\t\t{Message Encrypted} :"<<message;   
        std::cin.ignore();
        std::cin.ignore();
    }

 
    else if(d == h)
    {
        for(int q=0;q<d;q++)
        {
            //recup de la cle
            for(g=q;g<d;g++)
            {
                for(int k=0; k<26; k++)
                {
                    if(key[g] == A[k])
                    {
                        clee = k;
                        k = 27;
                        l = g;
                        g = d+1;
                    }
                }
            }
                //recup text
            for(x = q;x<h;x++)
            {
                for(int v=0; v<26; v++)
                {
                    if(text[x] == A[v])
                    {
                        mes = v;
                        v = 27;
                        en = x;
                        x = h+1;
                    }
                }
            }
                
            message += table_vigenere(mes,clee);
        }
    
        Loading();
        First();
        std::cout<<"\n\t\t\t\t\t\t\t{Vegener Decryption} \n\t\t\t\t{Message Decrypted} : " <<message;
        std::cin.ignore();
        std::cin.ignore(); 
    }
    else
    {
        Loading();
        First();
        std::cout<<"\n\t\t\t\t\t\t\t{Vegener Decryption} \n\t\t\t\t{ERROR : Key too long} ";
        std::cin.ignore();
        std::cin.ignore(); 
    }
}

void Ecesar()
{
    bool g = true;
    while(g)
    {
        First();
        char A[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
        
        std::cout<<"\n\t\t\t\t\t\t\t{Cesar Encryption} \n\t\t\t\t\tEnter Key {1 to 25} : ";
        int key;
        std::cin >> key;

        std::cout<<"\t\t\t\t\tEnter Message {by block} : ";
        char text[20];
        scanf("%s",&text);
        int h = strlen(text),f=1;
        char select = 'a';
        std::string message;
        int k ;
        for(k = 0; k <h ; k++)
        {
            for(char d = 'A'; d <= 'Z'; d++)
            {
                if(text[k] == d)
                {
                    std::cout<<"\n\t\t\t\t\t\t\t{Cesar Encryption} \n\t\t\t\t\t {Message Encrypted} : You must not use Upper-Case";
                    d = 'Z';
                    f=5;
                    k = h+1;
                    std::cin.ignore();
                    std::cin.ignore();
                    break;
                }
            }
        }

        if(f == 1)
        {
            for(int i=0; i<h; i++)
            {
               for(int j =0; j < 26; j++)
               {
                    if(text[i] == A[j])
                    {
                        if(j + key > 26)
                        {
                            int s = (j+key) - 26;
                            text[k] = A[s];
                            j = 27;
                            message += text[k];
                        }
                        else
                        {  
                            text[k] = A[j + key];
                            j = 27;
                            message += text[k];
                        }
                    }
               }
            }
            Loading();
            First();
            std::cout<<"\n\t\t\t\t\t\t\t{Cesar Encryption} \n\n\t\t\t\t{Message Encrypted} : " <<message;
            std::cin.ignore();
            std::cin.ignore();
        }
        
    }
    
}

void Dcesar()
{
    bool g = true;
    while(g)
    {
        First();
        char A[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
        
        std::cout<<"\n\t\t\t\t\t\t\t{Cesar Encryption} \n\t\t\t\t\tEnter Key {1 to 25} : ";
        int key;
        std::cin >> key;

        std::cout<<"\t\t\t\t\tEnter Message {by block} : ";
        char text[20];
        scanf("%s",&text);
        int h = strlen(text),f=1;
        char select = 'a';
        std::string message;
        int k ;
        for(k = 0; k <h ; k++)
        {
            for(char d = 'A'; d <= 'Z'; d++)
            {
                if(text[k] == d)
                {
                    std::cout<<"\n\t\t\t\t\t\t\t{Cesar Encryption} \n\t\t\t\t\t {Message Encrypted} : You must not use Upper-Case";
                    d = 'Z';
                    f=5;
                    k = h+1;
                    std::cin.ignore();
                    std::cin.ignore();
                    break;
                }
            }
        }

        if(f == 1)
        {
            for(int i=0; i<h; i++)
            {
               for(int j =0; j < 26; j++)
               {
                    if(text[i] == A[j])
                    {
                        if(j - key < 0)
                        {
                            int s = (j-key) + 26;
                            text[k] = A[s];
                            j = 27;
                            message += text[k];
                        }
                        else
                        {  
                            text[k] = A[j - key];
                            j = 27;
                            message += text[k];
                        }
                    }
               }
            }
            Loading();
            First();
            std::cout<<"\n\t\t\t\t\t\t\t{Cesar Encryption} \n\t\t\t\t{Message Encrypted} : " <<message;
            std::cin.ignore();
            std::cin.ignore();
        }
        
    }
}



void Encrypt()
{
    bool g = true;
    while(g)
    {
        system("cls");
        First();
        printf("\n\n\t\t\t\t******************************************************************\n");
        printf("\t\t\t\t* \t\t\t\t\t\t\t\t * \n");
        printf("\t\t\t\t* \t\t\t   enEncryption Data \t\t\t *\n");
        printf("\t\t\t\t* \t\t\t --------------------\t\t\t * \n");
        printf("\t\t\t\t* \t\t\t\t\t\t\t\t * \n");
        printf("\t\t\t\t* \t 1- Vegener{Encrypt} \t\t 2- Cesar{Encrypt} \t *\n");
        printf("\t\t\t\t* \t\t\t\t\t\t\t\t * \n");
        printf("\t\t\t\t******************************************************************\n");

        std::cout<<"\n\t\t\t\t\t{Hacker-Mood} : ";
        int choix;
        std::cin >> choix;

        switch(choix)
        {
            case 1:
            {
                Evegener();
                break;
            }
            case 2:
            {
                Ecesar();
                break;
            }
            case 3:
            {
                break;
            }
            default :
            {
                std::cout<<"Select Correct number";
            }
        }
        system("cls");
        First();
        std::cout<<"\n\t\t\t\t\t{press 99 to quit} : ";
        int qt;
        std::cin >> qt;

        if(qt == 99)
        {
            g = false;
            break;
        }
    }
}

void Dvegener()
{
    First();
    char A[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    std::cout<<"\n\t\t\t\t\t\t\t{Vegener Encryption} \n\t\t\t\t\tEnter Key {string key} : ";
    char key[20];
    scanf("%s",&key);
    std::cout<<"\t\t\t\t\tEnter Message {by block} : ";
    char mes[20];
    scanf("%s",&mes);
    int h = strlen(mes);
    int d = strlen(key),l,fix,fixer;
    l=d;
    std::string message;

    if(d < h)
    {
        for(int r =0; r < (h - d);r++)
        {
            key[l] = 'a';
            l++;
        }
        d = strlen(key);

        for(int i=0; i < d; i++)
        {
            for(int f=0; f<26;f++)
            {
                if(key[i] == A[f])
                {
                    fix = f;
                    f  = 27;
                }
            }
            
            for(int g =0; g<26; g++)
            {
                if(table_vigenere(g,fix) == mes[i])
                {
                    fixer = g;
                    message += table_vigenere(0,fixer);
                }
            }
        }

        Loading();
        First();
        std::cout<<"\n\t\t\t\t\t\t\t{Vegener Decryption} \n\t\t\t\t{Message Decrypted} : " <<message;
        std::cin.ignore();
        std::cin.ignore(); 
    }
    else if(d == h)
    {
        for(int i=0; i < d; i++)
        {
            for(int f=0; f<26;f++)
            {
                if(key[i] == A[f])
                {
                    fix = f;
                    f  = 27;
                }
            }
            
            for(int g =0; g<26; g++)
            {
                if(table_vigenere(g,fix) == mes[i])
                {
                    fixer = g;
                    message += table_vigenere(0,fixer);
                }
            }
        }
        Loading();
        First();
        std::cout<<"\n\t\t\t\t\t\t\t{Vegener Decryption} \n\t\t\t\t{Message Decrypted} : " <<message;
        std::cin.ignore();
        std::cin.ignore(); 
    }
    else
    {
        Loading();
        First();
        std::cout<<"\n\t\t\t\t\t\t\t{Vegener Decryption} \n\t\t\t\t{ERROR : Key too long} ";
        std::cin.ignore();
        std::cin.ignore(); 
    }

}

void Decrypt()
{
    bool g = true;
    while(g)
    {
        system("cls");
        First();
        printf("\n\n\t\t\t\t******************************************************************\n");
        printf("\t\t\t\t* \t\t\t\t\t\t\t\t * \n");
        printf("\t\t\t\t* \t\t\t   enEncryption Data \t\t\t *\n");
        printf("\t\t\t\t* \t\t\t --------------------\t\t\t * \n");
        printf("\t\t\t\t* \t\t\t\t\t\t\t\t * \n");
        printf("\t\t\t\t* \t 1- Vegener{Decrypt} \t\t 2- Cesar{Decrypt} \t *\n");
        printf("\t\t\t\t* \t\t\t\t\t\t\t\t * \n");
        printf("\t\t\t\t******************************************************************\n");

        std::cout<<"\n\t\t\t\t\t{Hacker-Mood} : ";
        int choix;
        std::cin >> choix;

        switch(choix)
        {
            case 1:
            {
                Dvegener();
                break;
            }
            case 2:
            {
                Dcesar();
                break;
            }
            case 3:
            {
                break;
            }
            default :
            {
                std::cout<<"Select Correct number";
            }
        }

        system("cls");
        First();
        std::cout<<"\n\t\t\t\t\t{press 99 to quit} : ";
        int qt;
        std::cin >> qt;

        if(qt == 99)
        {
            g = false;
            break;
        }

    }
}

//Conversion 






void binary()
{

    
    //Enter number to convert
    bool g = true;
    char encr[200][2000];
    while(g)
    {
        
        system("cls");
        First();
        std::cout<<"\n\t\t\t\t\t{Enter number} : ";
        int nb;
        scanf("%d", &nb);

        int p = 0,r,i=0,f = nb;


        while(r !=0)
        {
            int h = nb % 2;

            r = nb /2;


            if(nb != 0)
            {
                encr[i][p]= h+'00';
                nb = r;
                    p=p+1;
            }
            else
            {
                printf("Break;");
                r=0;
                break;
            }
        }
        Loading();
        First();
        std::cout<<"\n\t\t\t\t\t\t\t{Result} : " ;
        for(int j = 0 ; j < strlen(*encr); j++)
        {
            printf("%s \n", encr[j]);

        }
        std::cin.ignore();
        std::cin.ignore();

        system("cls");
        First();
        std::cout<<"\n\t\t\t\t\t{press 99 to quit} : ";
        int qt;
        std::cin >> qt;

        if(qt == 99)
        {
            g = false;
            break;
        }
    }
}


void decimal()
{
    int n1 , base = 2 , n3 =0;
    bool g = true;
    while(g)
    {
        system("cls");
        First();
        std::cout<<"\n\t\t\t\t\t{Enter number} : ";
        char nb[10000];
        scanf("%s", &nb);
        int j = strlen(nb);
        for(int i =0; i < strlen(nb);i++)
        {
            n1 = nb[i] - '0';
            j--;
            n1 = n1 *(pow(base,j));
            n3 +=n1;
        }
        
        Loading();
        First();
        std::cout<<"\n\t\t\t\t\t\t\t{Result} : " <<n3 ;
        std::cin.ignore();
        std::cin.ignore();

        system("cls");
        First();
        std::cout<<"\n\t\t\t\t\t{press 99 to quit} : ";
        int qt;
        std::cin >> qt;

        if(qt == 99)
        {
            g = false;
            break;
        }
    }
}

void convert()
{
    bool t = true;
    while(t)
    {
        First();
        printf("\n\n\t\t\t\t******************************************************************\n");
        printf("\t\t\t\t* \t\t\t\t\t\t\t\t * \n");
        printf("\t\t\t\t* \t\t\t Convert base to base \t\t\t *\n");
        printf("\t\t\t\t* \t\t\t --------------------\t\t\t * \n");
        printf("\t\t\t\t* \t\t\t\t\t\t\t\t * \n");
        printf("\t\t\t\t* \t 1- base 10 to 2 \t\t 2- Base 2 to 10 \t *\n");
        printf("\t\t\t\t* \t\t\t\t\t\t\t\t * \n");
        printf("\t\t\t\t* \t\t\t\t\t\t[99 - Exit]\t * \n");
        printf("\t\t\t\t* \t\t\t\t\t\t\t\t * \n");
        printf("\t\t\t\t******************************************************************\n");

        std::cout<<"\n\t\t\t\t\t{Hacker-Mood} : ";
        int choix;
        scanf("%d",&choix);
        switch(choix)
        {
            case 1:
            {
                binary();
                system("pause");
                system("cls");
                break;
            }
            case 2:
            {
                decimal();
                system("pause");
                system("cls");
                break;
            }
            case 99:
            {
                 t = false;
            }
            default:
            {
                printf("Choose correct number ...\n");
                system("pause");
                system("cls");
            }
        }
    }
}
//timer 


void setTimeout(int milliseconds)
{
    // If milliseconds is less or equal to 0
    // will be simple return from function without throw error
    if (milliseconds <= 0) {
        fprintf(stderr, "Count milliseconds for timeout is less or equal to 0\n");
        return;
    }

    // a current time of milliseconds
    int milliseconds_since = clock() * 1000 / CLOCKS_PER_SEC;

    // needed count milliseconds of return from this timeout
    int end = milliseconds_since + milliseconds;

    // wait while until needed time comes
    do {
        milliseconds_since = clock() * 1000 / CLOCKS_PER_SEC;
    } while (milliseconds_since <= end);
}


int timer(int delay)
{
    int k = delay;
    for(int i=0; i <=delay; i++)
    {
        printf("%d", k);
        printf("\r          ");
        printf("\r%d", k);
        fflush(stdout);
        setTimeout(1000);
        k--;
    }
}

int main()
{
    // reste a adapter le timer au nivea de l'entete    timer(20);
    bool g = true;
    while(g)
    {
         
        First();
        std::cout<<"\n\t\t\t\t\t{Hacker-Mood} : ";
        char choix[20];
        scanf("%s",&choix);

        std::string cmd =  command(choix);
    
        if(cmd == "encrypt" || cmd == "enc")
        {
            Encrypt();

        }
        else if(cmd == "decrypt" || cmd == "dec")
        {
            Decrypt();
        }
        else if( cmd == "convert" || cmd == "conv")
        {
            convert();
        }
        else if(cmd == "help" || cmd =="?")
        {
            help();
        }
        else if(cmd == "exit")
        {
            g = false;
            Closing();
            system("cls");
        }
    }
    
    
}