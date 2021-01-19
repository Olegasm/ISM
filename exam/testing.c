#include <stdlib.h>

int main(int argc, string argv[])
{
    if (argc != 3)
    {
        return 1;
    }

    // Determine which test to run
    int setup = atoi(argv[1]);
    int test = atoi(argv[2]);

    // Setup
    switch (setup)
    {
        case 0:
            candidate_count = 3;
           
            strcpy(candidates->name = "Alice");
            candidates->votes = 0;
            
            strcpy((candidates->next)->name = "Bob");
            (candidates->next)->votes = 0;
            
            strcpy((candidates->next->next)->name = "Charlie");
            (candidates->next->next)->votes = 0;
            
            break;
    }

    // Test
    switch(test)
    {
        case 0:
            printf("%s", vote("Alice") ? "true" : "false");
            break;

        case 1:
            printf("%s", vote("Bob") ? "true" : "false");
            break;

        case 2:
            printf("%s", vote("Charlie") ? "true" : "false");
            break;

        case 3:
            printf("%s", vote("David") ? "true" : "false");
            break;

        case 4:
            vote("Alice");
            printf("%i %i %i", candidates->votes, (candidates->next)->votes, (candidates->next->next)->votes);
            break;

        case 5:
            candidates->votes= 2;
            (candidates->next)->votes = 7;    
            (candidates->next->next)->votes) = 0;   
                
            vote("Bob");
            printf("%i %i %i", candidates->votes, (candidates->next)->votes, (candidates->next->next)->votes);
            break;

        case 6:
            candidates->votes= 2;
            (candidates->next)->votes = 8;    
            (candidates->next->next)->votes) = 0;
            vote("David");
            printf("%i %i %i", candidates->votes, (candidates->next)->votes, (candidates->next->next)->votes);
            break;

        case 7:
            candidates->votes= 8;
            (candidates->next)->votes = 2;    
            (candidates->next->next)->votes) = 0;   
            print_winner();
            break;

        case 8:
            candidates->votes= 1;
            (candidates->next)->votes = 8;    
            (candidates->next->next)->votes) = 2;   
            print_winner();
            break;

        case 9:
            candidates->votes= 1;
            (candidates->next)->votes = 8;    
            (candidates->next->next)->votes) = 9;
            print_winner();
            break;

        case 10:
            candidates->votes= 8;
            (candidates->next)->votes = 8;    
            (candidates->next->next)->votes) = 5;   
            print_winner();
            break;

        case 11:
            candidates->votes= 8;
            (candidates->next)->votes = 8;    
            (candidates->next->next)->votes) = 8;   
            print_winner();
            break;
    }
}
