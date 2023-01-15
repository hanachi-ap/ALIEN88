
# ALIEN-88  TKL Mech Keyboard for gaming

## Specs
- TKL Mechanical Keyboard
- N-key roll over and anti-ghost
- Hot-swappable Choc low-profile key switches
- Utility keys added to right and left
- Extensive thumb keys arrangement
- Programmable wheel knob
- All keys can be redefined
- User-defined keymap of up to 10 layers
- USB wired connection
- Full-color LED lights
- Dimentions:  332mm x 133mm x 8.6mm (Excluding caps and switches)
  
## MCU
- Processor: PR2040 (Pimoroni PGA2040)
- Firmware:   
    - QMK Firmware (VIA/Remap ready)
    - PRK firmware

# 試作機おすそ分け版

## 同梱品
  - メインボード(PCB) 1枚
  - ボトムプレート(FR4製) 1枚
  - スタビライザ用スペーサ 2種 x 4枚
  - スペーサー 3.5mm 6個
  - ネジ M2 3mmネジ 6個
  - ネジ M3 5mmネジ 6個
  - 樹脂ワッシャー  6個 (ボトムプレートバグ回避のため)
  - タクトスイッチ 1個
  - ホイールノブ 1個
  - (ダイオードはPCBAしてあります)

## 他に必要なパーツ
  - PGA2040  1個
     https://akizukidenshi.com/catalog/g/gM-16762/
  - ピンヘッダ (ProMicroについてきて余ってるもの) 4個
  - スイッチソケット(Choc) 91個
  - スイッチ(Choc v1) 91個
  - Choc用スタビライザ 2U  4個
  - LED (SK6812MINI-E) 91個
  - USBケーブル (USB A to USB Cのもの)
  - キーキャップ
    - 1U     77
    - 1.25U  6
    - 1.75U  2
    - 1.5U   2
    - 2.25U  2
    - 3.0U   2 (2.25で代用も可)

## オプション
  アクリルプレートを付ける場合は、加工データをもとに
  各自で作成してください (遊舎工房へ依頼した場合、トップとボトム1枚づつで¥6,650でした)

## 試作版での既知の不具合
  - USB A to USB C のケーブルは利用できません。
    USB A to UCB Cであれば問題ありません。
    基板のUSB周りの設計のミスです。今後修正予定です

  - ボトムプレート(FR4製)の不具合
     - ボトムプレートの下面を向く側が黒く塗られておらず、基板の色がそのままになっています。
       ミリタリーグリーンのような色と思えば…
    - ボトムプレートのネジ穴が大きすぎるのでネジの頭の部分が貫通してしまいます
       同梱のワッシャーを使ってください
    - ボトムプレートを直接メインボードにネジ止めする方法がありません。
      トッププレートを装着する前提となっているためメインボードにネジ穴がありません
      側面をマスキングテープなどで覆って固定すると問題なく使えました

    なおアクリルのボトムプレートを装着する場合はFR4製ボトムプレートは不要となります。
    出来上がりを見てからアクリルをオーダするか検討されても良いでしょう。

  - アクリルのトッププレートを装着する場合、ネジ穴が1箇所干渉するところがあります
     その部分をネジ止めしないか、スタビスペーサを少しヤスリで削るなどすれば大丈夫です
     次版以降で修正予定です。
  
## つくりかた
  1. PGA2040をメインボードに取り付ける
  2. タクトスイッチをメインボードに取り付ける
  3. ファームウェアを書き込む
  4. ホイールノブをメインボードに取り付ける
  5. LEDをメインボードに取り付ける
  6. スイッチソケットをメインボードに取り付ける
  7. スタビライザを組み立てる
  8. 全体を組み立てる

### 1. PGA2040をメインボードに取り付ける
最大の山場です。取り付けの歳の表裏、向きに十分注意してください
一度間違ったはんだ付けをするとリカバリは非常に困難になります。

メインボードの表側はアクリル製のトッププレートを装着することを想定して
半田の出っ張りがない平らな状況にするのがポイントとなります。そのため正しいはんだ付けの
セオリーから外れたトリッキーなことをします。

1. 12連ピンヘッダを8連 + 4連に切り離す
  
  <img src="img/img_8968.jpg" alt="img" title="pinheader1" width=300>

2. ピンの出っ張りを 2.0～2.5mmの長さになるよう細かく調整する

  <img src="img/img_8969.jpg" alt="img" title="pinheader2" width=300>

3. メインボードの裏側にPGA2040を配置しテープで仮止めする
    - PGA2040はメインボードの裏側に取り付けます。
    - PGA2040のマークとメインボードのマークが合うように配置します。
    - 次の工程に進む前にオモテウラ、向きを十分に確かめてください。

  <img src="img/img_8972.jpg" alt="img" title="pinheader2" width=300>

4. メインボードの裏側からピンヘッダを刺し、テープで仮止めする

  <img src="img/img_8973.jpg" alt="img" title="pinheader2" width=300>

  -   メインボードの表側にピンヘッダが飛び出していないこと、極端に短くないことを確認

  <img src="img/img_8974.jpg" alt="img" title="pinheader2" width=300>

5. メインボードの表側からはんだ付けする。



    - 十分にハンダを入れるとともに山にならないように留意
    - 仕上がりは出っ張りがないツライチになるのが理想

  <img src="img/img_8976.jpg" alt="img" title="pinheader2" width=300>

6. メインボードの裏側のピンヘッダの連結部を外し、ニッパーで足を切りそろえる

  <img src="img/img_8977.jpg" alt="img" title="pinheader2" width=300>
  

7. メインボードの裏側からはんだ付けする。 
    - ここは通常のはんだ付けでOk

8. 4～7の手順を繰り返し、PGA2040のすべてのスルーホールをはんだ付けする

9. ハンダ忘れ、ブリッジなどの不良箇所がないかを自己レビューする


  <img src="img/img_8979.jpg" alt="img" title="pinheader2" width=300>

### 2. タクトスイッチをメインボードに取り付ける

1. メインボード裏面のBOOTSELと印字された所にタクトスイッチ配置し、4箇所のパッドをはんだ付けします
   - 小さいサイズなのでブリッジに注意してください
   - 繊細なスイッチなので ハンダづけの際にハンダを盛りすぎるとスイッチ内部に流れ込み
     スイッチが押せなくなってしまうということもありました。注意して作業してください。

  <img src="img/img_8981.jpg" alt="img" title="pinheader2" width=300>
  
### 3. ファームウェアを書き込む
1. PCと接続するまえに改めてハンダ箇所のレビューをする
2. BOOTSELスイッチを押しながらPCとキーボードをUSBケーブルで接続する
3. うまく認識された場合 リムーバブルドライブがマウントされます。該当するドライブをエクスプローラーで開く
   - 認識されない場合一度USBケーブルを外し、改めて注意深くこれまでの作業をレビューする
4. ファームウェアファイル ***.uf2 を、キーボードのドライブフォルダにコピーする
   - コピーが終わり新しいファームウェアが反映されると ドライブは一度アンマウントされます

#### 4. ホイールノブをメインボードに取り付ける
1. メインボードの裏側から、ホイールノブを部品の突起と基板の穴を合わせて配置
2. 6箇所のパッドと左右のパッドをはんだ付けする

  <img src="img/img_8980.jpg" alt="img" title="pinheader2" width=300>

### 5. LEDをメインボードに取り付ける
  - 91個取り付ける。
  - LEDの順序はシルクに書かれた通り。なお LED-1とLED-16は欠番です。

### 6. スイッチソケットをメインボードに取り付ける
  - 91個取り付ける。なお SW-1とSW-16は欠番です。

### 7. スタビライザを組み立てる
  - スタビライザのソケットとステムとバーを組み立てる
  - スタビスペーサAをスタビライザの上からパチンと嵌める
  - スイッチを嵌めるときは、スタビスペーサB スタビスペーサA スイッチの順に重ねて使います
  <img src="img/img_8982.jpg" alt="img" title="pinheader2" width=300>
  <img src="img/img_8983.jpg" alt="img" title="pinheader2" width=300>
  <img src="img/img_8984.jpg" alt="img" title="pinheader2" width=300>
  <img src="img/img_8985.jpg" alt="img" title="pinheader2" width=300>
  <img src="img/img_8987.jpg" alt="img" title="pinheader2" width=300>

### 8. 本体を組み立てる
  - ボトムプレート、スペーサー、メインボード (トッププレート)をねじで組み上げます
  - トッププレートがない場合、上側はネジ止めできません


# つかいかた

## ファームウェア書き込み
  BOOTSELボタンを押しながらUSBをPCへ接続するとストレージデバイスがマウントされます。新しいファームウェアをエクスプローラーからコピーすると書き込みが完了します

  デフォルトキーマップでは、一番右上のキーを押しながら一番左下のキーを押すとBOOTSELモードに移行するようになっています。
  
   - QMK Firmware [ergotonic_alien88_via.uf2](../firmware/qmk/ergotonic_alien88_via.uf2)

   - PRK Firmware [keymap.rb](../firmware/prk/keymap.rb)


## キーマップ変更
 -   VIA  https://usevia.app/#/
 -   REMAP  https://remap-keys.app/

 開発版の段階ではこう敷く登録されていないので、
 jsonファイルを読み込ませてください。

 - [alien88_via.json](../firmware/via/alien88_via.json)

