#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ?? Define max name length
// #define NAME_SIZE 50

// ?? Define Player structure to hold stats
typedef struct {
	int number;
	char name[50]; // ?? Use fixed size for simplicity, can be adjusted
	char team[50]; // ?? Team name, can be used later
	int runs;
	int wickets;
	int matches;
	int prevRuns;     // ?? Previous run count
	int prevWickets;  // ?? Previous wicket count
	int moverPoints;  // ?? Calculated impact score
} Player;

// ?? Global dynamic list of players and tracker
Player *list = NULL; // 'NULL' (not '\0') is proper for pointers
int count = 0;        // Tracks how many players are currently stored

// ?? Add new player to the dynamic list
void addPlayer() {
	list = realloc(list, (count + 1) * sizeof(Player)); // expand memory by one slot
	if (list == NULL) {
		printf("Memory allocation failed.\n");
		exit(1); // terminate if out of memory
	}

	// Input player details
	printf("Enter Jersey Number: ");
	scanf("%d", &list[count].number);
	printf("Enter Name: ");
	scanf(" %[^\n]", list[count].name); // accepts full name with spaces
	printf("Enter Runs: ");
	scanf("%d", &list[count].runs);
	printf("Enter Wickets: ");
	scanf("%d", &list[count].wickets);
	printf("Enter Matches Played: ");
	scanf("%d", &list[count].matches);
	printf("Enter Previous Runs: ");
	scanf("%d", &list[count].prevRuns);
	printf("Enter Previous Wickets: ");
	scanf("%d", &list[count].prevWickets);
	list[count].moverPoints = (list[count].runs - list[count].prevRuns)
	                          + (list[count].wickets - list[count].prevWickets) * 2;
}

// ?? Search for player by jersey or name
void searchPlayer() {
	int choice;
	printf("Search by 1) Jersey Number or 2) Name: ");
	scanf("%d", &choice);

	if (choice == 1) {
		int jersey;
		printf("Enter Jersey Number: ");
		scanf("%d", &jersey);
		for (int i = 0; i < count; i++) {
			if (list[i].number == jersey) {
				printf("Player Found: %s\n", list[i].name);
				return;
			}
		}
	} else {
		char name[NAME_SIZE];
		printf("Enter Name: ");
		scanf(" %[^\n]", name);
		for (int i = 0; i < count; i++) {
			if (strcmp(list[i].name, name) == 0) {
				printf("Player Found: Jersey #%d\n", list[i].number);
				return;
			}
		}
	}
	printf("Player not found.\n");
}

// ?? Remove player from list
void removePlayer() 
{
	int jersey;
	printf("Enter Jersey Number to remove: ");
	scanf("%d", &jersey);
	for (int i = 0; i < count; i++) {
		if (list[i].number == jersey) {
			list[i] = list[count - 1]; // overwrite with last player
			count--;
			list = realloc(list, count * sizeof(Player)); // shrink memory (optional)
			printf("Player removed successfully.\n");
			return;
		}
	}
	printf("Player not found.\n");
}

// ?? Update player stats
void updatePlayer() 
{
	int jersey;
	printf("Enter Jersey Number to update: ");
	scanf("%d", &jersey);
	for (int i = 0; i < count; i++) {
		if (list[i].number == jersey) {
			printf("Enter new Runs: ");
			scanf("%d", &list[i].runs);
			printf("Enter new Wickets: ");
			scanf("%d", &list[i].wickets);
			printf("Enter new Matches Played: ");
			scanf("%d", &list[i].matches);
			printf("Player updated.\n");
			return;
		}
	}
	printf("Player not found.\n");
}

// ?? Display all players
void displayAllPlayers() 
{
	printf("\n--- All Players ---\n");
	for (int i = 0; i < count; i++) {
		printf("%d - %s | Runs: %d | Wickets: %d | Matches: %d\n",
		       list[i].number, list[i].name,
		       list[i].runs, list[i].wickets, list[i].matches);
	}
}

// ?? Comparison helpers for sorting
int compareRuns(const void *a, const void *b) 
{
	return ((Player *)b)->runs - ((Player *)a)->runs; // descending
}
int compareWickets(const void *a, const void *b) 
{
	return ((Player *)b)->wickets - ((Player *)a)->wickets;
}


int compareMovers(const void *a, const void *b) 
{
    return ((Player *)b)->moverPoints - ((Player *)a)->moverPoints;
}

void displayTopMovers() 
{
    if (count == 0) 
	{
        printf("No data available.\n");
        return;
    }

    Player *temp = malloc(count * sizeof(Player));
    if (temp == NULL) 
	{
        printf("Memory error.\n");
        return;
    }
    memcpy(temp, list, count * sizeof(Player));

    qsort(temp, count, sizeof(Player), compareMovers);

    printf("\n--- Top 3 Movers ---\n");
    for (int i = 0; i < count && i < 3; i++)
        printf("%s | Mover Points: %d\n", temp[i].name, temp[i].moverPoints);
        count++; // increase total count after successful addition           
    free(temp);
}


// ?? Show top performers
void displayTopPlayers() 
{
	if (count == 0) 
	{
		printf("No players to display.\n");
		return;
	}

	// Create temp copy of list to sort without affecting original
	Player *temp = malloc(count * sizeof(Player));
	if (temp == NULL) 
	{
		printf("Memory allocation failed.\n");
		return;
	}
	memcpy(temp, list, count * sizeof(Player));

	printf("\n--- Top 3 Run Scorers ---\n");
	qsort(temp, count, sizeof(Player), compareRuns);
	for (int i = 0; i < count && i < 3; i++)
		printf("%s | Runs: %d\n", temp[i].name, temp[i].runs);

	printf("\n--- Top 3 Wicket Takers ---\n");
	qsort(temp, count, sizeof(Player), compareWickets);
	for (int i = 0; i < count && i < 3; i++)
		printf("%s | Wickets: %d\n", temp[i].name, temp[i].wickets);

	free(temp); // cleanup temporary copy
}

// ?? Program Entry Point
int main() 
{
	int choice;
	do {
		// Main menu loop
		printf("\n--- Player Management System ---\n");
		printf("1. Add Player\n2. Remove Player\n3. Search Player\n4. Update Player\n");
		printf("5. Display All Players\n6. Display Top Players\n7. Display Top Movers\n8. Exit\n");
		printf("Choose option : ");
		scanf("%d", &choice);

		switch (choice) 
		{
		
			case 1:
				addPlayer();
				break;
			case 2:
				removePlayer();
				break;
			case 3:
				searchPlayer();
				break;
			case 4:
				updatePlayer();
				break;
			case 5:
				displayAllPlayers();
				break;
			case 6:
				displayTopPlayers();
				break;
			case 7:
				displayTopMovers();
				break;
			case 8:
				printf("Exiting program.\n");
				break;
			default:
				printf("Invalid option.\n");
		}
	} while (choice != 8);

	free(list); // cleanup before exit
}