# solved.ac
solved.ac 문제풀이 과정에서 있었던 이슈나 개념 등을 정리한 페이지입니다.

## c++의 입출력 속도를 빠르게 하는 방법
백준 11659번 문제는 겉보기엔 간단하지만, 구간합 개념과 입출력 지연시간을 최소화하여야 실행시간 1초를 맞출 수 있다.
C++에서 입출력 실행시간을 줄이는 방법은 다음과 같다.
```cpp
ios_base::sync_with_stdio(false);
cout.tie(NULL);
cin.tie(NULL);
```
main 함수 초반에 위와 같이 작성해 주고, 추가적으로 개행문자에 `endl` 대신 `'\n'` 을 사용해주면 된다. \\
참고자료는 [여기](https://velog.io/@hayounsong/%EB%B0%B1%EC%A4%80-11659%EB%B2%88%EA%B5%AC%EA%B0%84-%ED%95%A9-%EA%B5%AC%ED%95%98%EA%B8%B0-4-C-%ED%92%80%EC%9D%B4)
