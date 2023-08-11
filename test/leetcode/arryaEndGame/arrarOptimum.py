import random

# nums = [1, 5, 233, 7]
nums = []
for i in range(random.randint(4, 6)):
    nums.append(random.randint(0, 9))
#
# for i in range(3):
#     array.append(random.randint(0, 9))

player1dB = []
player2dB = []
stepArray = []


def sumOf(arr):
    sum = 0
    for x in arr:
        sum = sum + x
    return sum


def takeFirst(e):
    return e[0]


def compStep(step, evenOrOdd):
    if evenOrOdd == 2:
        return step % 2 == 0
    else:
        return step % 2 != 0


def recIf(firstOrSecond, choice, arr, sum, steps=0):
    global stepArray
    steps += 1
    if len(arr) == 1:
        stepArray.append([steps, choice, [], arr, sum])
        return arr[0]
    else:
        if choice == arr[0]:
            if compStep(steps, firstOrSecond):
                sum += arr[0]
            newArr = arr[1:]
        elif choice == arr[-1]:
            if compStep(steps, firstOrSecond):
                sum += arr[-1]
            newArr = arr[:-1]
        stepArray.append([steps, choice, newArr, arr, sum])
        sum = sum + max(
            recIf(firstOrSecond, newArr[0], newArr, sum, steps),
            recIf(firstOrSecond, newArr[-1], newArr, sum, steps),
        )
        return sum


def displaySteps():
    global stepArray
    stepArray = sorted(stepArray, key=takeFirst)
    for si, s in enumerate(stepArray):
        for ssi, ss in enumerate(stepArray):
            if s[2] == ss[3]:
                stepArray.insert(si + 1, stepArray.pop(ssi))

    for si, s in enumerate(stepArray):
        print(
            "\t" * (s[0] - 1),
            f"\u001b[32mStep: {s[0]}: \u001b[33m{s[3]} \u001b[35m− \033[1m{s[1]}\u001b[m      \u001b[31mSum = {s[-1]}",
        )


print(recIf(1, nums[0], nums[:], 0))
# print(nums)

displaySteps()


def optimumSum():
    pass
