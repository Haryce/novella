#include <iostream>
#include <string>

using namespace std;
//сюжет:
//вы попадаете в деревню окруженной лесом
//у вас на выбор 3 варианта: исследовать лес, поговорит с жителями, покинуть деревню
//от вашего выбора зависит выживит ли ваш герой, останиться в деревне или пойдет своей дорогой
int main() {
    string choice;
    int interaction = 0; //добавляем переменную для взаимодействия с пользователем
    cout << "You find yourself in a mysterious village surrounded by dark woods. What do you want to do?\n"; //Вы оказались в таинственной деревне, окруженной темным лесом. Что вы хотите сделать?
    cout << "1. Explore the woods\n"; //Исследовать лес
    cout << "2. Talk to the villagers\n";  //Поговорить с жителями
    cout << "3. Leave the village\n"; //покинуть деревню
    cout << "Your choice (1/2/3):\n"; // выбор действия путем написания 1, 2 или 3
    cin >> choice;

    interaction++;

    if (choice == "1") {
        cout << "As you explore the woods, you find an old abandoned house. Do you want to enter? (yes/no):\n"; //Исследуя лес, вы находите старый заброшенный дом. Хотите ли вы войти в него? (да/нет)
        cin >> choice;
        interaction++;

        if (choice == "yes") {
            cout << "You find a treasure inside, but it is guarded by a ghost! Do you want to fight or flee? (fight/flee):\n"; //Внутри вы находите сокровище, но его охраняет призрак! Вы хотите сражаться или бежать? (fight/flee):
            cin >> choice;
            interaction++;

            if (choice == "fight") {
                cout << "You bravely confront the ghost but are defeated. Your adventure ends here.\n"; //Вы отважно противостоите призраку, но терпите поражение. На этом ваши приключения заканчиваются.
            }
            else {
                cout << "You escape safely running in fear from the ghost, but you hit a cliff and that's the end of your adventure.\n"; //Вы благополучно спаслись убегая в страхе от призрака, но наткнулись на обрыв и на этом закончилось ваше приключения 
            }
        }
        else {
            cout << "You decided to stay outside. After a while, you hear strange noises and get scared. You leave the woods.\n"; //Вы решили остаться на улице. Через некоторое время вы услышали странные звуки и испугались. Вы уходите из леса.
        }
    }
    else if (choice == "2") {
        cout << "The villagers are friendly and offer to tell you stories. Do you want to listen or leave? (listen/leave):\n"; //Жители деревни дружелюбны и предлагают рассказать вам истории. Вы хотите (послушать/уйти)
        cin >> choice;
        interaction++;

        if (choice == "listen") {
            cout << "You hear tales of hidden treasures and ancient curses. Do you want to search for treasure? (yes/no):\n"; //Вы слышите рассказы о спрятанных сокровищах и древних проклятиях. Хотите ли вы отправиться на поиски сокровищ?(да/нет)
            cin >> choice;
            interaction++;

            if (choice == "yes") {
                cout << "You find a map leading to a hidden cave! Do you want to go there? (yes/no):\n"; //Вы находите карту, ведущую к скрытой пещере!Хотите ли вы отправиться туда?(да/нет)
                cin >> choice;

                if (choice == "yes") {
                    cout << "In the cave, you find a treasure but accidentally awaken a sleeping dragon. You must flee for your life! Your adventure ends.\n"; //В пещере вы находите сокровища, но случайно будите спящего дракона. Вы должны бежать, спасая свою жизнь! Ваше приключение заканчивается.
                }
                else {
                    cout << "You decided to stay with the villagers, enjoying their warm hospitality.\n"; //Вы решили остановиться у жителей деревни, наслаждаясь их теплым гостеприимством.
                }
            }
            else {
                cout << "You thank the villagers and leave, feeling enriched by their stories.\n"; //Вы благодарите жителей деревни и уходите, чувствуя себя обогащенным их рассказами».
            }
        }
        else {
            cout << "You leave the village feeling curious about the stories you could have heard.\n"; //Покидая деревню, вы чувствуете любопытство по поводу историй, которые вы могли услышать.
        }
    }
    else if (choice == "3") {
        cout << "You chose to leave the village. The road ahead is uncertain.\n"; //Вы решили покинуть деревню. Дорога впереди неясна.
    }
    else {
        cout << "Invalid choice. Please restart the adventure.\n";  //Неверный выбор. Пожалуйста, перезапустите приключение.
    }

    return 0;
}