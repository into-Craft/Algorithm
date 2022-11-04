# Array
> 같은 타입의 요소를 연속적으로 지니는 자료구조

![alt text](https://www.guru99.com/images/1/102319_0559_ArrayinData1.png)

### 특징
---
- O(1) 복잡도로 메모리에 접근할 수 있습니다.
- 요소 추가, 삭제는 한칸씩 요소 위치를 변경하는 메모리 재배치가 필요합니다.

### 관련 용어
---
1. Index: 요소가 배열 내에 위치한 번호
1. SubArray: 연속적인 Index로 구성된 배열
2. SubSequence: 일부 요소들을 제거한 배열

### 시간 복잡도
---
- Access: O(1)
- Search: O(n) / O(lg n)
- Insert: O(n)
- Remove: O(n)

일반적으로 배열 내 요소 탐색은 요소 하나하나 비교해야해서 O(n) 복잡도를 갖습니다.<br>
하지만, 정렬된 배열에선 binary search와 같은 탐색법을 이용해 O(lg n) 복잡도로 낮출 수 있습니다.

### 관련 기법
---
> <b>Sliding window</b>
<br>: 시작점과 끝점을 같은 방향으로 이동시켜서 SubArray를 구성하는 방법<br>
<br><b>Backward Iteration</b>
<br>: 거꾸로 메모리를 참조하는 방법<br>
<br><b>Sorting</b>
<br>: 메모리 요소들을 정렬하는 방법<br>