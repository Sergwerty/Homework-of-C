#include <stdio.h>

union SensorData {
    int temperature;
    float pressure;
    float humidity;
};

int main() {
    union SensorData sensor;
    int type;

    printf("Select sensor type:\n1. Temperature\n2. Pressure\n3. Humidity\n");
    scanf("%d", &type);

    if (type == 1) {
        printf("Enter temperature (int): ");
        scanf("%d", &sensor.temperature);
        printf("Sensor Type: Temperature\n");
        printf("Reading: %d\n", sensor.temperature);
    } else if (type == 2) {
        printf("Enter pressure (float): ");
        scanf("%f", &sensor.pressure);
        printf("Sensor Type: Pressure\n");
        printf("Reading: %.2f\n", sensor.pressure);
    } else if (type == 3) {
        printf("Enter humidity (float): ");
        scanf("%f", &sensor.humidity);
        printf("Sensor Type: Humidity\n");
        printf("Reading: %.2f\n", sensor.humidity);
    } else {
        printf("Invalid sensor type.\n");
    }

    return 0;
}

