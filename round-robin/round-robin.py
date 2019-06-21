
div1 = ["Ferrari", "Chevy", "Ford", "Lambo"]
div2 = ["Bugatti", "McLaren", "Aston", "Martin"]
div3 = ["Pagani", "Porsche", "Spyker", "BMW"]

def create_schedule(list):
    """ Create a schedule for the teams in the list and return it"""
    s = []

    if len(list) % 2 == 1: list = list + ["BYE"]

    for i in range(len(list)-1):

        mid = len(list) / 2
        l1 = list[:mid]
        l2 = list[mid:]
        l2.reverse()	

        # Switch sides after each round
        if(i % 2 == 1):
            s = s + [ zip(l1, l2) ]
        else:
            s = s + [ zip(l2, l1) ]

        list.insert(1, list.pop())

    return s


def main():
    for round in create_schedule(div1):
        for match in round:
            print match[0] + " - " + match[1]
    print
    for round in create_schedule(div2):
        for match in round:
            print match[0] + " - " + match[1]
    print
    for round in create_schedule(div3): 
        for match in round:
            print match[0] + " - " + match[1]
    print
    for round in create_schedule(div1+div2+div3): 
        for match in round:
            print match[0] + " - " + match[1]
        print


if __name__ == "__main__":
    main()
