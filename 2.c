#include <stdio.h>
#include <stdlib.h>

int main() {
    struct Student {
        int height;
        struct Student* next;
    } *head = NULL, *new_student, *current, *prev;
    
    int height;
    
    printf("Вводите рост учеников (0 для завершения):\n");
    
    while (1) {
        printf("Рост: ");
        scanf("%d", &height);
        
        if (height == 0) break;
        if (height < 0) {
            printf("Некорректный рост! Должен быть положительным числом.\n");
            continue;
        }
      
        new_student = (struct Student*)malloc(sizeof(struct Student));
        new_student->height = height;
        new_student->next = NULL;
        
        if (head == NULL || height > head->height) {
            new_student->next = head;
            head = new_student;
        } else {
            current = head;
            while (current != NULL && current->height > height) {
                prev = current;
                current = current->next;
            }
            new_student->next = current;
            prev->next = new_student;
        }
        
        printf("Текущий список (по убыванию): ");
        current = head;
        while (current != NULL) {
            printf("%d ", current->height);
            current = current->next;
        }
        printf("\n");
    }
    
    current = head;
    while (current != NULL) {
        struct Student* temp = current;
        current = current->next;
        free(temp);
    }
    
    return 0;
}
