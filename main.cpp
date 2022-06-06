#include<stdio.h>

int main()

{
  char mesaj_string[500], litera;                        // vector[] = [1,_,_,_,_,_,sdasd,asdasd,sadad] -> pozitii 0,1,2,3,4,5,6 in ele sunt constante 500
  int i, key;
  printf("Introduceti mesajul pentru a fi codificat: ");
  scanf("%s", mesaj_string);
  printf("Cheia de cifrare: ");
  scanf("%d", &key);

  for(i = 0; mesaj_string[i] != '\0'; ++i)    mesaj_string[]= ['a','n',......]
    {
     litera = mesaj_string[i];
     if(litera >= 'a' && litera <= 'z')
        {
            litera = litera + key;
            if(litera > 'z')
            {
                litera = litera - 'z' + 'a' - 1;
            }
            mesaj_string[i] = litera;
        }
     else if(litera >= 'A' && litera <= 'Z')
            {
            litera = litera + key;
            if(litera > 'Z')
            {
                litera = litera - 'Z' + 'A' - 1;
            }
            mesaj_string[i] = litera;
            }
    }

  printf("Sistemul de cifrare Caesar: %s", mesaj_string);


  return 0;

}
