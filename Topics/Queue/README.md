# Queue

## 1. Introduction

- queue: linear collection of elemnets
- operation: enqueue, dequeue
- FIFO(First In, First Out)
- end of the sequence(= back, rear, tail): elements are added(enqueue)
- head of the sequence(= front): elements are removed
- BFS(Breadth First Search) is commonly implented by queues

## 2. [Python] queue.queue vs collections.deque

- 일반적으로 알고리즘 문제를 풀 때는 collections.dequeue (자료구조로서의 큐) 를 사용한다
  - deque: double-ended queueu
  - internally implented double linked list
- queue.queue 는 자료구조를 목적이 아니어서, 연산자가 충분하지 않다. 여러 스레드가 있고, 스레드간의 통신을 위해서 사용하기 위해 구현되었다.
- 참고 링크(stackoverflow): [Link](https://stackoverflow.com/questions/717148/queue-queue-vs-collections-deque)

## 3. [Python] collections.dequeue time complexity

|Operation|Average|Worst|
|---------|-------|-----|
|Copy|O(n)|O(n)|
|append|O(1)|O(1)|
|appendleft|O(1)|O(1)|
|pop|O(1)|O(1)|
|popleft|O(1)|O(1)|
|extend|O(k)|O(k)|
|extendleft|O(k)|O(k)|
|rotate|O(k)|O(k)|
|remove|O(n)|O(n)|

- looking ate the middle is slow
- adding or removing from the middle is slow
- 참고 링크(wiki.python.org): [Link](https://wiki.python.org/moin/TimeComplexity)

## 4. 인터뷰에서 주의 할 점

- 대부분의 언어에서 큐 자료형은 built-in이 아니다. 파이썬 같은 경우에는 list 를 사용해서 queue 라고 가정하는 경우가 있는데, enqueue operation을 할 때 O(n) 시간이 소요되어 비효율적이다. 이 경우 면접관에게 list 를 효율적인 queue 자료형으로 가정한다고 말을 하는 편이 좋다.

## 5. 코너 케이스

- Empty Queue
- Queue with one item
- Queue with two items

## 6. LeetCode

### (1) Essential Questions

- [Implement Stack Using Queues](https://leetcode.com/problems/implement-stack-using-queues)

### (2) Recommended Questions

- [Implement Queue using Stacks](https://leetcode.com/problems/implement-queue-using-stacks)
- [Design Circular Queue](https://leetcode.com/problems/design-circular-queue)

## 7. 참고

- [Queue cheatsheet for coding interviews](https://www.techinterviewhandbook.org/algorithms/queue/)
