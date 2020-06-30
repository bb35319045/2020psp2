# 課題4 レポート

bb35319045 松本聡浩

## 課題

[../sample/heights.csv]は標本全体（男性と女性合わせた14人）のデータをまとめたものである．
一方，[../sample/IDs.csv]は標本14人の学籍番号（身長データと同じ順番）である．
学籍番号を尋ねて，その学籍番号のデータがリストにあれば，学籍番号，身長，性別のデータを表示し，リストになければ，「No data」と表示せよ．

この二つのファイルを読み取り，学籍番号，身長，性別の3つをメンバーとする構造体の配列で管理するとよい．

## ソースコードの説明
5~10:PERSON_DATAという構造体を定義
23: 入力するIDを定義
24:for文で利用するiを定義
26~45:k01等で使ったファイルを読み込むコード
47~48:こちらか入力するIDを読み取る
51,52:sscanfを用いてファイルの値を読み取り
55~67:もしIDがファイルのIDと一致すれば身長、性別も表示する
69~73:IDがファイルにない場合に'No data'と示す





## 入出力結果

例えば，ID 45313125のデータを調べたいとき，

```
Input the filename of sample height : ../sample/heights.csv
Input the filename of sample ID : ../sample/IDs.csv
Which ID's data do you want? : 45313125
---
ID : 45313125
gender : Female
height : 152.4
```

例えば，ID 45313124のデータを調べたいとき，

```
Input the filename of sample height : ../sample/heights.csv
Input the filename of sample ID : ../sample/IDs.csv
Which ID's data do you want? : 45313124
---
No data
```

## 修正履歴
[comment #20200630]
- while文を用いて先にデータを格納してしまい、出力をfor文で行う手法を取ってみてはいかがでしょうか。
- while(fgets(buf_height,sizeof(buf_height),fp_height) != NULL){
  //データの読み込みのプログラム}という風に書くといいでしょう。