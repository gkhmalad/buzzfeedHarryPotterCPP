#include <iostream>

using namespace std;

int main()
{

    // Declarations
    int gryffindor = 0;
    int hufflepuff = 0;
    int ravenclaw = 0;
    int slytherin = 0;

    int ans1;
    int ans2;
    int ans3;
    int ans4;

    string house;

    cout << "The Sorting Hat Quiz!\n\n";
    cout << "Q1) When I'm dead, I want people to remember me as:\n\n  1) The Good\n  2) The Great\n  3) The Wise\n  4) The Bold\n\n";
    cin >> ans1;

    switch (ans1)
    {
    case 1:
        hufflepuff++;
        break;
    case 2:
        slytherin++;
        break;
    case 3:
        ravenclaw++;
        break;
    case 4:
        gryffindor++;
        break;
    default:
        break;
    }

    cout << "Q2) Dawn or Dusk?\n\n  1) Dawn\n  2) Dusk\n\n";
    cin >> ans2;

    switch (ans2)
    {
    case 1:
        gryffindor++;
        ravenclaw++;
        break;
    case 2:
        slytherin++;
        hufflepuff++;
        break;
    default:
        break;
    }

    cout << "Q1) Which kind of instrument most pleases your ear?\n\n  1) The violin\n  2) The trumpet\n  3) The piano\n  4) The drum\n\n";
    cin >> ans3;

    switch (ans3)
    {
    case 2:
        hufflepuff++;
        break;
    case 1:
        slytherin++;
        break;
    case 3:
        ravenclaw++;
        break;
    case 4:
        gryffindor++;
        break;
    default:
        break;
    }

    cout << "Q1) Which road tempts you the most?\n\n  1) The wide, sunny grassy lane\n  2) The narrow, dark, lantern-lit alley\n  3) The twisting, leaf-strewn path through woods\n  4) The cobbled street lined (ancient buildings)\n\n";
    cin >> ans4;

    switch (ans4)
    {
    case 1:
        hufflepuff++;
        break;
    case 2:
        slytherin++;
        break;
    case 4:
        ravenclaw++;
        break;
    case 3:
        gryffindor++;
        break;
    default:
        break;
    }

    int max = 0;

    if (gryffindor > max)
    {

        max = gryffindor;
        house = "Gryffindor";
    }

    if (hufflepuff > max)
    {

        max = hufflepuff;
        house = "Hufflepuff";
    }

    if (ravenclaw > max)
    {

        max = ravenclaw;
        house = "Ravenclaw";
    }

    if (slytherin > max)
    {

        max = slytherin;
        house = "Slytherin";
    }

    cout << house << endl;
}