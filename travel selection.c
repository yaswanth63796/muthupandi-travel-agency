#include <stdio.h>

int main() {
 printf("WELCOME!!! BELOW ARE THE LIST OF OUR SERVICES THAT WE PROVIDE!. TAKE A LOOK AT THEM!\n");
printf("\n\n");
    int rows = 8; 
    int cols = 2;

    
    char table[8][2][50] = {
        {"Coimbatore", "Madurai Meenakshiamman Temple"},
        {"Coimbatore", "Thanjai Periya Kovil         "},
        {"Coimbatore", "Rameshwaram                  "},
        {"Coimbatore", "Srirangam temple             "},
        {"Coimbatore", "Mahaballipuram               "},
        {"Coimbatore", "Sabarimalai                  "},
        {"Coimbatore", "Tirupathi                    "},
        {"Coimbatore", "Vellore Kotai                "},
        
    };
    for (int i = 0; i < cols; i++) {
        printf("|===============================|");
    }
    printf("\n");

    printf("| %s       || %s|\n", "      FROM            ", "     DESTINATION               ");
    for (int i = 0; i < cols; i++) {
        printf("|===============================|");
    }
    printf("\n");
 for (int i = 0; i < rows; i++) {
    
        printf("|%17s             || %-17s |\n", table[i][0], table[i][1]);

        
        for (int i = 0; i < cols; i++) {
            printf("|===============================|");
            
        }
        printf("\n");
    }

return 0;
}
