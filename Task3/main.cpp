#include <iostream>
#include <string>

using namespace std;

int main()
{
    int choice1;
    int choice2;

    cout << "==================================================\n";
    cout << "         NYC SUBWAY COMMUTE ADVENTURE             \n";
    cout << "==================================================\n";
    cout << "You are standing at the station platform, rushing to get to campus.\n";
    cout << "An express train and a local train pull into the station at the same time.\n\n";
    
    // First Choice: Numeric Input
    cout << "Do you:\n";
    cout << "1) Board the crowded Express train?\n";
    cout << "2) Board the empty Local train?\n";
    cout << "Enter your choice (1 or 2): ";
    cin >> choice1;

    // Route 1: Express Train Path
    if (choice1 == 1)
    {
        cout << "\nYou pack into the express train like a sardine. It flies past three stops!\n";
        cout << "Suddenly, the train grinds to a halt. The conductor announces signal delays.\n\n";
        
        // Second Choice
        cout << "Do you wait it out, or pull out your phone to check for an alternate route?\n";
        cout << "Enter '1' to wait or '2' to check your phone: ";
        cin >> choice2;

        if (choice2 == 1)
        {
            cout << "\nPatience pays off! The signals clear up after two minutes.\n";
            cout << "The train dashes into your station. You sprint upstairs and make it to class right on time! Victory!\n";
        }
        else if (choice2 == 2)
        {
            cout << "\nYou look down at your phone, but there is absolutely no cell service.\n";
            cout << "While you are staring at a blank screen, you don't notice that the train starts moving again and you missed your stop.\n";
            cout << "You end up in Manhattan and arrive late. Adventure over!\n";
        }
        else
        {
            // Error handling for unexpected input
            cout << "\nInvalid choice! Panicking, you exit at the wrong stop and the next train doesn't come for another 20 minutes. Adventure over!\n";
        }
    }
    // Route 2: Local Train Path
    else if (choice1 == 2)
    {
        cout << "\nYou secure a comfortable window seat on the local train. It moves steadily but slowly.\n";
        cout << "At the next stop, a street performer boards your train car.\n";
        
        // Second Choice
        cout << "\nDo you stay in your seat, or quickly move to the next train car?\n";
        cout << "Enter '1' to stay or '2' to move cars: ";
        cin >> choice2;

        if (choice2 == 1)
        {
            cout << "\nYou put your headphones in and politely nod. The performance ends quickly.\n";
            cout << "The train rolls into your final destination. You walk onto campus relaxed. Victory!\n";
        }
        else if (choice2 == 2)
        {
            cout << "\nYou open the heavy metal door to move between cars while the train is in motion.\n";
            cout << "A transit officer sees you moving between cars, stops you, and writes you a delay-inducing ticket.\n";
            cout << "You missed your class. Adventure over!\n";
        }
        else
        {
            // Error handling for unexpected input
            cout << "\nInvalid choice! The performer strikes up a conversation with you and you missed your stop. Adventure over!\n";
        }
    }
    // Error handling for unexpected integer input
    else
    {
        cout << "\nYou stood on the platform staring at your choices for too long. Both trains left without you!\n";
        cout << "You are stranded at the station. Adventure over!\n";
    }

    return 0;
}
