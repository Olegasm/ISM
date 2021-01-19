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
            node *trav = candidates;
           
            trav->name = "Alice";
            trav->votes = 0;
            
            trav = trav->next;
            
            trav->name = "Bob";
            trav->votes = 0;
            
            trav = trav->next;
            
            trav->name = "Charlie";
            trav->votes = 0;
            
            trav = NULL;
            
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
            candidate->votes= 2
            (candidates->next)->votes = 7;    
            (candidates->next->next)->votes) = 0    
                
            vote("Bob");
            printf("%i %i %i", candidates->votes, (candidates->next)->votes, (candidates->next->next)->votes);
            break;

        case 6:
            candidate->votes= 2
            (candidates->next)->votes = 8;    
            (candidates->next->next)->votes) = 0
            vote("David");
            printf("%i %i %i", candidates->votes, (candidates->next)->votes, (candidates->next->next)->votes);
            break;

        case 7:
            candidate->votes= 8
            (candidates->next)->votes = 2;    
            (candidates->next->next)->votes) = 0   
            print_winner();
            break;

        case 8:
            candidate->votes= 1
            (candidates->next)->votes = 8;    
            (candidates->next->next)->votes) = 2   
            print_winner();
            break;

        case 9:
            candidate->votes= 1
            (candidates->next)->votes = 8;    
            (candidates->next->next)->votes) = 9
            print_winner();
            break;

        case 10:
            candidate->votes= 8
            (candidates->next)->votes = 8;    
            (candidates->next->next)->votes) = 5   
            print_winner();
            break;

        case 11:
            candidate->votes= 8
            (candidates->next)->votes = 8;    
            (candidates->next->next)->votes) = 8   
            print_winner();
            break;
    }
}
