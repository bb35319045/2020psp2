# t分布

<p align="center"><img src="/Reference/tex/7c11f42c90963c6b068f8915322af808.svg?invert_in_darkmode&sanitize=true" align=middle width=266.38876274999996pt height=48.91996725pt/></p>

正規分布<img src="/Reference/tex/49e2504c237adb72fc934512fbae2005.svg?invert_in_darkmode&sanitize=true" align=middle width=92.62765709999998pt height=26.76175259999998pt/>に従うと思われる標本（<img src="/Reference/tex/f9c4988898e7f532b9f826a75014ed3c.svg?invert_in_darkmode&sanitize=true" align=middle width=14.99998994999999pt height=22.465723500000017pt/>）で求めた以下の統計量<img src="/Reference/tex/2f118ee06d05f3c2d98361d9c30e38ce.svg?invert_in_darkmode&sanitize=true" align=middle width=11.889314249999991pt height=22.465723500000017pt/>の出現確率は自由度<img src="/Reference/tex/e35caf405a5e9b4afd75a0d338c4dc12.svg?invert_in_darkmode&sanitize=true" align=middle width=43.31036984999999pt height=22.465723500000017pt/>のt分布に従う．

<p align="center"><img src="/Reference/tex/f8257b4d90e6e99f33940ae822357837.svg?invert_in_darkmode&sanitize=true" align=middle width=149.90800604999998pt height=49.14819195pt/></p>

真の母分散<img src="/Reference/tex/e6718aa5499c31af3ff15c3c594a7854.svg?invert_in_darkmode&sanitize=true" align=middle width=16.535428799999988pt height=26.76175259999998pt/>がわからなくともよい．

そもそもは，
統計量<img src="/Reference/tex/22928e49ee99611f3fdc7c6bfd4b86a2.svg?invert_in_darkmode&sanitize=true" align=middle width=97.84430699999999pt height=26.76175259999998pt/>が，<img src="/Reference/tex/49e2504c237adb72fc934512fbae2005.svg?invert_in_darkmode&sanitize=true" align=middle width=92.62765709999998pt height=26.76175259999998pt/>に従い，
統計量<img src="/Reference/tex/62e0782b4c77a5b0b3c27bdce55e6ca2.svg?invert_in_darkmode&sanitize=true" align=middle width=86.04448874999999pt height=26.76175259999998pt/>が，<img src="/Reference/tex/691c3f56fb94d0e9aaa6ad24fd35a041.svg?invert_in_darkmode&sanitize=true" align=middle width=73.7556171pt height=26.76175259999998pt/>に従い，
<img src="/Reference/tex/5b51bd2e6f329245d425b8002d7cf942.svg?invert_in_darkmode&sanitize=true" align=middle width=12.397274999999992pt height=22.465723500000017pt/>と<img src="/Reference/tex/84c95f91a742c9ceb460a83f9b5090bf.svg?invert_in_darkmode&sanitize=true" align=middle width=17.80826024999999pt height=22.465723500000017pt/>を用いて<img src="/Reference/tex/e6718aa5499c31af3ff15c3c594a7854.svg?invert_in_darkmode&sanitize=true" align=middle width=16.535428799999988pt height=26.76175259999998pt/>を相殺して消したものです．

<p align="center"><img src="/Reference/tex/e1fe9a43e027dda4cddd31c5c430b022.svg?invert_in_darkmode&sanitize=true" align=middle width=461.94883515pt height=56.84951415pt/></p>

不偏分散<img src="/Reference/tex/8fd627482c3317950ad778517d544d4f.svg?invert_in_darkmode&sanitize=true" align=middle width=177.0201741pt height=32.256008400000006pt/>を使うと，<img src="/Reference/tex/84c95f91a742c9ceb460a83f9b5090bf.svg?invert_in_darkmode&sanitize=true" align=middle width=17.80826024999999pt height=22.465723500000017pt/>は，

<p align="center"><img src="/Reference/tex/13ee34aafe8b40fd1defc91ccb714431.svg?invert_in_darkmode&sanitize=true" align=middle width=229.23583485pt height=35.77743345pt/></p>

となり，<img src="/Reference/tex/5b51bd2e6f329245d425b8002d7cf942.svg?invert_in_darkmode&sanitize=true" align=middle width=12.397274999999992pt height=22.465723500000017pt/>を<img src="/Reference/tex/84c95f91a742c9ceb460a83f9b5090bf.svg?invert_in_darkmode&sanitize=true" align=middle width=17.80826024999999pt height=22.465723500000017pt/>の2乗根で割ると，<img src="/Reference/tex/e6718aa5499c31af3ff15c3c594a7854.svg?invert_in_darkmode&sanitize=true" align=middle width=16.535428799999988pt height=26.76175259999998pt/>が消えます．
<p align="center"><img src="/Reference/tex/296fca80c98c225ff5d6815d5612f926.svg?invert_in_darkmode&sanitize=true" align=middle width=376.15823355pt height=67.45395359999999pt/></p>

<img src="/Reference/tex/5b51bd2e6f329245d425b8002d7cf942.svg?invert_in_darkmode&sanitize=true" align=middle width=12.397274999999992pt height=22.465723500000017pt/>における<img src="/Reference/tex/e6718aa5499c31af3ff15c3c594a7854.svg?invert_in_darkmode&sanitize=true" align=middle width=16.535428799999988pt height=26.76175259999998pt/>を<img src="/Reference/tex/55ab6111c6bbe722ee25eb4469ce9c7a.svg?invert_in_darkmode&sanitize=true" align=middle width=15.96281939999999pt height=26.76175259999998pt/>に変えたものになると使い勝手がよさそうで，それを<img src="/Reference/tex/2f118ee06d05f3c2d98361d9c30e38ce.svg?invert_in_darkmode&sanitize=true" align=middle width=11.889314249999991pt height=22.465723500000017pt/>とします．

<p align="center"><img src="/Reference/tex/c163c5ec7dd63908cc7c118ff76a8ef2.svg?invert_in_darkmode&sanitize=true" align=middle width=193.4945562pt height=50.79200279999999pt/></p>

## 2群の平均の差の有無についての検定

データそのものでなく，データの差が問題となっている．

データの差を新しいデータとすると，差データについて，統計量<img src="/Reference/tex/5b51bd2e6f329245d425b8002d7cf942.svg?invert_in_darkmode&sanitize=true" align=middle width=12.397274999999992pt height=22.465723500000017pt/>だとか<img src="/Reference/tex/2f118ee06d05f3c2d98361d9c30e38ce.svg?invert_in_darkmode&sanitize=true" align=middle width=11.889314249999991pt height=22.465723500000017pt/>などを求めて，標準正規分布だとかT分布とかと比較すればよい．

### 差データの母平均

差が無いときの差データの母平均は意味からしてゼロである．

### 差データの母分散

#### 既知

<img src="/Reference/tex/e6718aa5499c31af3ff15c3c594a7854.svg?invert_in_darkmode&sanitize=true" align=middle width=16.535428799999988pt height=26.76175259999998pt/>とわかっていれば，<img src="/Reference/tex/5b51bd2e6f329245d425b8002d7cf942.svg?invert_in_darkmode&sanitize=true" align=middle width=12.397274999999992pt height=22.465723500000017pt/>を求められる．差データの標本平均を<img src="/Reference/tex/51b214a4897c4cd9a7950ece6142017b.svg?invert_in_darkmode&sanitize=true" align=middle width=11.12740034999999pt height=27.342470100000007pt/>とすれば，<img src="/Reference/tex/39551c4a887ee2b0b58e0b8050b547e9.svg?invert_in_darkmode&sanitize=true" align=middle width=21.53172614999999pt height=14.15524440000002pt/>,<img src="/Reference/tex/a36a1e0b007884ba84d6355b48c564b5.svg?invert_in_darkmode&sanitize=true" align=middle width=17.56674314999999pt height=14.15524440000002pt/>を2群それぞれのサイズとして，

<p align="center"><img src="/Reference/tex/dd028cec26cd68b44f9b109076b37d85.svg?invert_in_darkmode&sanitize=true" align=middle width=115.28922899999999pt height=53.23037444999999pt/></p>

分母の<img src="/Reference/tex/584a151c2aa11eafd7d33c27f79ea1e5.svg?invert_in_darkmode&sanitize=true" align=middle width=58.61816235pt height=33.45973289999998pt/>だが，サイズが2群で異なるので，調和平均で平均的サイズを求めているに過ぎない．

<p align="center"><img src="/Reference/tex/b9def59114f45aa1195604daa23850f7.svg?invert_in_darkmode&sanitize=true" align=middle width=100.50838544999999pt height=37.6933392pt/></p>

#### 未知

未知のときは，不偏分散<img src="/Reference/tex/55ab6111c6bbe722ee25eb4469ce9c7a.svg?invert_in_darkmode&sanitize=true" align=middle width=15.96281939999999pt height=26.76175259999998pt/>を使って<img src="/Reference/tex/2f118ee06d05f3c2d98361d9c30e38ce.svg?invert_in_darkmode&sanitize=true" align=middle width=11.889314249999991pt height=22.465723500000017pt/>分布だが，2群それぞれで不偏分散が異なる(<img src="/Reference/tex/08017d0decc3c59b42243039f5e6ae67.svg?invert_in_darkmode&sanitize=true" align=middle width=21.07512329999999pt height=26.76175259999998pt/>と<img src="/Reference/tex/0f9cc962e464666c850fe243e7627e71.svg?invert_in_darkmode&sanitize=true" align=middle width=17.110140299999987pt height=26.76175259999998pt/>)．そもそも不偏分散は母分散の推定値であり，推定値は1つにしないといけない．

* 2群それぞれの母分散が異なるとき，差の母分散の推定は信用度が下がる，
  というか難しいことは想像できる．過去の様々な研究から，Welchという人が，例の<img src="/Reference/tex/2f118ee06d05f3c2d98361d9c30e38ce.svg?invert_in_darkmode&sanitize=true" align=middle width=11.889314249999991pt height=22.465723500000017pt/>値の分母<img src="/Reference/tex/4b2eb1a6d2e809bf8f55112f602cae56.svg?invert_in_darkmode&sanitize=true" align=middle width=14.187764249999999pt height=33.45973289999998pt/>を
  
  <p align="center"><img src="/Reference/tex/0faf2e8b7b3f5ca67ca8a1ba2b152e7d.svg?invert_in_darkmode&sanitize=true" align=middle width=64.77868319999999pt height=42.663701849999995pt/></p>
  
  としたものを考えている．直観的で簡単に見えるが，比較するt分布の自由度が複雑である．

* 2群それぞれの母分散が等しいと想定できるなら，ぐっと簡単になり，まず平均的な不偏分散を求める．それぞれの自由度による重み平均である．
  
  <p align="center"><img src="/Reference/tex/3ea68f44a638628b9eca9915f646b799.svg?invert_in_darkmode&sanitize=true" align=middle width=391.74134504999995pt height=37.6933392pt/></p>

  あとは母分散既知のときの<img src="/Reference/tex/e6718aa5499c31af3ff15c3c594a7854.svg?invert_in_darkmode&sanitize=true" align=middle width=16.535428799999988pt height=26.76175259999998pt/>のかわりに<img src="/Reference/tex/55ab6111c6bbe722ee25eb4469ce9c7a.svg?invert_in_darkmode&sanitize=true" align=middle width=15.96281939999999pt height=26.76175259999998pt/>を使うだけで，

  <p align="center"><img src="/Reference/tex/696c7ec575c88afa8926e53cc0592383.svg?invert_in_darkmode&sanitize=true" align=middle width=114.78127155pt height=53.23037444999999pt/></p>

  が自由度<img src="/Reference/tex/6375c284c3180270ae05ac7fbfd6ca83.svg?invert_in_darkmode&sanitize=true" align=middle width=117.45428804999999pt height=21.18721440000001pt/>のt分布に従う．

## t分布におけるT値以上の出現確率

一番上に示したt分布の式で求められるが，<img src="/Reference/tex/b2af456716f3117a91da7afe70758041.svg?invert_in_darkmode&sanitize=true" align=middle width=10.274003849999989pt height=22.465723500000017pt/>関数が厄介である．

よって，t検定では，出現確率が1%未満だとか5%未満だとかになるT値の限界値を現実的な自由度ごとの表によって与えている．標本から求めたTがこの限界値より大きく離れるほど，そのT以上の確率は1％や5％未満となる．

表は，統計の教科書などに絶対載ってる．

