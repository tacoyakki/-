#include <stdio.h>

void print_indent(int depth) {
	for (int i = 0; i < depth * 4; i++) {
		putchar('_');
	}
}

void a(int n, int depth) {
	if (n == 0) {
		print_indent(depth);
		printf("\"재귀함수가 뭔가요?\"\n");
		print_indent(depth);
		printf("\"재귀함수는 자기 자신을 호출하는 함수라네\"\n");
		print_indent(depth);
		printf("라고 답변하였지.\n");
		return;
	}

	print_indent(depth);
	printf("\"재귀함수가 뭔가요?\"\n");
	print_indent(depth);
	printf("\"잘 들어보게. 옛날옛날 한 산 꼭대기에 이세상 모든 지식을 통달한 선인이 있었어.\n");
	print_indent(depth);
	printf("마을 사람들은 모두 그 선인에게 수많은 질문을 했고, 모두 지혜롭게 대답해 주었지.\n");
	print_indent(depth);
	printf("그의 답은 대부분 옳았다고 하네. 그런데 어느 날, 그 선인에게 한 선비가 찾아와서 물었어.\"\n");
	a(n - 1, depth + 1);
	print_indent(depth);
	printf("라고 답변하였지.\n");
}

int main() {
	int n;
	if (scanf("%d", &n) != 1) return 0;
	printf("어느 한 컴퓨터공학과 학생이 유명한 교수님을 찾아가 물었다.\n");
	a(n, 0);
	return 0;
}