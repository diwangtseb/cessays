#include <stdio.h>
#include <stdbool.h>

// 将指定范围内的位设置为0
void clear_bits(unsigned int *bits, int start_pos, int end_pos) {
    for (int i = start_pos; i <= end_pos; i++) {
        *bits &= ~(1u << i);
    }
}

// 检查指定范围内是否仍然有1存在
bool check_bits(unsigned int bits, int start_pos, int end_pos) {
    for (int i = start_pos; i <= end_pos; i++) {
        if ((bits & (1u << i)) == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    // 设置24个1
    unsigned int bits = 0xFFFFFF;

    // 指定开始和结束位置
    int start_pos = 4;
    int end_pos = 12;

    // 将指定范围内的位设置为0
    clear_bits(&bits, start_pos, end_pos);

    // 检查指定范围内是否仍然有1存在
    if (check_bits(bits, 11, 13)) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}
