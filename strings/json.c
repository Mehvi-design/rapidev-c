#include <stdio.h>

// Function to format sensor data as a JSON string
void format_sensor_json(char *out, const char *name, float value) {
    sprintf(out, "{\"sensor\":\"%s\",\"value\":%.1f}", name, value);
}

int main() {
    char json_output[100];  // Buffer to hold the output
    format_sensor_json(json_output, "TEMP", 25.5);
    printf("%s\n", json_output);  // Output: {"sensor":"TEMP","value":25.5}
    return 0;
}
