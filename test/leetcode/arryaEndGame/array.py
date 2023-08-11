# import random
import copy

nums = [1, 5, 233, 7]
# for i in range(random.randint(4, 6)):
#     array.append(random.randint(0, 9))
#
# for i in range(3):
#     array.append(random.randint(0, 9))

player1dB = []
player2dB = []


def sumOf(arr):
    sum = 0
    for x in arr:
        sum = sum + x
    return sum


# def recIf(arr, sum, player, opponent):
#     if len(arr) == 1:
#         return arr[0];
#     else:
#         if choice == arr[0]:
#             newArr = arr[:0]
#         elif choice == arr[-1]:
#             newArr = arr[:-1]


def endRes(Arr, sequenceA, sequenceB):
    playera = []
    playerb = []
    for noInd in range(len(Arr)):
        # print(noInd, list(range(len(Arr))))
        if noInd % 2 == 0:
            playera.append(Arr.pop(sequenceA[noInd]))
            # print("Player 1 🔴", playera)
        else:
            playerb.append(Arr.pop(sequenceB[noInd]))
            # print("Player 2 🔵", playerb)
    return playera, playerb


def check():
    listOfPerms = [[]]
    for j in range(len(nums)):
        bufPerms = copy.copy(listOfPerms)
        for i in range(2 ** (j)):
            # print("\n Top: \n", listOfPerms, "-------", bufPerms, j, i)
            zeroArr = copy.copy(bufPerms[i])
            zeroArr.append(0)
            oneArr = copy.copy(bufPerms[i])
            oneArr.append(-1)
            listOfPerms.remove(bufPerms[i])
            listOfPerms.insert(i, oneArr)
            listOfPerms.insert(i, zeroArr)

    count1 = 0
    count2 = 0
    for seq1 in listOfPerms:
        for seq2 in listOfPerms:
            player1dB, player2dB = endRes(copy.copy(nums), seq1, seq2)

            if sumOf(player1dB) >= sumOf(player2dB):
                print("WIN! ✅")
                count1 += 1
            else:
                print("LOSS! ❌", player2dB, player1dB)
                count2 += 1

    print(count1, count2)
    if count1 > count2:
        return True
    else:
        return False


print(check())
print(nums)
