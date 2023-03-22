import random  

def main():
    randomNumbers = []

    for i in range(1000):
        randomNumbers.append(random.randint(1, 1000))

    print(randomNumbers)    

    with open('random_Numbers.txt' , 'w') as file:
        for num in randomNumbers:
            file.write(str(num) + '\n')

main()