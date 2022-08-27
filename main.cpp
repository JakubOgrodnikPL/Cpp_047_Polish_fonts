#include <iostream>
#include <cstring>
#include <locale.h>
#include <windows.h>

using namespace std;

/*char *tr(char *str)
  {
   static char buff[256];
   char cp[]="\245\206\251\210\344\242\230\276\253\244\217\250\235\343\340\227\275\215ąćęłńóśżźĄĆĘŁŃÓŚŻŹ";
   if(strlen(str)>=sizeof(buff)) return str;
   char *bf=buff;
   while(*str)
     {
      char *pos=strchr(cp+18,*str);
      *(bf++)=pos?*(pos-18):*str;
      ++str;
     }
   *bf=0;
   return buff;
  }*/

string napis;

int main()
{
    //setlocale(LC_CTYPE, "Polish");
    //SetConsoleCP( 852 );
    //setlocale ( LC_ALL, "" );
    cout << "Zażółć gęślą jaźń" << endl;
    //-fexec-charset=cp852 - UTF-8 + this should e add to the compiler settings
    //cout << tr("Zażółć gęślą jaźń") << endl;
    //cin >> napis;
    //cout << "Wpisany ciąg znaków: " << napis << endl;

    return 0;
}
