# pd2-sudoku
有兩個main檔，分別是give_question.cpp和solve.cpp
以及一個makefile，
Sudoku.cpp和Sudoku.h包含著class。

做法上我一開始採用暴力解，先檢查0那格可以填哪個數字，等檢查完把不行的刪掉，剩一種時在填入，
但這種方法會造成未知過多時，每個0可填入的可能性數目都不只一個，會無法解出。
所以我另外寫了遞迴，用回朔法先填完數字，不行再重填，
最後測試的結果，暴力解在0的個數大約48以內都可以解出，而回朔法則是怎樣都解的出來，
所以我讓0個數小於20的用暴力解(必定可以)，而以上的時候就用回朔法。

compile:
make

run:
./give_question 產生數獨的題目
or  
./solve  使用者在螢幕上輸入題目，輸入完按下Enter後，自動產生答案，
若有解，則輸出1，並接著顯示完整答案，若無解，則輸出0，多組解，則輸出2。

另外，在輸入題目給程式解的時候，最後一個數字後絕對不能有空白，
須直接按下Enter

輸入題目格式ex:
4 2 6 8 7 3 9 5 1 -1 -1 -1
0 0 3 9 5 0 6 0 4 -1 -1 -1
9 0 1 6 2 4 8 0 0 -1 -1 -1
-1 -1 -1 1 3 2 0 8 7 9 5 6
-1 -1 -1 0 8 0 1 9 0 4 2 0
-1 -1 -1 4 9 6 2 3 0 8 7 1
1 0 0 0 4 0 -1 -1 -1 6 9 5
0 0 4 0 6 0 -1 -1 -1 1 3 7
6 9 5 0 1 7 -1 -1 -1 2 8 4
3 1 2 -1 -1 -1 7 4 0 5 0 9
7 4 8 -1 -1 -1 0 6 9 3 0 2
0 6 0 -1 -1 -1 3 1 0 7 0 8

