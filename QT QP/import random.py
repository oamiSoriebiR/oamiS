import random
import statistics

def monte_carlo_pi():
    num_needles = 1000
    estimates = []

    while True:
        inside_circle = 0

        for _ in range(num_needles):
            x = random.uniform(-1, 1)  # Random x-coordinate between -1 and 1
            y = random.uniform(-1, 1)  # Random y-coordinate between -1 and 1

            # Check if the point is inside the circle
            if x**2 + y**2 <= 1:
                inside_circle += 1

        # Estimate π based on the ratio of needles inside the circle
        estimate = (inside_circle / num_needles) * 4
        estimates.append(estimate)

        # Check if there are at least two estimates to calculate standard deviation
        if len(estimates) >= 2 and statistics.stdev(estimates) < 0.005:
            break

        # Double the number of needles for the next iteration
        num_needles *= 2

    # Calculate the average of the estimates to obtain the final value of π
    final_pi_estimate = sum(estimates) / len(estimates)
    return final_pi_estimate

if __name__ == "__main__":
    estimated_pi = monte_carlo_pi()
    print(f"Estimated value of π: {estimated_pi}")