#include <stdio.h>

int Time_Park(int minutes) {
    // Assume that the wait time follows a simple pattern based on the minutes past midnight
    
    // Example implementation:
    int waitTime = 0;
    
    if (minutes >= 420 && minutes <= 540) {
        // Morning rush hour (7:00 AM to 9:00 AM) - 15 minutes average wait time
        waitTime = 15;
    } else if (minutes >= 900 && minutes <= 1020) {
        // Mid-morning - 5 minutes average wait time
        waitTime = 5;
    } else if (minutes >= 1140 && minutes <= 1260) {
        // Lunch hour (12:00 PM to 2:00 PM) - 10 minutes average wait time
        waitTime = 10;
    } else if (minutes >= 1020 && minutes <= 1260) {
        // Afternoon - 5 minutes average wait time
        waitTime = 5;
    } else if (minutes >= 1320 && minutes <= 1380) {
        // Evening rush hour (10:00 PM to 11:00 PM) - 20 minutes average wait time
        waitTime = 20;
    } else {
        // Other times - assume no wait time
        waitTime = 0;
    }
    
    return waitTime;
}

int main() {
    int hour;
    int waitTime;
    
    // Iterate over each hour of the day
    for (hour = 0; hour < 24; hour++) {
        // Calculate the wait time for the current hour
        waitTime = Time_Park(hour * 60); // Convert hour to minutes
        
        // Print the hour and corresponding wait time
        printf("%2d ", hour);
        
        // Print '*' for every 5 minutes of wait time
        int numStars = waitTime / 5;
        for (int i = 0; i < numStars; i++) {
            printf("*");
        }
        
        printf("\n");
    }
    
    return 0;
}
