一，流程說明
1.匯入檔案
2.進行比較
3.輸出結果
二，注意事項
1.請勿在資料輸入字串


size=1000
sort(): 0.004 seconds
v1/v2 are different.
insertion_sort(): 0.319 seconds
v1/v2 are the same.
size=10000
sort(): 0.033 seconds
v1/v2 are different.
insertion_sort(): 26.27 seconds
v1/v2 are the same.
size=100000
sort(): 0.314 seconds
v1/v2 are different.
insertion_sort(): 7018.14 seconds
v1/v2 are the same.
可看出複雜度o(nlogn)的quik sort
都比複雜度o(n^2)時間短
然而測資數量越大時，兩折時間差被放大，因此資料大時，一方明顯慢了
因此測資大時建議使用quik sort
