
#include <stdio.h>

int main() {
    int demandLevel;
    double distanceKm;
    int durationMin;

    printf("Введите уровень спроса (1-100): ");
    scanf("%d", &demandLevel);

    printf("Введите длину маршрута (км): ");
    scanf("%lf", &distanceKm);

    printf("Введите длительность поездки (мин): ");
    scanf("%d", &durationMin);

    if (demandLevel < 1 || demandLevel > 100 || distanceKm <= 0 || durationMin <= 0) {
        printf("Ошибка: Некорректные входные данные!\n");
        return 1; 
    }

    double baseFare = 50.0 + (demandLevel * 0.5);       
    double costPerKm = 10.0 + (demandLevel * 0.1);     
    double costPerMin = 2.0 + (demandLevel * 0.05);     
    double commission = 29.0 + (demandLevel * 0.4);     
    double totalCost = baseFare + (distanceKm * costPerKm) + (durationMin * costPerMin) + commission;

    printf("\n--- Итоговая стоимость поездки ---\n");
    printf("Уровень спроса: %d\n", demandLevel);
    printf("Расстояние: %.2f км\n", distanceKm);
    printf("Длительность: %d мин\n", durationMin);
    printf("Итоговая стоимость: %.2f руб.\n", totalCost);

    return 0;
}
