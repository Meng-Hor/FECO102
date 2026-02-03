#include <stdio.h>

int main() {
    
    int i, floor, room, occupied, totalroom = 0, totalOccupied = 0;
    int percentage;
    
    do{
        printf("Enter the number of floor(s): ");
        scanf("%d", &floor);
        if(floor < 1){
            printf("Invalid floor!\n");
        }
    }while(floor < 1);
    
    for(i = 1; i <= floor; i++){
        printf("\n---------- Floor Number %d ----------\n", i);
        do{
            printf("How many rooms are in this floor? ");
            scanf("%d", &room);
            if(room < 10){
                printf("Rooms must be greater than 10!\n");
            }
        }while(room < 10);
        
        do{
            printf("How many of them are occupied? ");
            scanf("%d", &occupied);
            if(occupied > room){
                printf("Occupied rooms be greater than the amount of room!\n");
            }
        }while(occupied > room);
        
        totalroom = room + totalroom;
        totalOccupied = occupied + totalOccupied;
    }
    percentage = (totalOccupied * 100) / totalroom;
    
    printf("\nHotel Occupancy Overview\n");
    printf("Total rooms: %d\n", totalroom);
    printf("Occupied rooms: %d\n", totalOccupied);
    printf("Unoccupied rooms: %d\n", (totalroom - totalOccupied));
    printf("Occupied precentage: %d%\n", percentage);

    return 0;
}