for tc in range(int(input())):
    problems, students = map(int, input().split())
    count_easy, count_hard = 0, 0
    results = list(map(int, input().split()))
    for i in results:
        if i >= students // 2: count_easy += 1
        if i <= students // 10: count_hard += 1
    if count_hard == 2 and count_easy == 1: print('yes')
    else: print('no')