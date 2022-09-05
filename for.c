#include <stdio.h>
int main()
{
  int input;

  scanf("%d", &input); // 첫 입력 받기

  printf("===%d단===\n", input);
  for(int i = 1; i <= 9; i++)//for문 설계 + 구구단 출력
    {
      printf("%d*%d = %d\n", input, i, input * i);// 서식자지정자를 활용하여 출력
    }
  return 0;
}

