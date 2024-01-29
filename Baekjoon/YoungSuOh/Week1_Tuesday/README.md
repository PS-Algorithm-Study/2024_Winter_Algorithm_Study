# 13305번 문제 해결 과정 및 피드백

## 초기 아이디어
- **도로 및 도시 정보 저장:** `arr1`에 도로 정보, `arr2`에 도시 정보를 저장
- **최소 가격 도시 설정:** 가장 기름값이 싼 도시의 인덱스(`start`)를 설정하고 시작
- **누적 거리 계산:** `temp` 변수를 사용하여 도시 간 이동 거리를 누적시킴
- **가격 비교 및 이동:** 먼저 도시 사이의 거리를 `temp` 로 누적시킨 다음, 다음 도시의 기름값보다 `start`의 도시가 더 싸다면, 그 다음 도시로 진행을 한다. 만약 `start`의 도시보다 더 싼 도시가 나온다면, 누적 거리인 `temp` 와 `start`도시의 기름값을 곱한 후, `start`를 현재 다음 index로, `temp` 는 0으로 초기화 시켜준다. 

## 문제점 및 깨달음
- **자료형의 범위 문제:** 롱박사를 아시나요의 문제였다. 왜냐하면 문제의 변수가 최대 10억이기 때문에, 변수의 자료형을 `int`로 박아버리면 나중에 범위가 벗어낫을 때, 음수로 전환이 되어 틀렸다고 나올 수 밖에 없다.
- **코드 복잡성:** 어렵지 않은 Greedy 알고리즘이지만, 너무 어렵게 코드를 짰다.

## 해결
- `long long` 자료형을 사용하여 변수 범위 문제 해결.
- Algorithm 헤더파일의 `min` 함수를 활용하여 코드를 간소화하고, 효율적으로 개선.


# 13549번 문제 해결 과정 및 피드백

## 초기 아이디어
- 보자마자 bfs문제라는 생각이 들었다.
- 그 이유는 destination까지 가는 경로가 다양하고, 그 경로마다의 경우의 수를 dest까지, 즉 graph의 끝까지 탐색해야하기 때문이다.
- bfs를 돌릴때 배열의 범위도 고려했고, 기존 거리보다 거리가 멀어지면 그 경로는 탈락시켰다.
- 그 다음은 3가지의 경우의 수를 큐에 담으면서 배열인 arr에 최소 거리 정보를 담도록 하였다.

## 문제점 및 깨달음
- 앞선 초기 아이디어의 초기 아이디어가 완전히 틀린 사고 방식이다. 실제 테스트 케이스의 출력이 나오는 과정은 5에서 4로 1소모하여 이동 후, 4*2=8, 8*2=16 으로 0초만에 이동 후, 다시 16에서 17로 1를 소모하는 것이 정답이므로 내가 말한 방식은 완전히 틀린 방식이다.
- bfs로 계속 코딩을 진행해봤는데, 틀렸다고 나온다.

## 해결
- 아직 미해결


## 피드백
- 코딩 실력 향상을 위해서는 지속적인 연습과 복습이 필요
- 문제 해결 시 자료형의 범위와 코드 간결성을 고려하는 것이 중요함을 인식
