/*
 * 学生成绩统计程序
 *
 * 功能：输入若干学生的成绩，统计平均分、最高分和最低分。
 *
 * 注意：本文件用于教学演示，其中含有故意留下的缺陷，
 *       请勿直接用于实际场景。
 */

#include <stdio.h>

#define MAX_STUDENTS 5

int main(void)
{
    int scores[MAX_STUDENTS];
    int count;
    int i;
    int sum = 0;
    int max, min;
    double average;

    printf("请输入学生人数（最多 %d 人）：", MAX_STUDENTS);
    scanf("%d", &count);

    if (count <= 0) {
        printf("学生人数无效。\n");
        return 1;
    }

    /* 读取成绩 */
    for (i = 0; i < count; i++) {
        printf("请输入第 %d 个学生的成绩：", i + 1);
        scanf("%d", &scores[i]);
    }

    /* 统计最高分和最低分 */
    max = scores[0];
    min = scores[0];
    sum = scores[0];
    for (i = 1; i < count; i++) {
        if (scores[i] > max) {
            max = scores[i];
        }
        if (scores[i] < min) {
            min = scores[i];
        }
        sum += scores[i];
    }

    /* 计算平均分 */
    average = (double)sum / count;

    printf("========== 统计结果 ==========\n");
    printf("平均分：%.2f\n", average);
    printf("最高分：%d\n", max);
    printf("最低分：%d\n", min);

    return 0;
}
