def main ():


    with open('random_Numbers.txt' , 'r') as file:
        randomNumbers = []

        for line in file:
            integer = int(line.strip())
            randomNumbers.append(integer)

    multipliedNumbers = [integer * 10 for integer in randomNumbers]

    print(multipliedNumbers)

main()