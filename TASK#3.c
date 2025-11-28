#include <stdio.h>
#include <string.h>
struct Flight 
{
    int flightNumber;
    char departureCity[50];
    char destinationCity[50];
    char date[20];
    int availableSeats;
};
// Function to display flight details
void displayFlight(struct Flight f) {
    printf("\n=== Flight Details ===\n");
    printf("Flight Number: %d\n", f.flightNumber);
    printf("Departure City: %s\n", f.departureCity);
    printf("Destination City: %s\n", f.destinationCity);
    printf("Date: %s\n", f.date);
    printf("Available Seats: %d\n", f.availableSeats);
}

// Function to book a seat 
void bookSeat(struct Flight *f) {
    if (f->availableSeats > 0) {
        f->availableSeats--;
        printf("\nSeat booked successfully!\n");
        printf("Remaining Seats: %d\n", f->availableSeats);
    }
    else {
        printf("\nNo seats available on this flight!\n");
    }
}

int main() {
    struct Flight f;
    int choice;

    printf("Enter flight number: ");
    scanf("%d", &f.flightNumber);
    getchar(); 

    printf("Enter departure city: ");
    fgets(f.departureCity, sizeof(f.departureCity), stdin);
    f.departureCity[strcspn(f.departureCity, "\n")] = '\0';

    printf("Enter destination city: ");
    fgets(f.destinationCity, sizeof(f.destinationCity), stdin);
    f.destinationCity[strcspn(f.destinationCity, "\n")] = '\0';

    printf("Enter date (DD-MM-YYYY): ");
    fgets(f.date, sizeof(f.date), stdin);
    f.date[strcspn(f.date, "\n")] = '\0';

    printf("Enter available seats: ");
    scanf("%d", &f.availableSeats);

    // Menu 
    while (1) {
        printf("\n=== Menu ===\n");
        printf("1. Display Flight Details\n");
        printf("2. Book a Seat\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                displayFlight(f);
                break;
            case 2:
                bookSeat(&f);   
                break;
            case 3:
                printf("Exiting Program.\n");
                return 0;
            default:
                printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}
