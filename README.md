# Cinema Ticketing and E-Wallet System in C

This project is a simple Cinema Ticketing and E-Wallet System written in C. The system allows users to register, log in, select movies, choose seats, order food and drinks, and pay using cash or an e-wallet. There is also an admin panel for managing users, movies, and menus.

## Features

### User Features
- **Registration & Login:** Users can create an account and log in.
- **Movie Selection:** Choose from a list of available movies and showtimes.
- **Seat Booking:** Select seats in different studios (theater rooms).
- **Food & Beverage Orders:** Order food and drinks from the available menu.
- **Payment Methods:** Pay for tickets and orders via cash or e-wallet (top-up and withdraw supported).
- **Transaction Summary:** View a summary of tickets and food/drink orders before payment.

### Admin Features
- **User Management:** View, sort, and delete user accounts.
- **Movie Management:** Add, edit, or delete movie schedules and ticket prices.
- **Studio Management:** View seat occupation for each studio.
- **Menu Management:** Add, edit, or delete food and drink items.

## File Structure

- `main.c` - The main source code for the entire application.
- `akunuser.dat` - Binary file for storing user account information.
- `saldouser.dat` - Binary file for storing user e-wallet balances.
- `jadwal.dat` - Binary file for movie schedules and ticket prices.
- `studio[1-5].dat` - Binary files for seat occupation in each studio.
- `menumakan.dat` - Binary file for food menu.
- `menuminum.dat` - Binary file for drinks menu.

## How to Run

1. **Compile the Code:**
   ```sh
   gcc main.c -o cinema
   ```
2. **Run the Program:**
   ```sh
   ./cinema
   ```
3. **Follow the On-Screen Menu:** Choose to log in as a user or admin and follow the interaction prompts.

## Notes

- Make sure to run the program in an environment that supports the standard C library and file operations.
- The program uses simple binary files for persistent storage.
- The initial admin username and password are both `admin`.
- Usernames and passwords are stored in plain text (for learning/demo purposes only).

## Limitations

- The application uses `gets()`, which is unsafe for real-world applications due to buffer overflow risks.
- No encryption or data validation is implemented.
- The interface is console/text-based only.
- No concurrency management (single user at a time).

## License

This project is open-source and for educational purposes only.
