> ## 프로그램 설치과정
> 1. embarcadero dev-c++ 설치
> 2. <https://www.transmissionzero.co.uk/software/freeglut-devel/>에서 freeglut 3.0.0 MinGW Package 다운로드
> 3. 다운받은 파일 압축 풀은 후 각각의 위치에 맞게 복사해주기
>    * freeglut\include\GL 에 있는 파일들은 ->
>    * freeglut\lib\x64 에 있는 파일들은 ->
>    * freeglut\bin\x64 에 있는 파일들은 -> C:\Windows\System32 에 복사해두기
> 4. 프로젝트 생성(new Project -> Multmedia -> OpenGL)
> 5. 프로젝트 옵션 수정 (프로젝트 옵션 -> parameters -> linker에서 -lopengl32 -lfreeglut -lglu32 추가  
> [참고 링크](https://www.youtube.com/watch?v=8Qkpaewj-7Y)
***
## 프로그램 실행과정
  - ㅇㅇ
  - ![프로그램 작동 사진]()
***
## 소감
