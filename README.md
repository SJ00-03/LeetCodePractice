# LeetCodePractice

# C/Python 37일 학습 기록 — 방산·로봇 취업 준비

> 목표: C와 Python 기본기를 복구하고, LeetCode 문제풀이와 로컬 프로젝트를 통해 방산/로봇 직무에 필요한 구현력, 데이터 처리력, 신호 분석 감각을 만든다.

---

```text
1. 개념 복습 30분
2. 예제 코드 직접 타이핑 30분
3. LeetCode 문제풀이 40~60분
4. 로컬 실습 30~60분
5. 오늘 배운 내용 README에 체크 및 정리
```
---

## 전체 목표

### C 목표

- [ ] 기본 문법, 배열, 함수 사용 가능
- [ ] 포인터와 배열의 관계 설명 가능
- [ ] 문자열이 `char` 배열과 `\0`으로 구성된다는 점 이해
- [ ] 구조체로 센서/상태 데이터를 표현 가능
- [ ] `malloc`, `free`를 사용한 동적 메모리 관리 가능
- [ ] 파일 입출력으로 측정 데이터 분석 가능
- [ ] 비트 연산으로 상태 플래그 처리 가능

### Python 목표

- [ ] 기본 문법, 자료구조, 함수 사용 가능
- [ ] 파일 입출력과 예외 처리 가능
- [ ] 객체지향 기본 사용 가능
- [ ] NumPy로 벡터/행렬 계산 가능
- [ ] Matplotlib으로 그래프 출력 가능
- [ ] Pandas로 CSV 데이터 분석 가능
- [ ] SciPy로 컨볼루션, FFT, 필터 기초 실습 가능

### 방산/로봇 연결 목표

- [ ] C로 센서 데이터 구조체 작성 가능
- [ ] C로 센서 데이터 CSV 생성 가능
- [ ] Python으로 센서 데이터 분석 가능
- [ ] 노이즈, 이상치, 필터링 개념을 코드로 확인 가능
- [ ] 간단한 2D 위치 업데이트 시뮬레이션 가능
- [ ] PID 제어의 기본 흐름을 코드로 구현 가능

---

## 저장소 구조 추천

```text
.
├── README.md
├── c/
│   ├── day01_basic/
│   ├── day02_condition_loop/
│   ├── day03_array/
│   ├── day04_matrix/
│   ├── day05_function/
│   ├── day06_array_function/
│   ├── day08_pointer/
│   ├── day10_string/
│   ├── day12_struct/
│   ├── day13_dynamic_memory/
│   ├── day14_file_io/
│   ├── day30_data_analyzer/
│   └── day36_sensor_generator/
├── python/
│   ├── day15_basic/
│   ├── day16_condition_loop/
│   ├── day17_list/
│   ├── day18_dict_set/
│   ├── day19_string/
│   ├── day20_function_exception/
│   ├── day22_oop/
│   ├── day23_numpy/
│   ├── day24_linalg/
│   ├── day25_matplotlib/
│   ├── day26_pandas/
│   ├── day27_scipy_signal/
│   ├── day28_fft_filter/
│   ├── day29_signal_analyzer/
│   ├── day33_sensor_analysis/
│   ├── day34_robot_2d_position/
│   ├── day35_pid_intro/
│   └── day36_sensor_analysis/
├── data/
├── results/
└── notes/
```

---

# 30일 기본 스케줄

---

## Day 01 — C 기본문법

### 목표

C의 입출력, 변수, 자료형, 연산자를 복구한다.

### 개념

- [ ] `main()` 함수 구조
- [ ] `printf`
- [ ] `scanf`
- [ ] `int`, `float`, `double`, `char`
- [ ] 산술 연산자
- [ ] 관계 연산자
- [ ] 논리 연산자
- [ ] 형 변환

### LeetCode

- [ ] [2235. Add Two Integers](https://leetcode.com/problems/add-two-integers/)
- [ ] [2413. Smallest Even Multiple](https://leetcode.com/problems/smallest-even-multiple/)
- [ ] [2469. Convert the Temperature](https://leetcode.com/problems/convert-the-temperature/)

### 로컬 실습

- [ ] 두 정수를 입력받아 사칙연산 출력
- [ ] 반지름을 입력받아 원의 넓이 계산
- [ ] 전압 `V`, 저항 `R`을 입력받아 전류 `I = V/R` 계산

---

## Day 02 — C 조건문과 반복문

### 목표

분기와 반복을 이용해 기본 문제를 해결한다.

### 개념

- [ ] `if`, `else if`, `else`
- [ ] `switch`
- [ ] `for`
- [ ] `while`
- [ ] `break`
- [ ] `continue`

### LeetCode

- [ ] [412. Fizz Buzz](https://leetcode.com/problems/fizz-buzz/)
- [ ] [1342. Number of Steps to Reduce a Number to Zero](https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero/)
- [ ] [1523. Count Odd Numbers in an Interval Range](https://leetcode.com/problems/count-odd-numbers-in-an-interval-range/)

### 로컬 실습

- [ ] 점수를 입력받아 학점 출력
- [ ] 1부터 `n`까지 합 구하기
- [ ] 구구단 출력
- [ ] 소수 판별

---

## Day 03 — C 배열 1

### 목표

1차원 배열로 여러 데이터를 처리한다.

### 개념

- [ ] 배열 선언
- [ ] 배열 초기화
- [ ] 인덱스 접근
- [ ] 배열과 반복문
- [ ] 배열 크기 관리

### LeetCode

- [ ] [1480. Running Sum of 1d Array](https://leetcode.com/problems/running-sum-of-1d-array/)
- [ ] [1920. Build Array from Permutation](https://leetcode.com/problems/build-array-from-permutation/)
- [ ] [1470. Shuffle the Array](https://leetcode.com/problems/shuffle-the-array/)

### 로컬 실습

- [ ] 정수 10개 입력받아 평균 구하기
- [ ] 배열에서 최댓값 찾기
- [ ] 배열에서 최솟값 찾기
- [ ] 배열 거꾸로 출력하기
- [ ] 샘플링된 신호 `x[n]`의 평균값 계산

---

## Day 04 — C 2차원 배열과 행렬

### 목표

2차원 배열과 중첩 반복문으로 행렬 형태 데이터를 처리한다.

### 개념

- [ ] 2차원 배열 선언
- [ ] 중첩 반복문
- [ ] 행렬 출력
- [ ] 행렬 덧셈
- [ ] 행렬 전치

### LeetCode

- [ ] [1672. Richest Customer Wealth](https://leetcode.com/problems/richest-customer-wealth/)
- [ ] [1582. Special Positions in a Binary Matrix](https://leetcode.com/problems/special-positions-in-a-binary-matrix/)
- [ ] [867. Transpose Matrix](https://leetcode.com/problems/transpose-matrix/)

### 로컬 실습

- [ ] 3x3 행렬 입력받아 출력
- [ ] 행렬 덧셈
- [ ] 행렬 전치
- [ ] 두 벡터의 내적 계산

---

## Day 05 — C 함수

### 목표

반복되는 코드를 함수로 분리한다.

### 개념

- [ ] 함수 선언
- [ ] 함수 정의
- [ ] 매개변수
- [ ] 반환값
- [ ] 지역 변수
- [ ] 전역 변수
- [ ] 값에 의한 호출

### LeetCode

- [ ] [136. Single Number](https://leetcode.com/problems/single-number/)
- [ ] [268. Missing Number](https://leetcode.com/problems/missing-number/)
- [ ] [169. Majority Element](https://leetcode.com/problems/majority-element/)

### 로컬 실습

- [ ] 두 수 중 큰 값을 반환하는 함수
- [ ] 배열 평균 함수
- [ ] 팩토리얼 함수
- [ ] 소수 판별 함수
- [ ] 전압과 저항을 받아 전류를 반환하는 함수

---

## Day 06 — C 배열 + 함수

### 목표

배열을 함수에 전달하고 배열 처리 함수를 작성한다.

### 개념

- [ ] 배열을 함수 인자로 전달
- [ ] 배열 크기를 함께 전달하는 이유
- [ ] 배열 원소 수정 함수
- [ ] 배열 합계/평균/최댓값 함수화

### LeetCode

- [ ] [283. Move Zeroes](https://leetcode.com/problems/move-zeroes/)
- [ ] [27. Remove Element](https://leetcode.com/problems/remove-element/)
- [ ] [26. Remove Duplicates from Sorted Array](https://leetcode.com/problems/remove-duplicates-from-sorted-array/)

### 로컬 실습

- [ ] 배열 합계 함수
- [ ] 배열 평균 함수
- [ ] 배열 최댓값 함수
- [ ] 배열 원소를 2배로 바꾸는 함수

### 반드시 구현

```c
double average(int arr[], int size);
```


---

## Day 07 — C 1주차 복습

### 목표

C 기본문법, 배열, 함수 문제를 종합 복습한다.

### LeetCode

- [ ] [88. Merge Sorted Array](https://leetcode.com/problems/merge-sorted-array/)
- [ ] [121. Best Time to Buy and Sell Stock](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/)
- [ ] [35. Search Insert Position](https://leetcode.com/problems/search-insert-position/)

### 로컬 실습

- [ ] 배열 평균 함수 다시 작성
- [ ] 배열 최댓값 함수 다시 작성
- [ ] 배열에서 특정 값 찾기 함수 작성
- [ ] 1주차 오답 코드 정리

### 반드시 구현

```c
int max_value(int arr[], int size);
double average(int arr[], int size);
int find_value(int arr[], int size, int target);
```

---

## Day 08 — C 포인터 1

### 목표

주소, 포인터, 역참조 개념을 이해한다.

### 개념

- [ ] 주소 연산자 `&`
- [ ] 역참조 연산자 `*`
- [ ] 포인터 변수
- [ ] 포인터로 원본 값 수정
- [ ] `NULL` 포인터 기본

### LeetCode

- [ ] [344. Reverse String](https://leetcode.com/problems/reverse-string/)
- [ ] [905. Sort Array By Parity](https://leetcode.com/problems/sort-array-by-parity/)

### 로컬 실습

- [ ] 변수 주소 출력
- [ ] 포인터로 변수 값 바꾸기
- [ ] `swap` 함수 구현

### 반드시 구현

```c
void swap(int *a, int *b);
```

---

## Day 09 — C 포인터 2: 배열과 포인터

### 목표

배열과 포인터의 관계를 이해한다.

### 개념

- [ ] 배열 이름과 주소
- [ ] `arr[i]`
- [ ] `*(arr + i)`
- [ ] 포인터 연산
- [ ] 포인터로 배열 순회

### LeetCode

- [ ] [977. Squares of a Sorted Array](https://leetcode.com/problems/squares-of-a-sorted-array/)
- [ ] [1295. Find Numbers with Even Number of Digits](https://leetcode.com/problems/find-numbers-with-even-number-of-digits/)
- [ ] [1089. Duplicate Zeros](https://leetcode.com/problems/duplicate-zeros/)

### 로컬 실습

- [ ] 포인터로 배열 출력
- [ ] 포인터로 배열 합 구하기
- [ ] 포인터로 배열 최댓값 찾기
- [ ] 포인터로 배열 원소 수정

### 반드시 설명할 수 있어야 하는 것

```c
arr[i] == *(arr + i)
```

---

## Day 10 — C 문자열 1

### 목표

C 문자열이 문자 배열이라는 점을 이해한다.

### 개념

- [ ] `char` 배열
- [ ] 문자열 끝의 `\0`
- [ ] `strlen`
- [ ] `strcmp`
- [ ] `strcpy`
- [ ] 문자열 입력 시 버퍼 크기 주의

### LeetCode

- [ ] [125. Valid Palindrome](https://leetcode.com/problems/valid-palindrome/)
- [ ] [242. Valid Anagram](https://leetcode.com/problems/valid-anagram/)
- [ ] [344. Reverse String](https://leetcode.com/problems/reverse-string/)

### 로컬 실습

- [ ] 문자열 길이 직접 구현
- [ ] 문자열 뒤집기
- [ ] 문자열에서 특정 문자 개수 세기

---

## Day 11 — C 문자열 2

### 목표

문자열 탐색, 비교, 빈도수 계산을 구현한다.

### 개념

- [ ] 문자열 탐색
- [ ] 문자열 비교
- [ ] 문자 빈도수
- [ ] ASCII 활용
- [ ] 공백 포함 문자열 처리

### LeetCode

- [ ] [387. First Unique Character in a String](https://leetcode.com/problems/first-unique-character-in-a-string/)
- [ ] [14. Longest Common Prefix](https://leetcode.com/problems/longest-common-prefix/)
- [ ] [58. Length of Last Word](https://leetcode.com/problems/length-of-last-word/)

### 로컬 실습

- [ ] 두 문자열 비교 직접 구현
- [ ] 문자열에서 공백 개수 세기
- [ ] 알파벳 빈도수 배열 만들기

---

## Day 12 — C 구조체

### 목표

여러 데이터를 하나의 의미 있는 단위로 묶어 관리한다.

### 개념

- [ ] `struct`
- [ ] 구조체 변수
- [ ] 구조체 배열
- [ ] 구조체 포인터
- [ ] `.` 연산자
- [ ] `->` 연산자
- [ ] `typedef`

### LeetCode

- [ ] [206. Reverse Linked List](https://leetcode.com/problems/reverse-linked-list/)
- [ ] [21. Merge Two Sorted Lists](https://leetcode.com/problems/merge-two-sorted-lists/)
- [ ] [83. Remove Duplicates from Sorted List](https://leetcode.com/problems/remove-duplicates-from-sorted-list/)

### 로컬 실습

- [ ] 학생 구조체 만들기
- [ ] 학생 5명의 평균 점수 계산
- [ ] 복소수 구조체 만들기
- [ ] 복소수 덧셈/곱셈 구현

### 전공 연결 예시

```c
typedef struct {
    double real;
    double imag;
} Complex;
```

---

## Day 13 — C 동적 메모리

### 목표

실행 중 필요한 크기의 메모리를 할당하고 해제한다.

### 개념

- [ ] `malloc`
- [ ] `calloc`
- [ ] `realloc`
- [ ] `free`
- [ ] 힙 메모리
- [ ] 메모리 누수
- [ ] use-after-free
- [ ] `NULL` 체크

### LeetCode

- [ ] [1. Two Sum](https://leetcode.com/problems/two-sum/)
- [ ] [66. Plus One](https://leetcode.com/problems/plus-one/)
- [ ] [977. Squares of a Sorted Array](https://leetcode.com/problems/squares-of-a-sorted-array/)
- [ ] [118. Pascal's Triangle](https://leetcode.com/problems/pascals-triangle/)

### 로컬 실습

- [ ] `n`개 정수 동적 배열 만들기
- [ ] 동적 배열 평균 계산
- [ ] 동적 배열 크기 늘리기
- [ ] `free` 누락 없이 메모리 정리

### 반드시 구현

```c
int *arr = malloc(sizeof(int) * n);

if (arr == NULL) {
    return 1;
}

free(arr);
```
---

## Day 14 — C 파일 입출력 + 복습

### 목표

파일에서 데이터를 읽고 결과를 파일에 저장한다.

### 개념

- [ ] `FILE *`
- [ ] `fopen`
- [ ] `fclose`
- [ ] `fprintf`
- [ ] `fscanf`
- [ ] `fgets`
- [ ] `fputs`

### LeetCode 복습

- [ ] [141. Linked List Cycle](https://leetcode.com/problems/linked-list-cycle/)
- [ ] [234. Palindrome Linked List](https://leetcode.com/problems/palindrome-linked-list/)

### 로컬 실습

- [ ] `data.txt`에 숫자 저장
- [ ] `data.txt`에서 숫자 읽기
- [ ] 평균, 최댓값, 최솟값 계산
- [ ] `result.txt`에 결과 저장

---

## Day 15 — Python 기본문법

### 목표

Python의 기본 입출력, 변수, 자료형, 연산자를 복구한다.

### 개념

- [ ] 변수
- [ ] `int`, `float`, `str`, `bool`
- [ ] `print`
- [ ] `input`
- [ ] 형 변환
- [ ] 연산자
- [ ] 들여쓰기

### LeetCode

- [ ] [2235. Add Two Integers](https://leetcode.com/problems/add-two-integers/)
- [ ] [2469. Convert the Temperature](https://leetcode.com/problems/convert-the-temperature/)
- [ ] [2413. Smallest Even Multiple](https://leetcode.com/problems/smallest-even-multiple/)

### 로컬 실습

- [ ] 전압, 저항 입력받아 전류 계산
- [ ] 원의 넓이 계산
- [ ] 섭씨-화씨 변환

---

## Day 16 — Python 조건문과 반복문

### 목표

Python으로 분기와 반복 문제를 해결한다.

### 개념

- [ ] `if`
- [ ] `elif`
- [ ] `else`
- [ ] `for`
- [ ] `while`
- [ ] `range`
- [ ] `break`
- [ ] `continue`

### LeetCode

- [ ] [412. Fizz Buzz](https://leetcode.com/problems/fizz-buzz/)
- [ ] [1342. Number of Steps to Reduce a Number to Zero](https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero/)
- [ ] [1523. Count Odd Numbers in an Interval Range](https://leetcode.com/problems/count-odd-numbers-in-an-interval-range/)

### 로컬 실습

- [ ] 학점 계산기
- [ ] 구구단
- [ ] 소수 판별
- [ ] 1부터 `n`까지 합

---

## Day 17 — Python list

### 목표

리스트를 이용해 순서가 있는 데이터를 처리한다.

### 개념

- [ ] `list`
- [ ] 인덱싱
- [ ] 슬라이싱
- [ ] 리스트 순회
- [ ] 리스트 컴프리헨션

### LeetCode

- [ ] [1480. Running Sum of 1d Array](https://leetcode.com/problems/running-sum-of-1d-array/)
- [ ] [1431. Kids With the Greatest Number of Candies](https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/)
- [ ] [1470. Shuffle the Array](https://leetcode.com/problems/shuffle-the-array/)
- [ ] [1672. Richest Customer Wealth](https://leetcode.com/problems/richest-customer-wealth/)

### 로컬 실습

- [ ] 리스트 평균
- [ ] 리스트 분산
- [ ] 리스트 표준편차
- [ ] 양수만 골라 새 리스트 만들기

---

## Day 18 — Python dict/set

### 목표

딕셔너리와 집합으로 빈도수, 중복, key-value 데이터를 처리한다.

### 개념

- [ ] `dict`
- [ ] `set`
- [ ] key-value 구조
- [ ] 중복 제거
- [ ] 빈도수 계산

### LeetCode

- [ ] [217. Contains Duplicate](https://leetcode.com/problems/contains-duplicate/)
- [ ] [1. Two Sum](https://leetcode.com/problems/two-sum/)
- [ ] [242. Valid Anagram](https://leetcode.com/problems/valid-anagram/)
- [ ] [349. Intersection of Two Arrays](https://leetcode.com/problems/intersection-of-two-arrays/)

### 로컬 실습

- [ ] 학생 이름-점수 딕셔너리 만들기
- [ ] 문자열 문자 빈도수 계산
- [ ] 중복값 제거
- [ ] 가장 많이 나온 문자 찾기

---

## Day 19 — Python 문자열

### 목표

문자열 처리 함수를 활용해 텍스트 데이터를 다룬다.

### 개념

- [ ] 문자열 인덱싱
- [ ] 문자열 슬라이싱
- [ ] `split`
- [ ] `join`
- [ ] `replace`
- [ ] `strip`
- [ ] f-string

### LeetCode

- [ ] [125. Valid Palindrome](https://leetcode.com/problems/valid-palindrome/)
- [ ] [387. First Unique Character in a String](https://leetcode.com/problems/first-unique-character-in-a-string/)
- [ ] [58. Length of Last Word](https://leetcode.com/problems/length-of-last-word/)
- [ ] [14. Longest Common Prefix](https://leetcode.com/problems/longest-common-prefix/)

### 로컬 실습

- [ ] 문장을 단어 단위로 나누기
- [ ] CSV 형태 문자열 파싱
- [ ] 파일명에서 확장자 추출
- [ ] 문자열에서 숫자만 추출

---

## Day 20 — Python 함수 + 예외 처리

### 목표

함수화와 예외 처리로 안정적인 코드를 작성한다.

### 개념

- [ ] 함수 정의
- [ ] 매개변수
- [ ] 반환값
- [ ] 기본 인자
- [ ] `try`
- [ ] `except`
- [ ] `raise`

### LeetCode

- [ ] [13. Roman to Integer](https://leetcode.com/problems/roman-to-integer/)
- [ ] [9. Palindrome Number](https://leetcode.com/problems/palindrome-number/)
- [ ] [171. Excel Sheet Column Number](https://leetcode.com/problems/excel-sheet-column-number/)

### 로컬 실습

- [ ] 평균 함수
- [ ] 분산 함수
- [ ] 표준편차 함수
- [ ] 숫자가 아닌 입력 예외 처리
- [ ] 파일이 없을 때 예외 처리

---

## Day 21 — Python stack/queue

### 목표

스택과 큐의 동작 원리를 구현한다.

### 개념

- [ ] stack
- [ ] queue
- [ ] `list` 기반 stack
- [ ] `collections.deque`

### LeetCode

- [ ] [20. Valid Parentheses](https://leetcode.com/problems/valid-parentheses/)
- [ ] [682. Baseball Game](https://leetcode.com/problems/baseball-game/)
- [ ] [225. Implement Stack using Queues](https://leetcode.com/problems/implement-stack-using-queues/)
- [ ] [232. Implement Queue using Stacks](https://leetcode.com/problems/implement-queue-using-stacks/)

### 로컬 실습

- [ ] 스택 직접 구현
- [ ] 큐 직접 구현
- [ ] 괄호 검사기 만들기

---

## Day 22 — Python 객체지향

### 목표

클래스와 객체로 데이터를 묶고 기능을 메서드로 표현한다.

### 개념

- [ ] class
- [ ] object
- [ ] `__init__`
- [ ] instance variable
- [ ] method
- [ ] `__str__`
- [ ] 상속 기초

### LeetCode

- [ ] [705. Design HashSet](https://leetcode.com/problems/design-hashset/)
- [ ] [706. Design HashMap](https://leetcode.com/problems/design-hashmap/)
- [ ] [1603. Design Parking System](https://leetcode.com/problems/design-parking-system/)

### 로컬 실습

- [ ] `Student` 클래스
- [ ] `Complex` 클래스
- [ ] `Signal` 클래스

### 예시

```python
class Signal:
    def __init__(self, samples, fs):
        self.samples = samples
        self.fs = fs

    def mean(self):
        return sum(self.samples) / len(self.samples)
```

---

## Day 23 — NumPy 1: 배열과 벡터

### 목표

NumPy 배열로 벡터 연산을 수행한다.

### 개념

- [ ] `np.array`
- [ ] 벡터 연산
- [ ] 인덱싱
- [ ] 슬라이싱
- [ ] 브로드캐스팅
- [ ] `np.arange`
- [ ] `np.linspace`

### LeetCode 보조

- [ ] [121. Best Time to Buy and Sell Stock](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/)
- [ ] [303. Range Sum Query - Immutable](https://leetcode.com/problems/range-sum-query-immutable/)

### 로컬 실습

- [ ] NumPy 배열 만들기
- [ ] 배열 평균, 최댓값, 최솟값
- [ ] 두 벡터의 합
- [ ] 두 벡터의 내적
- [ ] 시간축 `t` 만들기

---

## Day 24 — NumPy 2: 행렬과 선형대수

### 목표

행렬 연산과 연립방정식 풀이를 실습한다.

### 개념

- [ ] 2차원 배열
- [ ] 행렬 곱
- [ ] 전치 행렬
- [ ] 역행렬
- [ ] `np.linalg.solve`

### LeetCode 보조

- [ ] [566. Reshape the Matrix](https://leetcode.com/problems/reshape-the-matrix/)
- [ ] [867. Transpose Matrix](https://leetcode.com/problems/transpose-matrix/)
- [ ] [1572. Matrix Diagonal Sum](https://leetcode.com/problems/matrix-diagonal-sum/)

### 로컬 실습

- [ ] 행렬 덧셈
- [ ] 행렬 곱셈
- [ ] 전치 행렬
- [ ] 연립방정식 `Ax = b` 풀기
- [ ] 회로 방정식 형태 문제 만들기

---

## Day 25 — Matplotlib

### 목표

계산 결과를 그래프로 시각화한다.

### 개념

- [ ] `plt.plot`
- [ ] `plt.stem`
- [ ] `plt.scatter`
- [ ] `xlabel`
- [ ] `ylabel`
- [ ] `title`
- [ ] `grid`
- [ ] `legend`

### 로컬 실습

- [ ] `sin(t)` 그래프
- [ ] `cos(t)` 그래프
- [ ] `sin(t)`, `cos(t)` 겹쳐 그리기
- [ ] 이산 신호 stem plot
- [ ] RC 회로 충전 곡선 그리기

### 전공 연결 식

```text
v(t) = V(1 - e^(-t/RC))
```

---

## Day 26 — Pandas

### 목표

CSV 파일 데이터를 읽고 분석한다.

### 개념

- [ ] `DataFrame`
- [ ] `Series`
- [ ] CSV 읽기
- [ ] 열 선택
- [ ] 조건 필터링
- [ ] 평균, 최댓값, 최솟값
- [ ] 결측치 처리

### LeetCode Pandas

- [ ] LeetCode Pandas Study Plan 시작
- [ ] LeetCode 30 Days of Pandas 중 쉬운 문제 2~3개 풀이

### 로컬 실습

- [ ] CSV 파일 읽기
- [ ] 특정 열 평균 계산
- [ ] 전압 데이터 최댓값/최솟값 계산
- [ ] 시간-전압 데이터 그래프 그리기
- [ ] 결측치 있는 데이터 처리

---

## Day 27 — SciPy 1: 신호처리 기초

### 목표

SciPy로 컨볼루션과 기본 시스템 응답을 실습한다.

### 개념

- [ ] `scipy.signal`
- [ ] convolution
- [ ] impulse response
- [ ] step response
- [ ] transfer function 기본

### 로컬 실습

- [ ] 두 이산 신호의 컨볼루션
- [ ] 이동평균 필터
- [ ] impulse response 그리기
- [ ] step response 그리기

### 실습 신호

```text
x[n] = [1, 2, 3]
h[n] = [1, 1, 1]
y[n] = x[n] * h[n]
```

---

## Day 28 — SciPy 2: FFT와 필터

### 목표

시간 영역 신호를 주파수 영역에서 분석하고 필터를 적용한다.

### 개념

- [ ] FFT
- [ ] 주파수축
- [ ] 주파수 성분 확인
- [ ] 저역통과 필터
- [ ] 필터 전후 비교

### 로컬 실습

- [ ] 사인파 생성
- [ ] 두 주파수가 섞인 신호 생성
- [ ] FFT 수행
- [ ] 주파수 영역 그래프 출력
- [ ] 저역통과 필터 적용
- [ ] 필터 전후 비교

### 방산/로봇 연결

```text
레이다, 센서 신호, IMU 데이터, 엔코더 데이터, 모터 진동 데이터 분석과 연결된다.
```

---

## Day 29 — Python 신호 분석기 프로젝트

### 목표

Python으로 간단한 신호 분석 프로그램을 만든다.

### 구현 기능

- [ ] 샘플링 주파수 설정
- [ ] 시간축 생성
- [ ] 사인파 생성
- [ ] 잡음 추가
- [ ] 시간 영역 그래프 출력
- [ ] FFT 수행
- [ ] 주파수 영역 그래프 출력
- [ ] 간단한 필터 적용

### 사용하는 개념

- [ ] Python 함수
- [ ] NumPy
- [ ] Matplotlib
- [ ] SciPy
- [ ] FFT
- [ ] 필터
- [ ] 그래프 저장

### 결과물

```text
python/day29_signal_analyzer/signal_analyzer.py
results/time_domain.png
results/frequency_domain.png
results/filtered_signal.png
```
---

## Day 30 — C 측정 데이터 분석기 프로젝트

### 목표

C로 측정 데이터 파일을 읽고 통계값을 계산한다.

### 구현 기능

- [ ] 파일에서 데이터 읽기
- [ ] 동적 배열에 저장
- [ ] 평균 계산
- [ ] 최댓값 계산
- [ ] 최솟값 계산
- [ ] 결과 파일 저장

### 사용하는 개념

- [ ] C 함수
- [ ] 배열
- [ ] 포인터
- [ ] 동적 메모리
- [ ] 파일 입출력
- [ ] 구조체 선택

### 결과물

```text
c/day30_data_analyzer/data_analyzer.c
data/data.txt
results/result.txt
```

---

# 방산/로봇 취업 준비용 추가 7일

---

## Day 31 — C 비트 연산

### 목표

비트 연산으로 상태값과 플래그를 처리한다.

### 개념

- [ ] `&`
- [ ] `|`
- [ ] `^`
- [ ] `~`
- [ ] `<<`
- [ ] `>>`
- [ ] bit mask
- [ ] register 느낌 이해

### LeetCode

- [ ] [191. Number of 1 Bits](https://leetcode.com/problems/number-of-1-bits/)
- [ ] [190. Reverse Bits](https://leetcode.com/problems/reverse-bits/)
- [ ] [136. Single Number](https://leetcode.com/problems/single-number/)
- [ ] [338. Counting Bits](https://leetcode.com/problems/counting-bits/)

### 로컬 실습

- [ ] 특정 비트 켜기
- [ ] 특정 비트 끄기
- [ ] 특정 비트 토글
- [ ] 센서 상태 플래그 만들기

### 예시

```c
#define VOLTAGE_WARNING 0x01
#define TEMP_WARNING    0x02
#define SENSOR_ERROR    0x04
```

---

## Day 32 — C 구조체 + 비트 + 패킷

### 목표

센서 패킷을 구조체로 표현하고 상태 플래그를 처리한다.

### 개념

- [ ] 구조체로 센서 데이터 표현
- [ ] status flag
- [ ] packet parsing 기초
- [ ] 비트 마스크

### LeetCode 보조

- [ ] [231. Power of Two](https://leetcode.com/problems/power-of-two/)
- [ ] [342. Power of Four](https://leetcode.com/problems/power-of-four/)
- [ ] [461. Hamming Distance](https://leetcode.com/problems/hamming-distance/)

### 로컬 실습

센서 패킷 구조체 만들기.

```c
typedef struct {
    int id;
    double timestamp;
    double temperature;
    double voltage;
    unsigned int status_flags;
} SensorPacket;
```

---

## Day 33 — Python 센서 데이터 분석

### 목표

Python으로 센서 데이터를 생성하고 노이즈, 이동평균, 이상치를 분석한다.

### 개념

- [ ] CSV 데이터 읽기
- [ ] 이동평균
- [ ] 노이즈 제거
- [ ] 이상치 탐지
- [ ] 그래프 저장

### 로컬 실습

- [ ] 가짜 센서 데이터 생성
- [ ] 노이즈 추가
- [ ] 이동평균 필터 적용
- [ ] 필터 전후 그래프 비교
- [ ] 이상치 표시


---

## Day 34 — Python 로봇 기초: 2D 위치 계산

### 목표

속도와 시간 간격으로 2D 위치를 업데이트한다.

### 개념

- [ ] 좌표
- [ ] 속도
- [ ] 위치 업데이트
- [ ] 시간 간격 `dt`
- [ ] 이동 경로 시각화

### 로컬 실습

- [ ] `x, y` 위치를 시간에 따라 업데이트
- [ ] 속도 `vx, vy` 적용
- [ ] 이동 경로 그래프 출력

### 기본 식

```text
x_next = x_current + vx * dt
y_next = y_current + vy * dt
```
---

## Day 35 — Python 제어 기초: PID 맛보기

### 목표

목표값과 현재값의 오차를 이용해 간단한 제어 흐름을 구현한다.

### 개념

- [ ] 목표값
- [ ] 현재값
- [ ] 오차
- [ ] P 제어
- [ ] PI/PID 개념 맛보기

### 로컬 실습

- [ ] 목표 속도 설정
- [ ] 현재 속도 업데이트
- [ ] P 제어 적용
- [ ] 시간에 따른 오차 그래프 출력

### 기본 식

```text
error = target - current
control = Kp * error
```

---

## Day 36 — C/Python 통합 감각

### 목표

C로 센서 데이터를 만들고 Python으로 CSV를 읽어 분석한다.

이 날은 방산/로봇 취업 준비 관점에서 특히 중요하다. 실제 업무에서는 임베디드 보드나 센서 장비에서 C/C++ 계열로 데이터가 생성되고, Python/MATLAB 계열로 데이터를 분석하는 흐름이 자주 나온다.

### 실습 목표

- [ ] C로 센서 데이터 파일 생성
- [ ] Python으로 CSV 읽기
- [ ] 그래프 출력
- [ ] 평균/최댓값/최솟값 계산
- [ ] 이상치 표시
- [ ] 상태 플래그 해석

### 폴더 구조

```text
c/day36_sensor_generator/sensor_generator.c
python/day36_sensor_analysis/analyze_sensor.py
data/sensor_data.csv
results/sensor_stats.csv
results/voltage_plot.png
results/temperature_plot.png
```

---

### Step 1. C로 센서 데이터 생성

파일: `c/day36_sensor_generator/sensor_generator.c`

```c
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14159265358979323846
#define N 1000
#define FS 100.0

#define VOLTAGE_WARNING 0x01
#define TEMP_WARNING    0x02

static double uniform_noise(double amplitude) {
    double r = (double)rand() / RAND_MAX;
    return amplitude * (2.0 * r - 1.0);
}

int main(void) {
    FILE *fp = fopen("data/sensor_data.csv", "w");

    if (fp == NULL) {
        printf("Failed to open data/sensor_data.csv\n");
        return 1;
    }

    fprintf(fp, "time,voltage,current,temperature,status_flags\n");

    for (int i = 0; i < N; i++) {
        double t = i / FS;

        double voltage = 3.3 + 0.2 * sin(2.0 * PI * 1.0 * t) + uniform_noise(0.03);
        double current = 0.5 + 0.05 * sin(2.0 * PI * 0.5 * t) + uniform_noise(0.01);
        double temperature = 30.0 + 0.01 * i + uniform_noise(0.2);

        if (i == 250) {
            voltage += 0.8;
        }

        if (i == 700) {
            temperature += 5.0;
        }

        unsigned int status_flags = 0;

        if (voltage > 3.6) {
            status_flags |= VOLTAGE_WARNING;
        }

        if (temperature > 37.0) {
            status_flags |= TEMP_WARNING;
        }

        fprintf(fp, "%.4f,%.6f,%.6f,%.6f,%u\n",
                t, voltage, current, temperature, status_flags);
    }

    fclose(fp);
    printf("Generated data/sensor_data.csv\n");

    return 0;
}
```

컴파일 및 실행:

```bash
mkdir -p data results
mkdir -p c/day36_sensor_generator
mkdir -p python/day36_sensor_analysis

gcc c/day36_sensor_generator/sensor_generator.c -o c/day36_sensor_generator/sensor_generator -lm
./c/day36_sensor_generator/sensor_generator
```

---

### Step 2. Python으로 CSV 분석

파일: `python/day36_sensor_analysis/analyze_sensor.py`

```python
import pandas as pd
import matplotlib.pyplot as plt

VOLTAGE_WARNING = 0x01
TEMP_WARNING = 0x02


def has_flag(value: int, flag: int) -> bool:
    return (value & flag) != 0


def main() -> None:
    df = pd.read_csv("data/sensor_data.csv")

    numeric_cols = ["voltage", "current", "temperature"]
    stats = df[numeric_cols].agg(["mean", "max", "min", "std"])
    stats.to_csv("results/sensor_stats.csv")

    print("=== Sensor Statistics ===")
    print(stats)

    df["voltage_warning"] = df["status_flags"].apply(lambda x: has_flag(int(x), VOLTAGE_WARNING))
    df["temp_warning"] = df["status_flags"].apply(lambda x: has_flag(int(x), TEMP_WARNING))

    voltage_mean = df["voltage"].mean()
    voltage_std = df["voltage"].std()
    temp_mean = df["temperature"].mean()
    temp_std = df["temperature"].std()

    df["voltage_anomaly"] = (df["voltage"] - voltage_mean).abs() > 3.0 * voltage_std
    df["temp_anomaly"] = (df["temperature"] - temp_mean).abs() > 3.0 * temp_std

    print("\n=== Voltage Warning Rows ===")
    print(df[df["voltage_warning"]].head())

    print("\n=== Temperature Warning Rows ===")
    print(df[df["temp_warning"]].head())

    print("\n=== Voltage Anomaly Rows ===")
    print(df[df["voltage_anomaly"]].head())

    print("\n=== Temperature Anomaly Rows ===")
    print(df[df["temp_anomaly"]].head())

    plt.figure()
    plt.plot(df["time"], df["voltage"], label="voltage")
    voltage_anomaly_df = df[df["voltage_anomaly"]]
    plt.scatter(voltage_anomaly_df["time"], voltage_anomaly_df["voltage"], label="anomaly")
    plt.xlabel("Time [s]")
    plt.ylabel("Voltage [V]")
    plt.title("Voltage Signal")
    plt.grid(True)
    plt.legend()
    plt.savefig("results/voltage_plot.png", dpi=150)

    plt.figure()
    plt.plot(df["time"], df["temperature"], label="temperature")
    temp_anomaly_df = df[df["temp_anomaly"]]
    plt.scatter(temp_anomaly_df["time"], temp_anomaly_df["temperature"], label="anomaly")
    plt.xlabel("Time [s]")
    plt.ylabel("Temperature [degC]")
    plt.title("Temperature Signal")
    plt.grid(True)
    plt.legend()
    plt.savefig("results/temperature_plot.png", dpi=150)

    print("\nSaved results/sensor_stats.csv")
    print("Saved results/voltage_plot.png")
    print("Saved results/temperature_plot.png")


if __name__ == "__main__":
    main()
```

실행:

```bash
python python/day36_sensor_analysis/analyze_sensor.py
```

---

### Step 3. 확인할 결과

- [ ] `data/sensor_data.csv` 생성됨
- [ ] `results/sensor_stats.csv` 생성됨
- [ ] `results/voltage_plot.png` 생성됨
- [ ] `results/temperature_plot.png` 생성됨
- [ ] 전압 이상치가 표시됨
- [ ] 온도 이상치가 표시됨
- [ ] `status_flags`의 비트 마스크 의미를 설명할 수 있음

### Step 4. 오늘 반드시 설명할 수 있어야 하는 것

```text
1. C에서 CSV 파일을 어떻게 생성했는가?
2. 상태 플래그는 왜 비트 연산으로 표현했는가?
3. Python에서 Pandas로 CSV를 어떻게 읽었는가?
4. 평균, 최댓값, 최솟값, 표준편차를 어떻게 계산했는가?
5. 이상치 기준을 왜 평균 ± 3표준편차로 잡았는가?
6. C와 Python을 나누어 사용했을 때 장점은 무엇인가?
```

---

## Day 37 — 최종 정리

### 목표

37일 동안 공부한 내용을 요약하고 포트폴리오 형태로 정리한다.

### 정리할 내용

- [ ] C 포인터 요약
- [ ] C 구조체 요약
- [ ] C 동적 메모리 요약
- [ ] C 파일 입출력 요약
- [ ] C 비트 연산 요약
- [ ] Python 자료구조 요약
- [ ] NumPy 벡터/행렬 계산 요약
- [ ] Matplotlib 그래프 요약
- [ ] Pandas CSV 분석 요약
- [ ] SciPy 신호처리 요약
- [ ] LeetCode 오답노트 정리

### 최종 체크리스트

| 항목 | 완료 |
|---|---|
| C 포인터로 원본 값을 수정할 수 있다 | [ ] |
| C 배열과 포인터의 관계를 설명할 수 있다 | [ ] |
| C 구조체로 센서 패킷을 표현할 수 있다 | [ ] |
| C에서 `malloc`, `free`를 사용할 수 있다 | [ ] |
| C에서 파일을 읽고 쓸 수 있다 | [ ] |
| C에서 비트 플래그를 처리할 수 있다 | [ ] |
| Python list/dict/set을 사용할 수 있다 | [ ] |
| Python으로 파일 입출력을 할 수 있다 | [ ] |
| NumPy로 벡터/행렬 계산을 할 수 있다 | [ ] |
| Matplotlib으로 신호 그래프를 그릴 수 있다 | [ ] |
| Pandas로 CSV 데이터를 분석할 수 있다 | [ ] |
| SciPy로 컨볼루션과 FFT를 실습할 수 있다 | [ ] |
| C로 데이터를 만들고 Python으로 분석할 수 있다 | [ ] |

---

# LeetCode 문제 모음

## C 우선 문제

```text
2235 Add Two Integers
2413 Smallest Even Multiple
412 Fizz Buzz
1342 Number of Steps to Reduce a Number to Zero
1480 Running Sum of 1d Array
1920 Build Array from Permutation
1470 Shuffle the Array
1672 Richest Customer Wealth
867 Transpose Matrix
136 Single Number
268 Missing Number
283 Move Zeroes
27 Remove Element
26 Remove Duplicates from Sorted Array
88 Merge Sorted Array
344 Reverse String
977 Squares of a Sorted Array
125 Valid Palindrome
242 Valid Anagram
387 First Unique Character in a String
14 Longest Common Prefix
206 Reverse Linked List
21 Merge Two Sorted Lists
83 Remove Duplicates from Sorted List
1 Two Sum
66 Plus One
118 Pascal's Triangle
141 Linked List Cycle
191 Number of 1 Bits
190 Reverse Bits
338 Counting Bits
```

## Python 우선 문제

```text
2235 Add Two Integers
2469 Convert the Temperature
412 Fizz Buzz
1342 Number of Steps to Reduce a Number to Zero
1480 Running Sum of 1d Array
1431 Kids With the Greatest Number of Candies
217 Contains Duplicate
1 Two Sum
242 Valid Anagram
349 Intersection of Two Arrays
125 Valid Palindrome
387 First Unique Character in a String
20 Valid Parentheses
682 Baseball Game
225 Implement Stack using Queues
232 Implement Queue using Stacks
705 Design HashSet
706 Design HashMap
1603 Design Parking System
121 Best Time to Buy and Sell Stock
303 Range Sum Query - Immutable
566 Reshape the Matrix
867 Transpose Matrix
1572 Matrix Diagonal Sum
```
