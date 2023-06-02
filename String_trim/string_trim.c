#include <stdio.h>

void TrimRight(char *s);

void TrimRight(char *s) {
    if ((s == NULL) || (*s == '\0')) {
        return; // Пустая строка
    }

    char *end = s; // Указатель на последний элемент строки
    while (*s != '\0') {
        if (*s != ' ') {
           end = s; // Ссылка на последний символ отличный от пробела
        }
        s++;
    }

    if(*end != ' ') {  // Если строка не состоит только из одних пробелов 
        end++; // Позиция на следующий элемент (пробел или конец строки)
    }
    *end = '\0'; // Обрезаем строку
}

int main() {
    char str[] = "Test string     ";
    TrimRight(str);
    printf("Trimmed string: \"%s\"\n", str);
    return 0;
}