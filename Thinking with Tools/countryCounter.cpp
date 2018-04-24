//Ryan Yi

#include <iostream>
#include <fstream>
#include <stdlib.h>


using namespace std;

int main (int argc, char **argv) {
    // verify the correct number of parameters
    if ( argc != 2 ) {
        cout << "Must supply the input file name as the one and only parameter" << endl;
        exit(1);
    }
    // attempt to open the supplied file
    ifstream file(argv[1], ifstream::binary);
    // report any problems opening the file and then exit
    if ( !file.is_open() ) {
        cout << "Unable to open file '" << argv[1] << "'." << endl;
        exit(2);
    }
    // read in strings
    string input[100][6]; //100 countries, 6 different categories
    /**
    @brief initialized the counts for these countries to 0. This will be used to increment counts. 
    */ 
    int US = 0, CHINA = 0, JAPAN = 0, GERMANY = 0, UK = 0, INDIA = 0, FRANCE = 0, BRAZIL = 0, ITALY = 0, CANADA = 0, RUSSIA = 0;

    /**
    @brief iterates though the 2D array to place info in each slot. 
    */
   	for(int i = 0; i < 100; i++){
   		for(int j = 0; j < 6; j++){
   			getline(file, input[i][j], ',');
        // cout << input[i][j] << endl;
   		}
   	}

   	/**
   	@brief initialized all the strings so that these strings can be found in the for loops later on. 
   	*/
   	string USRepeat = "United States";
   	string chinaRepeat = "China";
   	string japanRepeat = "Japan";
   	string germanyRepeat = "Germany";
   	string UKRepeat = "United Kingdom";
   	string indiaRepeat = "India";
   	string franceRepeat = "France";
   	string brazilRepeat = "Brazil";
   	string italyRepeat = "Italy";
   	string canadaRepeat = "Canada";
    string russiaRepeat = "Russia";

   	/**
   	@brief following cycles through the 2D array to check the occurances of the countries. 
   	*/
   	for(int i = 0; i < 100; i++){
   		for(int j = 0; j < 6; j++){
   			if(input[i][j] == USRepeat){
   				US++;
   			}
   		}
   	}
   	for(int i = 0; i < 100; i++){
   		for(int j = 0; j < 6; j++){
   			if(input[i][j] == chinaRepeat){
   				CHINA++;
   			}
   		}
   	}
   	for(int i = 0; i < 100; i++){
   		for(int j = 0; j < 6; j++){
   			if(input[i][j] == japanRepeat){
   				JAPAN++;
   			}
   		}
   	}
   	for(int i = 0; i < 100; i++){
   		for(int j = 0; j < 6; j++){
   			if(input[i][j] == germanyRepeat){
   				GERMANY++;
   			}
   		}
   	}
   	for(int i = 0; i < 100; i++){
   		for(int j = 0; j < 6; j++){
   			if(input[i][j] == UKRepeat){
   				UK++;
   			}
   		}
   	}
   	for(int i = 0; i < 100; i++){
   		for(int j = 0; j < 6; j++){
   			if(input[i][j] == indiaRepeat){
   				INDIA++;
   			}
   		}
   	}
   	for(int i = 0; i < 100; i++){
   		for(int j = 0; j < 6; j++){
   			if(input[i][j] == franceRepeat){
   				FRANCE++;
   			}
   		}
   	}
   	for(int i = 0; i < 100; i++){
   		for(int j = 0; j < 6; j++){
   			if(input[i][j] == brazilRepeat){
   				BRAZIL++;
   			}
   		}
   	}
   	for(int i = 0; i < 100; i++){
   		for(int j = 0; j < 6; j++){
   			if(input[i][j] == italyRepeat){
   				ITALY++;
   			}
   		}
   	}
   	for(int i = 0; i < 100; i++){
   		for(int j = 0; j < 6; j++){
   			if(input[i][j] == canadaRepeat){
   				CANADA++;
   			}
   		}
   	}
    for(int i = 0; i < 100; i++){
      for(int j = 0; j < 6; j++){
        if(input[i][j] == russiaRepeat){
          RUSSIA++;
        }
      }
    }


    /**
    @brief outputs the number of cars sold in each country. 
    */
		  cout << "Number of Cars Sold in the US: " << US << endl;
   		cout << "Number of Cars Sold in China: " << CHINA << endl;
   		cout << "Number of Cars Sold in Japan: " << JAPAN << endl;
   		cout << "Number of Cars Sold in Germany: " << GERMANY << endl;
   		cout << "Number of Cars Sold in UK: " << UK << endl;
   		cout << "Number of Cars Sold in India: " << INDIA << endl;
   		cout << "Number of Cars Sold in France: " << FRANCE << endl;
   		cout << "Number of Cars Sold in Brazil: " << BRAZIL << endl;
   		cout << "Number of Cars Sold in Italy: " << ITALY << endl;
   		cout << "Number of Cars Sold in Canada: " << CANADA << endl;
      cout << "Number of Cars Sold in Russia: " << RUSSIA << endl;
    // close the file before exiting
    file.close();
    return 0;
}
