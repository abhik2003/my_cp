def check(row):
    if row[0]==row[1] and row[0]==row[2] and row[0]!='.':
        return True,row[0]
    return False,"*"

for _ in range (int(input())):
    board=[]
    flag=0
    for i in range(3):
        board.append(list(input()))
    for i in range(3):
        # print(board[i])
        f,w=check(board[i])
        if f:
            print(w)
            flag=1
    for i in range(3):
        col=[board[0][i],board[1][i],board[2][i]]
        f,w=check(col)
        if f:
            print(w)
            flag=1
    corner=[board[0][0],board[1][1],board[2][2]]
    f,w=check(corner)
    if f:
        print(w)
        flag=1
    corner=[board[0][2],board[1][1],board[2][0]]
    f,w=check(corner)
    if f:
        print(w)
        flag=1
    if flag==0:
        print("DRAW")