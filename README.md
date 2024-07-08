# TravelCostCalculator
This program calculates the total cost of a trip based on user inputs such as destination, food preference, room preference, and maximum budget. It considers travel costs, hotel costs (both AC and non-AC options), and food costs to determine if the user's budget is sufficient for the desired trip.

Features:
Input Requirements: Users need to input their maximum budget, destination, food preference (veg/nonveg), and room preference (AC/NonAC).
Cost Calculation: Predefined costs for travel and hotels based on destination are used along with food costs based on user preference to compute the total trip cost.
Budget Check: The program checks if the computed total cost is within the user's specified budget and provides appropriate feedback.
Usage:
Compile: Compile the program using a C compiler (e.g., GCC).

gcc -o travel_cost_calculator travel_cost_calculator.c
Run: Execute the compiled program.

./travel_cost_calculator
Input: Follow the prompts to input your maximum budget, destination, food preference, and room preference.
Output: The program will display the total cost for the trip and inform you if your budget is sufficient.

Example:
Enter your maximum budget: 3000
Enter your destination: Paris
Enter your food preference (veg/nonveg): veg
Enter your room preference (AC/NonAC): AC

Total cost for travel to Paris with veg food and AC room: 3400
Your budget is not sufficient for this trip.
Notes:
The program includes default costs for destinations not explicitly listed.
Ensure inputs are entered correctly to obtain accurate results.
Feel free to clone and modify this repository for your own use or contributions. If you encounter any issues or have suggestions, please open an issue or pull request.









