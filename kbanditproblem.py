import random
import numpy as np
import matplotlib.pyplot as plt

class Agent:
	def __init__(self, num_actions):
		self.num_actions = num_actions
		self.est_vals = np.array([0] * self.num_actions, dtype=np.float32)
		self.action_counts = np.array([0] * self.num_actions)

	def choose_action(self, epsilon):
		rand_num = random.random()
		if rand_num > epsilon:
			action = np.argmax(self.est_vals) 
		else:
			action = random.randint(0, self.num_actions - 1)

		self.action_counts[action] += 1

		return action

	def update_values(self, action, reward):
		curr_action_est = self.est_vals[action]                         
		est_update = (reward - curr_action_est) / self.action_counts[action]
		print(est_update)
		self.est_vals[action] += est_update

class Bandit:
	def __init__(self, k):
		self.true_rewards = dict()
		for i in range(k):
			rand_num = random.random()
			mu = rand_num * 6 - 3
			print(mu)
			self.true_rewards[i] = (mu, 1)

	def return_reward(self, action):
		mu, sigma = self.true_rewards[action]
		sampled_reward = np.random.normal(mu, sigma)
		return sampled_reward
			
def main(k=10, n = 1000, e=0.1):
	agent = Agent(k)
	bandit = Bandit(k)
	rewards_tracker = []
	values_tracker = []
	for i in range(n):
		if i % 10 == 0:
			print(f"Run {i}/{n}")
		action = agent.choose_action(e)
		reward = bandit.return_reward(action)
		agent.update_values(action, reward)

		rewards_tracker.append(reward)
		values_tracker.append(agent.est_vals.copy())

	print(f"Final action counts: {agent.action_counts}")
	print(f"Agent Est Vals: {agent.est_vals}")
	print(f"Actual Rewards: {bandit.true_rewards}")
	
	plt.plot(range(n), rewards_tracker)
	plt.title("Rewards over time")
	plt.xlabel("Runs")
	plt.ylabel("Rewards")
	plt.show()
	

	
if __name__ == "__main__":
	main()
