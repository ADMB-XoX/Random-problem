#include <iostream>
#include <time.h>
#include <windows.h>
#include <Windows.h>

using namespace std;

void Colorset(int backcolor,int textcolor)
{
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(handle, (backcolor << 4) + textcolor);

}

typedef enum Colorkinds
{
    black,
    blue,
    green,
    skyblue,
    red,
    white,//�̰� ��ũ
    gray,
    pink,//�̰� �Ͼ��

}Colorkinds;

int main()
{
    string pro[7]={"�ֱ� �� �ڳฦ ��� ����� ���кθ� ���� ������ ��õ ���� ����� (	) �����̴�.","�ֱ� �ѱ����� �����ϴ� ���������� �������� �λ��� (	           )�� ȭ�簡 �ǰ� �ִ�.","(	)�� ����, �޽�, �Ļ�, �н�, ����, �뵿 �� �پ��� ������ Ȱ���� �̷������ �����̴�.","(	)�̶� ����� �ɾ� �ٴϴ� ������ ������ ǥ���� ���̴�.","������ ��ġ�ҋ� ū �������� ���ʴ�� ��ġ�ؾ� �Ѵ�.(O/X)","(	)�̶� �ְ� ������ ��ü������ ��ȹ�ϱ� ���� �뵵�� ����ϰų� ������ ����� �������� ��� ��ġ�ϴ� ���� ���Ѵ�.","�ְ� ������ ��ȿ���� Ȱ�뿡 �ش� �Ǵ� �͵���?\na. ħ�� �� ����\nb. ���� �� �����\nc. ���뿡 �ִ� ū ȭ���\nd. ��� �� ����\n"};
    string ans[7]={"�Ž�","�Ͽ���","�ְŰ���","����","O","����","b,c"};

    srand(time(NULL));
    int sel = rand()%7;

    int R=0;
    int W=0;


    cout << "-------------------------------------------------------------------------------------------\n";
    cout << "�����е� �ȳ��ϼ��� ���� �ٽ� �����е��� ���� �������� ������ �Խ��ϴ� ������ Ǯ���ּ���! \n";
    cout << "-------------------------------------------------------------------------------------------\n";
    Sleep(5000);
    system("cls");

    while(R+W < 7){
        if(pro[sel]=="X"){
            sel = rand()%7;
            continue ;
        }else{
            cout << "-----------------------------------------------------------------------------------------------------------\n";
            cout << pro[sel] <<"\n";
            cout << "-----------------------------------------------------------------------------------------------------------\n";
            cout << "��:";
            string input;
            cin >> input;
            if(input == ans[sel]){
               R++;
               Colorkinds colorkinds;
               Colorset(blue,pink);//����,���ڻ�
               cout << "�����Դϴ�.\n";

            }else{
               W++;
               Colorkinds colorkinds;
               Colorset(red,pink);//����,���ڻ�
               cout << "�����Դϴ�.\n";

            }
            pro[sel]="X";
            Colorkinds colorkinds;
            Colorset(black,pink);//����,���ڻ�
        }
        Sleep(2000);
        system("cls");
        Colorkinds colorkinds;
        Colorset(black,pink);//����,���ڻ�
    }

    cout << "<���>\n";
    cout << "����:\n";
    cout << "����:";

    return 0;
}
