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
    white,//이게 핑크
    gray,
    pink,//이게 하얀색

}Colorkinds;

int main()
{
    string pro[7]={"최근 세 자녀를 모두 도쿄대 의학부를 보낸 사토의 추천 공부 방법은 (	) 공부이다.","최근 한국에서 유행하는 공유주택의 선구자인 부산의 (	           )이 화재가 되고 있다.","(	)은 수면, 휴식, 식사, 학습, 가사, 노동 등 다양한 성격의 활동이 이루어지는 공간이다.","(	)이란 사람이 걸어 다니는 흔적을 선으로 표현한 것이다.","가구를 배치할떄 큰 가구부터 차례대로 배치해야 한다.(O/X)","(	)이란 주거 공간을 구체적으로 계획하기 전에 용도가 비슷하거나 성격이 비슷한 공간끼리 묶어서 배치하는 것을 말한다.","주거 공간의 비효율적 활용에 해당 되는 것들은?\na. 침대 및 서랍\nb. 현관 앞 냉장고\nc. 원룸에 있는 큰 화장대\nd. 계단 밑 옷장\n"};
    string ans[7]={"거실","일오집","주거공간","동선","O","조닝","b,c"};

    srand(time(NULL));
    int sel = rand()%7;

    int R=0;
    int W=0;


    cout << "-------------------------------------------------------------------------------------------\n";
    cout << "여러분들 안녕하세요 제가 다시 여러분들을 위해 문제들을 가지고 왔습니다 열심히 풀어주세요! \n";
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
            cout << "답:";
            string input;
            cin >> input;
            if(input == ans[sel]){
               R++;
               Colorkinds colorkinds;
               Colorset(blue,pink);//배경색,글자색
               cout << "정답입니다.\n";

            }else{
               W++;
               Colorkinds colorkinds;
               Colorset(red,pink);//배경색,글자색
               cout << "오답입니다.\n";

            }
            pro[sel]="X";
            Colorkinds colorkinds;
            Colorset(black,pink);//배경색,글자색
        }
        Sleep(2000);
        system("cls");
        Colorkinds colorkinds;
        Colorset(black,pink);//배경색,글자색
    }

    cout << "<결과>\n";
    cout << "정답:\n";
    cout << "오답:";

    return 0;
}
