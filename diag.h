#include <iostream>
using namespace std;

char ch;

void printPatternTRAIN() {
	cout << "\n";
	for (int i = 0;  i < 8; i++) {

//for t

		 cout << " ";
		 for (int t = 0; t < 8; t++) {

			if (i < 2 && t < 8) {
		 		cout << ch;
		 	}

			if (i > 1 && t < 3) {
				cout << " ";
			}

			if (i > 1 && t > 2 && t < 5) {
				cout << ch;
			}

			if (i > 1 && t > 4) {
				cout << " ";
			}

		}

		//for r
		cout << " " << ch << ch;
		for(int r = 0; r < 6; r++) {
			if (i == 0 && r < 5) {
				cout << ch;
			} else if (i == 1) {
				cout << ch;
			} else if (i < 4 && i > 0 && r > 3) {
				cout << ch;
			} else if (i >= 4) {
				if (i == 4 && (r == 3 | r == 4)) {
					cout << ch;
				} else if (r == i - 2 || r == i - 3) {
					cout << ch;
				} else {
					cout << " ";
				}
			} else {
				cout << " ";
			}
		}

		//for a
		cout << " ";
		for (int a = 0; a < 8; a++) {
			if (i == 0 && (a == 0 || a == 7))
				cout << " ";
			else if (a < 2 || a > 5) {
				cout << ch;
			}
			else if (i < 2 || (i > 3 && i < 5)) {
				cout << ch;
			}
			else
				cout << " ";
		}

		//for i
		cout << " ";
		for (int t = 0; t < 8; t++) {

			if ((i < 1 || i > 6) && t < 8) {
				cout << ch;
			}
			else if (i > 0 && t < 3)
				cout << " ";
			else if (i > 0 && t > 2 && t < 5) {
				cout << ch;
			}
			else if (i > 0 && t > 4)
				cout << " ";
		}

		//for n
		cout << " ";
		for (int n = 0; n < 8; n++) {
			if (n < 2 || n > 5) {
				 cout << ch;
			}
			else if (i == n - 1 || i == n + 1 || i == n) {
				cout << ch;
			}
			else
				cout << " ";
		}

		cout << '\n';
	}
}

void printPatternCONTROL() {
	for (int i = 0; i < 8; i++) {

		//for c
		cout << " ";
		for (int o = 0; o < 8; o++) {
			if (i == 0 && (o <= 1))
				cout << " ";
			else if (i == 1 && (o == 0 || o == 8 - i || (o > 1)))
				cout << " ";
			else if (i == 2 && (o == 1 || o == 8 - i || (o > 1)))
				cout << " ";
			else if ((i == 3 || i == 4 || i == 5) && (o > 0))
				cout << " ";
			else if (i == 6 && (o == 0 || o == 8 + 5 - i || (o > 1)))
				cout << " ";
			else if (i == 7 && (o <= 1))
				cout << " ";
			else {
				cout << ch;
			}
		}
		cout << " ";
		for (int o = 0; o < 8; o++) {
			if (i == 0 && (o <= 1 || o >= 6 - i))
				cout << " ";
			else if (i == 1 && (o == 0 || o == 8 - i || (o < 6 && o > 1)))
				cout << " ";
			else if (i == 2 && (o == 1 || o == 8 - i || (o < 6 && o > 1)))
				cout << " ";
			else if ((i == 3 || i == 4 || i == 5) && (o > 0 && o < 7))
				cout << " ";
			else if (i == 6 && (o == 0 || o == 8 + 5 - i || (o < 6 && o > 1)))
				cout << " ";
			else if (i == 7 && (o <= 1 || o >= 6 - i + 7))
				cout << " ";
			else {
				cout << ch;
			}
		}

		//for n
		cout << " ";
		for (int n = 0; n < 8; n++) {
			if (n < 2 || n > 5) {
				cout << ch;
			}
			else if (i == n - 1 || i == n + 1 || i == n) {
				cout << ch;
			}
			else
				cout << " ";
		}

		//for t
		cout << " ";
		for (int t = 0; t < 8; t++) {

			if (i < 2 && t < 8) {
				cout << ch;
			}

			if (i > 1 && t < 3)
				cout << " ";
			if (i > 1 && t > 2 && t < 5) {
				cout << ch;
			}
			if (i > 1 && t > 4)
				cout << " ";
		}

		// //for r
		cout << " " << ch << ch;
		for(int r = 0; r < 6; r++) {
			if (i == 0 && r < 5) {
				cout << ch;
			} else if (i == 1) {
				cout << ch;
			} else if (i < 4 && i > 0 && r > 3) {
				cout << ch;
			} else if (i >= 4) {
				if (i == 4 && (r == 3 | r == 4)) {
					cout << ch;
				} else if (r == i - 2 || r == i - 3) {
					cout << ch;
				} else {
					cout << " ";
				}
			} else {
				cout << " ";
			}
		}

		// for o
		cout << " ";
		for (int o = 0; o < 8; o++) {
			if (i == 0 && (o <= 1 || o >= 6 - i))
				cout << " ";
			else if (i == 1 && (o == 0 || o == 8 - i || (o < 6 && o > 1)))
				cout << " ";
			else if (i == 2 && (o == 1 || o == 8 - i || (o < 6 && o > 1)))
				cout << " ";
			else if ((i == 3 || i == 4 || i == 5) && (o > 0 && o < 7))
				cout << " ";
			else if (i == 6 && (o == 0 || o == 8 + 5 - i || (o < 6 && o > 1)))
				cout << " ";
			else if (i == 7 && (o <= 1 || o >= 6 - i + 7))
				cout << " ";
			else {
				cout << ch;
			}
		}

			//for l
			cout << " " << ch << ch;
			if (i == 6) {
				{
					cout << ch << ch << ch << ch << ch << ch;
				}
			}
			if (i == 7) {
				cout << ch << ch << ch << ch << ch << ch;
			}

		cout << "\n";
	}
}

void printPatternSYSTEM() {
	for (int i = 0; i < 8; i++) {

		//for s
		cout << " ";
		for (int j = 0; j < 7; j++) {
			if (i == 0 && j > 0) {
				cout << ch;
			}
			else if (i > 0 && i < 3 && j < 2) {
				cout << ch;
			}
			else if (i == 3 && j > 0 && j < 6) {
				cout << ch;
			}
			else if (i > 3 && i < 6 && j > 4) {
				cout << ch;
			}
			else if (i == 6 && j < 6) {
				cout << ch;
			}

			else
				cout << " ";
		}

		//for y
		cout << " ";
		for (int y = 0; y < 8; y++) {
			if (i < 4) {
				if (y == i || y == i + 1 || y == 6 - i || y == 7 - i) {
					cout << ch;
				}
				else
					cout << " ";
			}
			else if (y == 3 || y == 4) {
				cout << ch;
			}
			else
				cout << " ";
		}

		//for s
		cout << " ";
		for (int j = 0; j < 7; j++) {
			if (i == 0 && j > 0) {
				cout << ch;
			}
			else if (i > 0 && i < 3 && j < 2) {
				cout << ch;
			}
			else if (i == 3 && j > 0 && j < 6) {
				cout << ch;
			}
			else if (i > 3 && i < 6 && j > 4) {
				cout << ch;
			}
			else if (i == 6 && j < 6) {
				cout << ch;
			}
			else
				cout << " ";
			}

			//for t

			cout << " ";
			for (int t = 0; t < 8; t++) {
						if (i < 2 && t < 8) {
					 		cout << ch;
					 	}

						if (i > 1 && t < 3) {
							cout << " ";
						}

						if (i > 1 && t > 2 && t < 5) {
							cout << ch;
						}

						if (i > 1 && t > 4) {
							cout << " ";
						}
					}

					//for e
					cout << " ";
					for (int j = 0; j < 7; j++) {
						if (i == 0) {
							cout << ch;
						}
						else if (i > 0 && i < 3
								&& j < 2) {
							cout << ch;
						}
						else if (i == 3 && j < 6) {
							cout << ch;
						}
						else if (i > 3 && i < 6
								&& j < 2) {
							cout << ch;
						}
						else if (i == 6) {
							cout << ch;
						}

						else
							cout << " ";
					}

					//for m
					cout << " ";
					for (int j = 0; j < 8; j++) {
						if (j == 0 || j == 7) {
							cout << ch;
						}
						else if (i < 4
								&& (j == 7 - i || j == i)) {
							cout << ch;
						}
						else
							cout << " ";
					}


		cout << "\n";
	}
}

int diag()
{
	ch = '*';
	printPatternTRAIN();
	cout << "\n\n";
	printPatternCONTROL();
	cout << "\n\n";
	printPatternSYSTEM();
	return 0;
}
