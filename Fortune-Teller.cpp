#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0)); 

    
    string loveFortunes[] = {
        "Someone secretly admires you ",
        "A romantic surprise is on its way ",
        "Love will knock on your door soon ",
        "A past crush might return ",
        "Self-love is your biggest power "
    };

    string careerFortunes[] = {
        "Your hard work will soon be rewarded ",
        "An exciting opportunity is coming ",
        "Stay patient — success is on the way ",
        "Your skills will shine in unexpected places ",
        "A challenge will turn into a big achievement "
    };

    string dailyFortunes[] = {
        "You will laugh a lot today ",
        "A tasty snack is in your near future ",
        "Good news will brighten your day ",
        "A friend will make you smile soon ",
        "Today is a perfect day for new beginnings "
    };

    string healthFortunes[] = {
        "Beware... you're going to lose weight ",
        "Starting a new hobby will refresh your mind ",
        "Stay away from spicy food for some time and let your body rest ",
        "Say no to momos for some days ",
        "Eat veggies, become a carrot "
    };

    
    int loveSize = sizeof(loveFortunes)/sizeof(loveFortunes[0]);
    int careerSize = sizeof(careerFortunes)/sizeof(careerFortunes[0]);
    int dailySize = sizeof(dailyFortunes)/sizeof(dailyFortunes[0]);
    int healthSize = sizeof(healthFortunes)/sizeof(healthFortunes[0]);

    int choice;
    char again = 'y';

    cout << "Welcome to the Fortune Teller " << endl;

    while (again == 'y' || again == 'Y') {
        cout << "\nChoose a category for your fortune:" << endl;
        cout << "1. Love " << endl;
        cout << "2. Career " << endl;
        cout << "3. Daily Life " << endl;
        cout << "4. Health " << endl;
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        cout << "\n Your Fortune: ";

        switch(choice) {
            case 1:
                cout << loveFortunes[rand() % loveSize] << endl;
                break;
            case 2:
                cout << careerFortunes[rand() % careerSize] << endl;
                break;
            case 3:
                cout << dailyFortunes[rand() % dailySize] << endl;
                break;
            case 4:
                cout << healthFortunes[rand() % healthSize] << endl;
                break;
            default:
                cout << "Oops! That’s not a valid option " << endl;
        }

        cout << "\nDo you want another fortune? (y/n): ";
        cin >> again;
    }

    cout << "\nThank you for visiting the Fortune Teller! " << endl;
    return 0;
}
