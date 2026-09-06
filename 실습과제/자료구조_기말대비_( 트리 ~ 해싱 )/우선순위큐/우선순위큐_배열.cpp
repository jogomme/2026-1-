#include <iostream>

// 우선순위 큐 : 우선순위를 가진 항목들을 저장하는 큐
// FIFO 방식이 아닌 우선순위가 높은 데이터가 먼저 나감

// 우선 순위 큐의 가장 중요한 연산
// 1. 삽입 : 새로운 항목을 큐에 추가
// 2. 삭제 : 우선순위가 가장 높은 항목을 큐에서 제거하고 반환


// 우선순위 큐는 2가지로 구분
// 1. 최소 우선순위 큐
// 2. 최대 우선순위 큐

// 힙 : 우선순위가 정해지면 우선순위에 맞게 가장 빠르게 불러오는 것 
//    - 완전 이진트리로 구성되어있지만 배열로 처리한다


// 우선 순위 큐 연산 시간표
// 표현 방법			|   삽입    |  삭제
// 순서 없는 배열		|   O(1)    |  O(n)
// 순서 없는 연결리스트 |   O(1)    |  O(n)
// 정렬된 배열			|   O(n)    |  O(1)
// 정렬된 연결리스트	|   O(n)    |  O(1)
//    ' 힙  '           |   O(log n)| O(log n)

// 힙이란 ?
// 노드의 키들이 다음 식을 만족하는 완전이진트리 


// 최대 힙
// root Node의 키 값이 가장 크다
// key(부모노드) ≥ key(자식노드)

// 최소 힙
// root Node의 키 값이 가장 작다
// key(부모노드) ≤ key(자식노드)

// n개의 노드를 가지고 있는 히프의 높이는 O(log n)
// 히프는 완전이진트리
// 마지막 레벨 h을 제외하고는 각 레벨 i 에 2^(i - 1)개의 노드 존재

// 히프는 배열을 이용하여 구현
// 완전이진트리이므로 각 노드에 번호를 붙일 수 있음
// 이 번호를 배열의 인덱스라고 생각

#define MAX_ELEMENT 200

typedef struct {
	int key;
} element;

typedef struct {
	element heap[MAX_ELEMENT];
	int heap_size;
} HeapType;

HeapType* create()
{
	return new HeapType;
}

HeapType heap; // 동적 메모리 할당 사용
HeapType* heap = create(); // 정적 메모리 할당 사용



int main()
{
	std::cout << "dddd" << '\n';
}