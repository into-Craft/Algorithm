# Hash Table
> Key와 Value를 연결하는 추상 자료 구조 <br>

![alt text](https://upload.wikimedia.org/wikipedia/commons/thumb/7/7d/Hash_table_3_1_1_0_1_0_0_SP.svg/630px-Hash_table_3_1_1_0_1_0_0_SP.svg.png)

### 특징
---
- Hash 함수를 이용해 배열의 index를 얻습니다. 해당 index에 value를 저장합니다.
- Key값이 다르더라도 같은 index가 나오는 Hash 충돌 현상이 발생합니다.

### 관련 용어
---
1. Hash 함수: Key에서 index를 얻어내는 함수 (Ex. MD-6, SHA-1)
2. Chaining: 같은 Hash를 갖는 목록을 만들어 Hash 충돌 해결하는 기법
3. Open Addressing: index를 순회하며 비어있는 Bucket에 Value를 넣어 Hash 충돌 해결하는 기법

### 시간 복잡도
---
- Access: O(-), Hash 함수 성능에 비례합니다.
- Search: O(1)
- Insert: O(1)
- Remove: O(1)

Hash 충돌이 적을수록 1에 가까워집니다. 충돌이 발생할수록, O(n)에 가깝게 증가합니다.