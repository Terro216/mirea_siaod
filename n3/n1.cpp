#include <iostream>
using namespace std;
//toupper()

void addWordToString(char *newString, char *slovo) {
    int length = 0;
    int i=0;
    while (*newString != '\0') {
        cout << int(*newString) << endl;
        if (0<=int(*newString) && int(*newString)<=127) length++;
        else break;
        i++;
        newString++;
    }
    cout << length << endl;
    for (i = 0; i < 20; i++) {
        newString[length+i-1] = slovo[i];
    }
    newString[i]='\0';
}

char toWords(char *s) {
    char slovo[20];
    char newString[1024];
    int i,j;i=0;
    while(s[i]!='\0')		//�� ���� ⥪��
    {
        j=0;
        while(s[i]!='\0' && (s[i])!=' ' && (s[i])!=',')	//�� ���� ᫮��
        {
            slovo[j]=s[i];
            i++;
            j++;
        }
        slovo[j]='\0';
        if (j!=0) addWordToString(newString, slovo);
        cout << "aand " << newString << endl;
        if(s[i]!='\0')
        {
            i++;//�� � ࠧ����⥫� ᫮��, �᫨ ��� �� ��᫥����
        }
    }
    return *newString;
}

int main() {

    char str[1024];// = "�ਢ�� ��� ���, ��� � ⥡� ����, ��७� ��� ��ਫ �����";
    cout << "������ ��ப�: " << endl;
    gets(str);
    *str = toWords(str);
    //cout << str;
    system("pause");
    return 0;
}