// Function asks user to enter a value
// Return value is the integer entered by the user from the keyboard
int getValueFromUser()
{
 	std::cout << "Enter an integer: ";
	int input{};
	std::cin >> input;

	return input; // return the value the user entered back to the '*caller'
  // nilai input akan kembali ke fungsi yang memanggil * (biasanya main)
}
