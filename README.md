# cpp_study
cpp study repository

# C++ in vscode
vscode에서 C++을 사용하기 위한 기본 환경설정을 정리하였습니다.
참고 영상은 [여기](https://www.youtube.com/watch?v=3-PD_AUSOLM&t=1s)

### 주요사항
* vscode 에서 ctrl + shift + X 해서 C/C++ 다운(젤 위에 뜬다).
* [minGW](https://sourceforge.net/projects/mingw/)에서 프로그램 다운로드 및 설치.
    * **Note**: 중간에 체크할 항목들 영상에서 확인하기. 
* `시스템 환경 변수 편집` 에서 Path 항목에 `C:\MinGW\bin` 을 추가해주기.
여기까지 하면 프로그램 다운로드와 환경 변수 설정까지는 끝는 것이다. \
* 이제 소스코드를 만들어준다.
* ctrl + shift + P 해서, `Tasks: configure Default Build Task` 해준다. 
* 이제, `.vscode` 라는 폴더가 생기고, `c_cpp_properties.json` 과 `tasks.json` 파일이 생긴다. 
* tasks.json 파일을 아래와 같이 바꿔준다.
```json
{
	"version": "2.0.0",
	"windows": {
        "options": {
            "shell": {
                "executable": "cmd.exe",
                "args": [
                    "/C",
                    "\"C:/Program Files (x86)/Microsoft Visual Studio/2019/Enterprise/Common7/Tools/VsDevCmd.bat\"",
                    "&&"
                ]
            }
        }
    },
	"tasks": [
		{
			"type": "shell",
			"label": "C/C++: cl.exe build active file",
			"command": "cl.exe",
			"args": [
				"/Zi",
				"/EHsc",
				"/nologo",
				"/Fe${fileDirname}\\${fileBasenameNoExtension}.exe",
				"${file}"
			],
			"options": {
				"cwd": "${fileDirname}"
			},
			"problemMatcher": [
				"$msCompile"
			],
			"group": {
				"kind": "build",
				"isDefault": true
			},
			"detail": "compiler: cl.exe"
		}
	]
}
```
여담: 근데, 위에 json 파일이 원래 영상에서 제공한 것과는 다른 파일이다. 처음에 위에 json 파일로 잘 안돼서 찾아봤던 것인데, 결론적으로 .vscode를 루트폴더에 놔야 컴파일이 문제없이 되는 것 같다. 아마도.. \ 
Keyboard shortcut을 해놔서 `ctrl+alt+C` 하면 `Run Build Task`가 실행될 것이다. 정석은 `ctrl+shift+P` 한 후에, 바로 `Run Build Task` 하는 것이다.

## 백준 문제풀이
[C++ 배우기(101-150)](https://www.acmicpc.net/workbook/view/568)

## C++ compile in linux
g++ 컴파일러를 사용해서 linux 상에서 c++ 코드를 컴파일 할 수 있다.

### install
```
sudo apt-get install g++
```

### compile
`p1.cpp` 라는 소스코드가 있다고 해보자.
```sh
# method
g++ [파일명]
# 생성 파일명을 지정하는 경우
g++ [파일명] -o [생성 파일명]

# example
g++ p1.cpp			# a.out
g++ p1.cpp -o p1	# p1

```

### run
```
./a.out
```
실행파일이 p1이라면 당연히
```
./p1
```

### TODO
* -o 이외에도 g++에 다른 옵션이 많다. 일단 cpp 공부하는데는 이정도면 충분하니 나중에 공부해 보도록 하자.

## References
### 230828
* [C++ sort algorithm](https://blockdmask.tistory.com/178) 
* [C++ 어레이에서 요소의 인덱스 찾기](https://www.techiedelight.com/ko/find-index-of-an-element-in-array-cpp/)
* [C++ 배열 복사하는 방법](https://codechacha.com/ko/cpp-copy-array/)
* [백준 2822번 점수 계산](https://jaimemin.tistory.com/843)
* [C++ STL Vector 사용법과 예제코드](https://cocoon1787.tistory.com/244)
