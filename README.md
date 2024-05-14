> ## 프로그램 설치과정
> 1. embarcadero dev-c++ 설치
> 2. <https://www.transmissionzero.co.uk/software/freeglut-devel/>에서 freeglut 3.0.0 MinGW Package 다운로드
> 3. 다운받은 파일 압축 풀은 후 각각의 위치에 맞게 복사해주기
>    * freeglut\include\GL 에 있는 파일들은 -> C:\Program Files (x86)\Embarcadero\Dev-Cpp\TDM-GCC-64\include 로 복사
>    * freeglut\lib\x64 에 있는 파일들은 -> C:\Program Files (x86)\Embarcadero\Dev-Cpp\TDM-GCC-64\lib 로 복사
>    * freeglut\bin\x64 에 있는 파일들은 -> C:\Windows\System32 에 복사
> 4. 프로젝트 생성(new Project -> Multmedia -> OpenGL)
> 5. 프로젝트 옵션 수정 (프로젝트 옵션 -> parameters -> linker에서 -lopengl32 -lfreeglut -lglu32 추가  
> [참고 링크](https://www.youtube.com/watch?v=8Qkpaewj-7Y)
***
## 프로그램 실행과정
  - ![프로그램 작동 사진](https://github.com/ETKorea/Shared-data/blob/main/teapot.png)
***
## 소감
java script로만 그래프를 짜던 그래픽을 이번에는 c++언어로 작성하여보았습니다. OpenGL로 하면서 이전과 가장 다르게 느껴졌던 것은 여러 좌표를 이용해서 그리던 일이 함수하나로 주전자를 그릴 수 있었다는 점입니다. 작업을 하면서 헤드를 추가하는 방법을 찾는게 가장 어려웠지만 위의 설치과정을 보며 작업을 하였습니다. 함수의 형태가 WebGL과 다르지않아 익숙해서 코드를 작성하는 것은 쉽게할 수 있었습니다. C++로도  OpenGL이 가능하다면 C언어로도 가능한지가 궁금하였고 다양한 언어로 돌아가는 그래픽을 보며 프로그램에 맞는 언어를 선택하는 것도 중요할 것 같다는 생각이 들었습니다.
