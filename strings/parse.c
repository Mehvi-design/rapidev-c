#include<stdio.h>
#include<string.h>
#include<stdbool.h>
bool parse_kv_pair(char *input, char *key, char *value){
    char *pos;
    // Get the first token (the key)
    pos = strtok(input, "=");
    if (pos != NULL) { // Check if the token is valid
        strcpy(key, pos); // Copy the key
    } else {
        return false; // Return false if key is not found
    }

    // Get the second token (the value)
    pos = strtok(NULL, "=");
    if (pos != NULL) { // Check if the value token is valid
        strcpy(value, pos); // Copy the value
    } else {
        return false; // Return false if value is not found
    }

    // Print the key and value
    printf("Key: %s\n", key);
    printf("Value: %s\n", value);
    
    return true; // Return true if both key and value are found

}
int main(){
    char input[]="rollno1";
    char key[10],value[10];
    printf("The parsing is %s",(parse_kv_pair(input,key,value))?"Commplete":"Impossible");

}