#include <stdio.h>
#include <stdlib.h>


typedef struct ListNode {
	int data;
	struct ListNode* next;
} ListNode;

ListNode* insert_first(ListNode* head, int data) {
	ListNode* node = (ListNode*)malloc(sizeof(ListNode));
	node->data = data;
	node->next = head;
	return node;
}

void print_list(ListNode* head) {
	for (ListNode* curr = head; curr != NULL; curr = curr->next) {
		printf("%d ", curr->data);
	}
	printf("\n");
}

ListNode* delete_node(ListNode* head, int value) {
	ListNode* prev = NULL;
	ListNode* curr = head;

	while (curr != NULL && curr->data != value) {
		prev = curr;
		curr = curr->next;
	}
	if (curr == NULL) {
		head = curr->next;
	}
	else {
		prev->next = curr->next;
	}
	printf("%d를 삭제했습니다.\n", curr->data);
	free(curr);
	return head;
}


int main(void)
{

	ListNode* head = NULL;
	head = insert_first(head, 10);
	head = insert_first(head, 13);
	head = insert_first(head, 8);
	head = insert_first(head, 33);
	head = insert_first(head, 21);
	print_list(head);

	int value;
	printf("삭제할 값을 입력하시오: ");
	scanf_s("%d", &value);

	head = delete_node(head, value);
	printf_list(head);

	return 0;


}