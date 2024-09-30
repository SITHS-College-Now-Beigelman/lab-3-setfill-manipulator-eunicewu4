 //Eunice Wu
 //Lab 3 - Setfill Manipulator 
 //September 30, 2024
#include <iostream> // allows code like cout to be used from this libaray
#include <iomanip>

using namespace std; // allows cout and endl be used without prefix std::

int main()
{
    //Top of box
    cout << left; // set setw manipulator’s default output is left-justified
    cout << setfill('#') << setw (85) << "#" << "#"<< endl; // Prints the top of the box; creates the side hashtags and fills inside with hashtags.
    cout << setfill(' ') << setw (85) << "#" << "#"<< endl; // Prints the side of box; creates the side hashtags and fills inside with spaces.
    //Inside of box
    cout << "#" << setw (84) << " Ways to access the Task Manager on your Windows computer:" << "#"<< //Creates side hashtags and add text
    cout << setfill(' ') << setw (85) << "#" << "#"<< endl;// Prints the side of box; creates the side hashtags and fills inside with spaces.

    cout << setw(13) << "#" << setw (72) << "Press the key combination Ctrl + Shift + Escape" << "#"<< endl; //Creates side hashtags, create the indent space and add text
    cout << setfill(' ') << setw (85) << "#" << "#"<< endl;// Prints the side of box; creates the side hashtags and fills inside with spaces.

    cout << setw(13) << "#" << setw (76) << "Press the key combination Ctrl + Alt + Delete and select “Task Manager”" << "#"<< endl; //Creates side hashtags, create the indent space and add text
    cout << setfill(' ') << setw (85) << "#" << "#"<< endl;// Prints the side of box; creates the side hashtags and fills inside with spaces.
    cout << setw(13) << "#" << setw (76) << "Type “Task Manager” in the Windows Start menu search" << "#"<< endl;//Creates side hashtags, create the indent space and add text
    
    //Bottom of box
    cout << setfill(' ') << setw (85) << "#" << "#"<< endl; // Prints the side of box; creates the side hashtags and fills inside with spaces.
    cout << setfill('#') << setw (85) << "#" << "#"<< endl; // Prints the bottom of the box; creates the side hashtags and fills inside with hashtags.
    return 0; //ends the code
}

/*
######################################################################################
#                                                                                    #
# Ways to access the Task Manager on your Windows computer:                          #
#                                                                                    #
#            Press the key combination Ctrl + Shift + Escape                         #
#                                                                                    #
#            Press the key combination Ctrl + Alt + Delete and select “Task Manager” #
#                                                                                    #
#            Type “Task Manager” in the Windows Start menu search                    #
#                                                                                    #
######################################################################################

*/