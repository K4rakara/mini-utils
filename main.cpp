#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char* argv[])
{
	if (argc >= 1)
	{
		for (int i = 0; i < argc; i++)
		{
			if (i != 0)
			{
				string thisLine;
				ifstream thisFile (argv[i]);
				if (thisFile.is_open())
				{
					while (getline(thisFile, thisLine)) cout << thisLine << "\n";
					thisFile.close();
				}
				else
				{
					cerr << "Could not open file \"" << argv[i] << "\".\n";
					return 1;
				}
			}
		}
	}
	else
	{
		cout
			<< "Fcat\n"
			<< "Quick and dirty file concatenation.\n"
			<< "\n"
			<< "Simply pass file names to this program and they will be outputted to stdout.";
	}
	return 0;
}
