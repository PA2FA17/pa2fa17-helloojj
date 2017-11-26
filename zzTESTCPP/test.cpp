#include <iostream>
#include <strstream>
#include <string>
#include <string.h>

using namespace std;

int uhOh (string TroubleInRiverCity)
{
    cerr << TroubleInRiverCity << endl;
    return 1;
}
int main (int argc, char *argv [])
{
    strstream elStreamo;
    elStreamo << "ABCD" << '\0';
    cout << elStreamo.str () << endl;
    int len = strlen (elStreamo.str ());
    elStreamo.str ()[len-1] = '\0';
    cout << elStreamo.str () << endl;
    cin.get ();
    return 0;
}