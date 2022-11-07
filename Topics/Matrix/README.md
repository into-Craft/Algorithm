# Matrix ( 행렬 )

## 0. 개요

- 행렬: 2차원 배열
  - 관련 유형: 동적 프로그래밍, 그래프 탐색
  - 행렬을 그래프 탐색에 사용하는 경우는 이번 장에서 제외(그래프 파트에서 다룸)

## 1. 코너 케이스

- 빈 행렬
- 1 x 1 행렬
- 행 또는 열이 1개만 있는 경우

## 2. 테크닉

### (1) Creating an empty N x M matrix

- 그래프 탐색이나 동적 프로그래밍에서, 대부분 원본 행렬의 복사본, 같은 크기의 빈 행렬을 만든다. 빈행렬, 복사본을 만드는데 익숙해지자.

```python3
# 0으로 초기화
[[0 for _ in range(len(matrix[0]))] for _ in range(len(matrix))]
# 복사
[row[:] for row in matrix]
```

- 초기화, 복사를 잘못하면 값이 꼬일 수 있어서 조심해야 한다.

### (2) Transposing a matrix

- 스도쿠 등 행렬을 모델링 한 게임에서, 승리(clear) 조건을 확인하기 위해 전치(transpose)를 사용한다. 전치를 하는 방법에 익숙해지자.

```python3
zip(*matrix)
```

## 3. LeetCode

### (1) Essential

- Set Matrix Zeroes

- Sprial Matrix

### (2) Recommended

- Rotate Image

- Valid Sudoku

## 4. 출처

- [Matrix cheatsheet for coding interviews
](https://www.techinterviewhandbook.org/algorithms/matrix/)
