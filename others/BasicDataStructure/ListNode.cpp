#include<iostream>
using namespace std;
struct ListNode{
	int  val;
	ListNode * next;
	ListNode(int x) : val(x),next(NULL) {}
}; 
int main(){
	ListNode a(10);
	ListNode b(20);
	ListNode c(30);
	ListNode d(40);
	ListNode e(50);
	
	a.next=&b;
	b.next=&c;
	c.next=&d;
	d.next=&e;
	
	ListNode *head = &a;
	while(head){
		printf("%d %p %p\n", head->val, head, head->next);
		head=head->next;
	}
	return 0;
}