// Des_Project.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

//#include <iostream>
#include <stdio.h>

int main () {
	printf ("hello world");
}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.


/*
//---------------------------------------------------------------------------
#include "McbDES2.hpp"
#include <stdio.h>

#include <vcl.h>
#pragma hdrstop

//---------------------------------------------------------------------------
#pragma argsused

// 암호화에 쓰일 키값 정의
unsigned char * lpKey1 = (unsigned char*)"72201513";
unsigned char * lpKey2 = (unsigned char*)"94528010";

//---------------------------------------------------------------------------
// 암호화(DES) 하는 함수
AnsiString EncodeDES( AnsiString Value )
{
    AnsiString _result;

    McbDES desEncrypt;

    desEncrypt.McbSetKey1(lpKey1);
    desEncrypt.McbSetKey2(lpKey2);

    if ( desEncrypt.McbEncrypt( Value.c_str() ) )
    {
        int bSiz =  desEncrypt.McbGetPlainTextSize();
        _result.SetLength( bSiz );
        memcpy( _result.c_str(), desEncrypt.McbGetPlainText(), bSiz );
    }

    return _result;  // 암호화가 실패하면 공백("") 리턴
}

//---------------------------------------------------------------------------
// 복호화(DES) 하는 함수
AnsiString DecodeDES( AnsiString Value )
{
    AnsiString _result;

    McbDES desDecrypt;

    desDecrypt.McbSetKey1(lpKey1);
    desDecrypt.McbSetKey2(lpKey2);

    if ( desDecrypt.McbDecrypt( Value.c_str(), Value.Length() ) )
    {
        int bSiz =  desDecrypt.McbGetPlainTextSize();
        _result.SetLength( bSiz );
        memcpy( _result.c_str(), desDecrypt.McbGetPlainText(), bSiz );
    }

    return _result;  // 복호화가 실패하면 공백("") 리턴
}
</vcl.h></stdio.h>
//---------------------------------------------------------------------------
// 이건 위의 함수를 사용 하는 예제입니다.
int main(int argc, char* argv[])
{
   AnsiString strEncode = EncodeDES( "Hello World!" );

   if ( strEncode.Length() > 0 )
   {
      printf("암호화 된 문자 (%d) bytes: %s \n", strEncode.Length(), strEncode.c_str() );

      AnsiString strDecode = DecodeDES( strEncode );
      printf("복호화 된 문자 (%d) bytes: %s \n", strDecode.Length(), strDecode.c_str());
   }

    return 0;
}
//---------------------------------------------------------------------------


출처: https://dlsenfl.tistory.com/entry/DES-암호화복호화 [dlsenfl]
*/
