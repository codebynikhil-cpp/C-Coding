#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_FLIGHTS 10
#define MAX_DATES 5
#define MAX_SEATS 50

struct Flight {
    int flightNumber;
    char destination[50];
    float price; 
    int capacity;
    int bookedSeats;
};

struct Date {
    int day;
    int month;
    int year;
};

struct Passenger {
    int seatNumber;
    char name[50];
};

struct BookingSystem {
    struct Flight flights[MAX_FLIGHTS];
    struct Date flightDates[MAX_DATES];
    struct Passenger passengers[MAX_SEATS];
    int numFlights;
    int numDates;
    int numPassengers;
};

void displayMenu();
void displayFlights(struct BookingSystem *bookingSystem);
void displayDates(struct BookingSystem *bookingSystem);
void bookFlight(struct BookingSystem *bookingSystem);
void cancelBooking(struct BookingSystem *bookingSystem);

int main() {
    struct BookingSystem bookingSystem;
    bookingSystem.numFlights = 0;
    bookingSystem.numDates = 0;
    bookingSystem.numPassengers = 0;

    struct Flight flight1 = {1, "Ranchi", 8000.0, 50, 0};
    struct Flight flight2 = {2, "Mumbai", 6000.0, 40, 0};
    struct Flight flight3 = {3, "Goa", 12000.0, 30, 0};
    bookingSystem.flights[bookingSystem.numFlights++] = flight1;
    bookingSystem.flights[bookingSystem.numFlights++] = flight2;
    bookingSystem.flights[bookingSystem.numFlights++] = flight3;

    struct Date date1 = {19, 12, 2023};
    struct Date date2 = {20, 12, 2023};
    struct Date date3 = {21, 12, 2023};
    bookingSystem.flightDates[bookingSystem.numDates++] = date1;
    bookingSystem.flightDates[bookingSystem.numDates++] = date2;
    bookingSystem.flightDates[bookingSystem.numDates++] = date3;

    int choice;

    do {
        displayMenu();
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                displayFlights(&bookingSystem);
                break;
            case 2:
                displayDates(&bookingSystem);
                break;
            case 3:
                bookFlight(&bookingSystem);
                break;
            case 4:
                cancelBooking(&bookingSystem);
                break;
            case 0:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }

    } while (choice != 0);

    return 0;
}

void displayMenu() {
    printf("\n---------------------------------------------\n");
    printf("            Flight Booking System\n");
    printf("---------------------------------------------\n");
    printf("1. Display Flights\n");
    printf("2. Display Flight Dates\n");
    printf("3. Book a Flight\n");
    printf("4. Cancel Booking\n");
    printf("0. Exit\n");
    printf("Enter your choice: ");
}

void displayFlights(struct BookingSystem *bookingSystem) {
    printf("\n---------------------------------------------\n");
    printf("                Available Flights\n");
    printf("---------------------------------------------\n");

    for (int i = 0; i < bookingSystem->numFlights; i++) {
        printf("Flight %d: Destination: %s, Price: Rs%.2f, Capacity: %d, Booked Seats: %d\n",
               bookingSystem->flights[i].flightNumber,
               bookingSystem->flights[i].destination,
               bookingSystem->flights[i].price,
               bookingSystem->flights[i].capacity,
               bookingSystem->flights[i].bookedSeats);
    }
}

void displayDates(struct BookingSystem *bookingSystem) {
    printf("\n---------------------------------------------\n");
    printf("                Available Dates\n");
    printf("---------------------------------------------\n");

    for (int i = 0; i < bookingSystem->numDates; i++) {
        printf("Date %d: %d/%d/%d\n",
               i + 1,
               bookingSystem->flightDates[i].day,
               bookingSystem->flightDates[i].month,
               bookingSystem->flightDates[i].year);
    }
}

void bookFlight(struct BookingSystem *bookingSystem) {
    int flightNumber;
    int dateIndex;

    printf("Enter the flight number to book: ");
    scanf("%d", &flightNumber);

    printf("Select the date for the flight:\n");
    displayDates(bookingSystem);
    printf("Enter the date number: ");
    scanf("%d", &dateIndex);

    if (dateIndex < 1 || dateIndex > bookingSystem->numDates) {
        printf("Invalid date number.\n");
        return;
    }

    int selectedFlightIndex = -1;
    for (int i = 0; i < bookingSystem->numFlights; i++) {
        if (bookingSystem->flights[i].flightNumber == flightNumber) {
            selectedFlightIndex = i;
            break;
        }
    }

    if (selectedFlightIndex == -1) {
        printf("Flight not found.\n");
        return;
    }

    if (bookingSystem->flights[selectedFlightIndex].bookedSeats >= bookingSystem->flights[selectedFlightIndex].capacity) {
        printf("Sorry, the flight is fully booked.\n");
        return;
    }

    printf("Enter passenger name: ");
    scanf("%s", bookingSystem->passengers[bookingSystem->numPassengers].name);

    printf("Enter seat number (1-%d): ", bookingSystem->flights[selectedFlightIndex].capacity);
    scanf("%d", &bookingSystem->passengers[bookingSystem->numPassengers].seatNumber);

    if (bookingSystem->passengers[bookingSystem->numPassengers].seatNumber < 1 ||
        bookingSystem->passengers[bookingSystem->numPassengers].seatNumber > bookingSystem->flights[selectedFlightIndex].capacity) {
        printf("Invalid seat number.\n");
        return;
    }

    bookingSystem->flights[selectedFlightIndex].bookedSeats++;


    bookingSystem->numPassengers++;

    printf("Booking successful.\n");
}

void cancelBooking(struct BookingSystem *bookingSystem) {
    

    printf("Cancellation successful.\n");
}