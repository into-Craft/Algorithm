# Sorting
> 데이터를 특정 기준으로 정렬하는 방법 <br>

![alt text](https://www.equestionanswers.com/c/images/sorting-objects.png)

### 특징
---
- 다양한 방법이 있지만, 효과적인 알고리즘은 O(n lgn) 복잡도를 갖는다.
- 정렬 알고리즘에서 고려할 부분들
<br>1. 시간복잡도, 공간복잡도
<br>2. 안정 (Stability) 
<br>3. 재귀 여부
<br>4. 비교 방법

### 종류
---
1. Selection Sort
 : O(n^2), i번째에 들어갈 요소를 골라서 swap
2. Bubble Sort
 : O(n^2), 좌/우 요소를 비교해서, swap
3. Insertion Sort
 : O(n^2), i번째가 어디로 들어가야하는 지 파악해서 insert
4. Merge Sort
 : O(n lgn), 무수히 쪼갠 후, 합쳐 나가는 방법
5. Quick Sort
 : O(n lgn), pivot 을 기준으로 정렬
6. Heap Sort
 : O(n lgn), heap 구조에 insert 를 해서 정렬
7. Radix Sort
 : O(kn), 숫자 자리수에 맞춰서 정렬

 # Searching
> 특정 데이터를 찾는 방법 <br>

![alt text](https://media.geeksforgeeks.org/wp-content/cdn-uploads/Binary-Search.png)

### 특징
---
- 일반적으로 찾는 방식은 O(n)
- 정렬된 데이터의 경우, 다양한 기법으로 O(lg n) 복잡도

### 종류
---
1. Linear Search
 : O(n), 전체 순회
2. Binary Search
 : O(lg n), 절반을 기준으로 다음 영역을 판단 및 순회