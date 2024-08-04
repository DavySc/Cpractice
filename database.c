#include <stdio.h>
#include <stdbool.h>

#define MAX_EMPLOYEES 1000

__attribute__((__packed__)) struct employees_t { 
    int id;
    bool isManager; 
    char firstName[64];
    char lastName[64];
    float income;
};

void initialize_employees(struct employees_t employees[]) {
    for(int i = 0; i < MAX_EMPLOYEES; i++) {
        employees[i].isManager = false;
        employees[i].income = 0;
    }
}

int main() {
    struct employees_t employees[MAX_EMPLOYEES];
    initialize_employees(employees);
    
}