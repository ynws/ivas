#pragma once

enum CardType {
    IDOL,
    HAPPENING,
};

enum SkillType {
    NOT_HAS_SKILL     = 0x00000000, // スキルなし
    ALL_TIME          = 0x00000001, // 【常時】
    RESERVE           = 0x00000002, // 【控室に出る】
    STAGE             = 0x00000004, // 【ステージに出る】
    WIN               = 0x00000008, // 【バトルに勝利する】
    LOSE              = 0x00000010, // 【バトルに敗北する】
    HAPPEN            = 0x00000020, // 【ハプニングカード】
    STAGE_FORCE       = 0x00000040, // 【ステージに出る】【強制発動】
    ALL_TRAINING      = 0x00000080, // 【常時】【特訓】
    RESERVE_FORCE     = 0x00000100, // 【控室に出る】【強制発動】
    EVENT_SET         = 0x00000200, // イベントが決定
    TRAINING_TO_STAGE = 0x00000400, // 【特訓】【場に出る】
};

enum EventType {
    EV_TOUR      = 0x1, // ツアー
    EV_MATCH     = 0x2, // マッチフェス
    EV_SURVIVAL  = 0x4, // サバイバル
    EV_ROYAL     = 0x8, // ロワイヤル
    EV_JOINALL   = 0xf, // 全参加
    EV_FORCE_ADD = 0xff, // 全員強制参加
};

enum CardCol {
    C_VOID   = 0x00,
    C_RED    = 0x01,
    C_BLUE   = 0x02,
    C_YELLOW = 0x04,
    C_ELSE   = 0x08,
};

enum IdolType {
    I_NULL     = 0x00000000,
    I_VISUAL   = 0x00000001,
    I_DANCE    = 0x00000002,
    I_VOCAL    = 0x00000004,
    I_VIDAVO   = 0x00000007,
    I_CUTE     = 0x00000008,
    I_COOL     = 0x00000010,
    I_PASSION  = 0x00000020,
    I_INTELLI  = 0x00000040,
    I_PHYSICAL = 0x00000080,
    I_MENTAL   = 0x00000100,
    I_PHINME   = 0x000001C0,
    I_XI       = 0x00000200,
    I_961      = 0x00000400,
    I_PUTI     = 0x00000800,
};

enum CardID {
    NOT_SET = -1,
    TRIAL_HG_AKIHA = 0,  // 体)【ハッピー☆ジーニアス】池袋晶葉
    TRIAL_BP_FUJIMOTO,   // 体)【ビーチパラダイス】藤本里奈
    TRIAL_SQ_HUUKA,      // 体)【シークレットクイーン】浅野風香＋
    TRIAL_OI_TOUMA,      // 体)【俺様系アイドル】天ヶ瀬冬馬＋
    TRIAL_TM_AI,         // 体)【突撃豆タンク】日高愛
    TRIAL_BQ_KIBA,       // 体)【ビーチクイーン】木場真奈美
    TRIAL_IO_HOKUTO,     // 体)【アイドル王子】伊集院北斗＋
    TRIAL_NM_ERI,        // 体)【ネットの迷い子】水谷絵理
    TRIAL_SG_ARAKI,      // 体)【サイバーグラス】荒木比奈＋
    TRIAL_HS_YORIKO,     // 体)【博識子女】古澤頼子
    TRIAL_GH_KOUME,      // 体)【ゴシックホラーナイトメア】白坂小梅
    TRIAL_MP_HARUNA,     // 体)【眼鏡プリンセス】上条春菜＋
    TRIAL_OP_YUKKO,      // 体)【おちゃめなサイキッカー】堀裕子
    TRIAL_NH_MIKI,       // 体)【眠れる姫君】星井美希
    TRIAL_ZB_SHOUKO,     // 体)【絶叫★ヴァンパイア】星輝子＋
    TRIAL_SM_MAHIRO,     // 体)【スポーツ祭】北川真尋
    TRIAL_NP_KIRARI,     // 体)【ニューイヤープリンセス】諸星きらり
    TRIAL_KI_SYOUTA,     // 体)【国民的弟アイドル】御手洗翔太＋
    TRIAL_OH_RYOU,       // 体)【大きな秘密】秋月涼
    TRIAL_SM_IMOUTO,     // 体)【シークレット☆モード】城ヶ崎莉嘉
    TRIAL_KINKYU,        // 体)緊急退避！
    TRIAL_PRODUCER,      // 体)プロデューサーの努力
    TRIAL_MEGANE,        // 体)メガネパワー増幅装置
    TRIAL_GYAKUTEN,      // 体)逆転ホームラン！
    TRIAL_PASSION,       // 体)ぱっしょん☆ぱわー☆ちゃーじ
    TRIAL_TAITYOU,       // 体)体調不良
    TRIAL_DOTAKYAN,      // 体)ドタキャン
    DD01_RS_MAYU,        // 【恋愛シンドローム】佐久間まゆ
    DD01_SQ_HUUKA,       // 【シークレットクイーン】浅野風香＋
    DD01_JT_SATIKO,      // 【自称天使】輿水幸子
    DD01_HG_AKIHA,       // 【ハッピー☆ジーニアス】池袋晶葉
    DD01_BP_FUJIMOTO,    // 【ビーチパラダイス】藤本里奈
    DD01_HD_ANZU,        // 【ハロウィンぷちデビル】双葉杏＋
    DD01_TM_AI,          // 【突撃豆タンク】日高愛
    DD01_OI_TOUMA,       // 【俺様系アイドル】天ヶ瀬冬馬＋
    DD01_ID_ARISA,       // 【アイドルデータベース】松田亜利沙
    DD01_MS_SAYOKO,      // 【マネージャーサポート】高山紗代子
    DD01_BQ_KIBA,        // 【ビーチクイーン】木場真奈美
    DD01_NT_RANKO,       // 【渚の天使】神崎蘭子＋
    DD01_GH_KOUME,       // 【ゴシックホラーナイトメア】白坂小梅
    DD01_NE_TINATSU,     // 【ナイトエレガンス】相川千夏＋
    DD01_HS_YORIKO,      // 【博識子女】古澤頼子
    DD01_MP_HARUNA,      // 【眼鏡プリンセス】上条春菜＋
    DD01_SG_ARAKI,       // 【サイバーグラス】荒木比奈＋
    DD01_SK_MAKINO,      // 【シークレットナイト】八神マキノ＋
    DD01_WP_HARUNA,      // 【ホワイトプリンセス】上条春菜
    DD01_WP_HARUNA_P,    // 【ホワイトプリンセス】上条春菜＋
    DD01_PI_RITSUKO,     // 【プロデューサーアイドル】秋月律子
    DD01_NM_ERI,         // 【ネットの迷い子】水谷絵理
    DD01_IO_HOKUTO,      // 【アイドル王子】伊集院北斗＋
    DD01_NM_NAO,         // 【浪速のマイペース娘】横山奈緒
    DD01_SM_IMOUTO,      // 【シークレット☆モード】城ヶ崎莉嘉
    DD01_SM_MAHIRO,      // 【スポーツ祭】北川真尋
    DD01_HM_SANAE,       // 【ハイレグマーメイド】片桐早苗
    DD01_OP_YUKKO,       // 【おちゃめなサイキッカー】堀裕子
    DD01_BP_TAKUMI,      // 【ビーチパラダイス】向井拓海
    DD01_ZV_SYOUKO,      // 【絶叫★ヴァンパイア】星輝子＋
    DD01_IK_REINA,       // 【イタズラっ子】小関麗奈
    DD01_TE_HIKARI,      // 【小さな英雄】南条光
    DD01_TE_HIKARI_P,    // 【小さな英雄】南条光＋
    DD01_LP_KIRARI,      // 【ラブリープリンセス】諸星きらり＋
    DD01_HT_WAKABAYASHI, // 【ハッピーチアー】若林智香＋
    DD01_ZN_AKANE,       // 【全力熱血】日野茜＋
    DD01_NP_KIRARI,      // 【ニューイヤープリンセス】諸星きらり
    DD01_NP_KIRARI_P,    // 【ニューイヤープリンセス】諸星きらり＋
    DD01_NH_MIKI,        // 【眠れる姫君】星井美希
    DD01_OH_RYOU,        // 【大きな秘密】秋月涼
    DD01_KO_SYOUTA,      // 【国民的弟アイドル】御手洗翔太＋
    DD01_IO_SHIHO,       // 【一匹狼】北沢志保
    DD01_SYUTYU,         // 集中豪雨
    DD01_TAITYOU,        // 体調不良
    DD01_DOTAKYAN_1,     // ドタキャン
    DD01_DOTAKYAN_2,     // ドタキャン
    DD01_SUKYANDARU,     // スキャンダル
    DD01_PRODUCER,       // プロデューサーの努力
    DD01_GYAKUTEN,       // 逆転ホームラン！
    DD01_KINKYU,         // 緊急退避！
    DD01_MEGANE,         // メガネパワー増幅装置
    DD01_PASSION,        // ぱっしょん☆ぱわー☆ちゃーじ
    DD01_P1_INBERU,      // 【PROMETHEUS 1】インベル
    DD02_MM_MIKI,        // 【ミッシングムーン】星井美希
    DD02_PS_HIBIKI,      // 【パーフェクトサン】我那覇響
    DD02_WS_TAKANE,      // 【ワンダリングスター】四条貴音
    DD02_JK_HARUKA,      // 【邪悪の化身】ハルシュタイン閣下
    DD02_MD_YAYOI,       // 【無垢なる堕天使】ヤヨイ
    DD02_SR_MAKOTO,      // 【漆黒の麗人】マコト
    DD02_CE_SAINE,       // 【サイバーエンジェル】サイネリア
    DD02_DG_YUMEKO,      // 【ドリーミーガール】桜井夢子
    DD02_KM_CHIHAYA,     // 【狂気の妄執】如月千早
    DD02_P3_NUBI,        // 【PROMETHEUS 3】ヌービアム
    DD02_GS_REIKA,       // 【偶像の支配者】東豪寺麗華
    DD02_KS_RIN,         // 【小悪魔少女】朝比奈りん
    DD02_SB_TOMOMI,      // 【静かなる微笑】三条ともみ
    DD02_KS_SANO,        // 【神の才能】佐野美心
    DD02_TA_MIRIA_P,     // 【ちびっこアクマ】赤城みりあ＋
    DD02_DK_MATSURI,     // 【デビル降臨！】徳川まつり
    DD02_TYOUHATSU,      // 挑発
    DD02_MUKOSEI,        // 無個性のアクマ
    DD02_RANNYUU,        // 乱入者現る！
    DD02_HIGH,           // ハイテンション！
    DD02_RR_IORI,        // 【竜宮令嬢】水瀬伊織
    DD02_RO_AZUSA,       // 【竜宮乙女】三浦あずさ
    DD02_RS_AMI,         // 【竜宮少女】双海亜美
    DD02_SW_CHIHAYA,     // 【Snow White】如月千早
    DD02_KM_MAMI,        // 【恋探偵物語】双海真美
    DD02_HR_YUKIHO,      // 【ハミングロード】萩原雪歩
    DD02_PB_HIBIKI,      // 【Pon De Beach】我那覇響
    DD02_PB_HIBIKI_P,    // 【Pon De Beach】我那覇響＋
    DD02_TC_MIKU,        // 【チャーミングキャット】前川みく
    DD02_NA_AKANE,       // 【猫耳アピール】野々原茜
    DD02_AS_AKO,         // 【アメリカンスタイル】土屋亜子
    DD02_OG_KONOMI,      // 【遅咲きグラビアクイーン】馬場このみ
    DD02_LM_SAKI,        // 【ラブリーメイド】水嶋咲
    DD02_VI_KAGURA_P,    // 【ヴァイオリニスト】神楽麗＋
    DD02_PR_KANON,       // 【プリティラビット】姫野かのん
    DD02_HK_KOTORI,      // 【秘められし過去】音無小鳥
    DD02_DANKETSU,       // 団結 -７６５プロALL STARS-
    DD02_KAKIN,          // 課金の力
    DD02_RITSUKO,        // 律子のプロデュース
    DD02_SAICHA,         // 再チャレンジ！
    DD02_DOUBLE,         // ダブルブッキング
    DD02_ZIBA,           // ジバニャン
    DD03_NG_SHIMA_P,     // 【ニュージェネレーション】島村卯月＋
    DD03_SU_ABE,         // 【制服ウサミン】安部菜々
    DD03_JT_SATIKO_P,    // 【自称天使】輿水幸子＋
    DD03_NG_SHIBU_P,     // 【ニュージェネレーション】渋谷凛＋
    DD03_KO_KAREN_P,     // 【煌きの乙女】北条加蓮＋
    DD03_HO_KAMIYA_P,    // 【恥じらい乙女】神谷奈緒＋
    DD03_NG_MIO_P,       // 【ニュージェネレーション】本田未央＋
    DD03_SH_MIKA_P,      // 【シークレット★ハート】城ヶ崎美嘉＋
    DD03_SM_AIKO,        // 【深緑の魔女】高森藍子
    DD03_CINDERELLA,     // シンデレラ プロジェクト
    DD04_AN_TENDO_P,     // 【赤の熱意】天道輝＋
    DD04_AN_TENDO,       // 【赤の熱意】天道輝
    DD04_AB_SAKURABA_P,  // 【青の微笑】桜庭薫＋
    DD04_MK_KASHIWAGI_P, // 【緑の風】柏木翼＋
    DD04_AH_AKUNO,       // 【悪人面のヒーロー】握野英雄
    DD04_SK_YAMASHITA,   // 【守銭奴教師】山下次郎
    DD04_KO_PIERU,       // 【カエルの国の王子様】ピエール
    DD04_AS_ASURAN,      // 【暗黒シェフ】アスラン＝BBII世
    DD04_ST_TAIGA,       // 【静かなる闘志】大河タケル
    DD04_HK_KIBASAKI,    // 【白銀のキバ】牙崎漣
    DD04_OM_ENZYOU,      // 【男道】円城寺道流
    DD04_TM_TATIBANA,    // 【テンションMAX！】橘志狼
    DD04_OK_AKIYAMA,     // 【大人の階段】秋山隼人＋
    DD04_GA_HUYUMI,      // 【学園祭】冬美旬＋
    DD04_GA_SAKAKI,      // 【学園祭】榊夏来＋
    DD04_AS_WAKASATO,    // 【秋の空】若里春名＋
    DD04_GA_ISETANI,     // 【学園祭】伊勢谷四季＋
    DD04_AT_KURENAI,     // 【アイドル特攻！！】紅井朱雀＋
    DD04_AJ_KURONO,      // 【アイドル上等！！】黒野玄武＋
    DD04_AF_KIMURA,      // 【熱き心のファイヤーマン】木村龍
    DD04_FW_WATANABE,    // 【フローラル・ウィザード】渡辺みのり
    DD04_DRIVE,          // ♪DRIVE A LIVE♪
    DD04_STARLIGHT,      // ♪STARLIGHT CELEBRATE♪
    DD04_PHYSICAL,       // フィジカル フルバースト！
    DD04_SAKURABA,       // 桜庭乱入！！アピールチャンス！
    DD04_TROUBLE,        // トラブル発生！
    DD04_GS_MIRAI,       // 【Growing Storm】春日未来
    DD04_KH_MIRAI,       // 【ここから始まる！】春日未来
    DD04_SK_KANA,        // 【戦士の心】矢吹可奈
    DD04_TR_KANA,        // 【トラブルルーキー】矢吹可奈
    DD04_LH_YURIKO,      // 【レジェンドヒーロー】七尾百合子
    DD04_IH_TAMAKI,      // 【アイドルヒーローズ】大神環
    DD04_KT_TAKANE,      // 【気ままにティータイム】四条貴音
    DD04_GG_HINATA,      // 【ジャイアントガール】木下ひなた
    DD04_KS_ANNNA,       // 【軽快！サマーテンション】望月杏奈
    DD04_DS_JURIA,       // 【ダイナミックステージ】ジュリア
    DD04_CM_MAKABE,      // 【サイバー課の問題児】真壁瑞希
    DD04_KS_TSUBASA,     // 【黄色い声援】伊吹翼
    DD04_NC_ERENA,       // 【ノリノリチアリーダー】島原エレナ
    DD04_KI_MOGAMI,      // 【究極の一杯】最上静香
    DD04_GK_MINAKO,      // 【元気看板娘】佐竹美奈子
    DD04_NC_ROKO,        // 【ニューウェーブコンダクター】ロコ
    DD04_YO_IKU,         // 【野外音楽フェス】中谷育
    DD04_MN_REIKA,       // 【無邪気な音色】北上麗花
    DD04_MD_SERIKA,      // 【未来の大監督？】箱崎星梨花
    DD04_TT_EMIRI,       // 【特大抹茶トリュフ】エミリー
    DD04_KN_KOTOHA,      // 【清らかな音色】田中琴葉
    DD04_CH_MEGUMI,      // 【ショコラハウス】所恵美
    DD04_GROWING,        // ♪Growing Storm！♪
    DD04_TONDEKE,        // 飛んでけ！全力パワー！
    DD04_OUEN,           // 応援ください！
    DD04_CI_KANAKO,      // 【CANDY ISLAND】三村かな子
    DD04_CI_CHIERI,      // 【CANDY ISLAND】緒方智絵里
    DD04_CI_ANZU,        // 【CANDY ISLAND】双葉杏
    DD04_FS_KANAKO,      // 【ふわふわスマイル】三村かな子
    DD04_VS_SAKURAI,     // 【バレンタインスウィート】櫻井桃華
    DD04_WH_MUNEKATA,    // 【わきわきハンター】棟方愛海
    DD04_KN_MIYAMOTO,    // 【ガドー・ド・ノエル】宮本フレデリカ＋
    DD04_DM_NORIKO,      // 【ドーナッツ☆マーメイド】椎名法子＋
    DD04_SP_KOHINATA,    // 【聖夜のプレゼント】小日向美穂＋
    DD04_CC_CHIE,        // 【チャーミングチアー】佐々木千枝＋
    DD04_CD_YUKIMI,      // 【クリスマスドール】佐城雪美
    DD04_KH_KAEDE,       // 【甘美なる姫君】高垣楓
    DD04_CG_YUI,         // 【クリスマス☆ギャル】大槻唯
    DD04_HH_SANTA,       // 【ﾊｯﾋﾟｰﾎｰﾘｰﾅｲﾄ】イヴ・サンタクロース＋
    DD04_HAPPY,          // ♪Happy×２Days♪
    DD04_DOCTOR,         // ドクターストップ
    DD04_CUTE,           // キュートハートビート！
    DD04_P2_NEBURA,      // 【PROMETHEUS ２】ネーブラ
    DD04_HD_IORI,        // 【不屈の努力家】水瀬伊織
    DD04_LOST,           // ロストアルテミス
    DD04_KABUTO,         // 仮面ライダーカブト
    DD04_IKA,            // インクリング(ガール)
    DD05_YD_KAWASHIMA,   // 【夜明けのディーバ】川島瑞樹
    DD05_YD_KAWASHIMA_P, // 【夜明けのディーバ】川島瑞樹＋
    DD05_TD_MIFUNE,      // 【ティアドロップ】三船美優
    DD05_UH_WAKUI,       // 【麗しの花嫁】和久井留美
    DD05_IH_HATTORI,     // 【一輪の花】服部瞳子
    DD05_OH_MATSUO,      // 【乙女の晴れ舞台】松尾千鶴
    DD05_PR_TADA,        // 【パーティロックアンセム】多田李衣菜＋
    DD05_WM_HEREN,       // 【ワールドイズマイン】ヘレン＋
    DD05_CG_SIOMI,       // 【シンデレラガール】塩見周子
    DD05_AP_ABE,         // 【アタシポンコツアンドロイド】安部菜々
    DD05_AP_ABE_P,       // 【アタシポンコツアンドロイド】安部菜々＋
    DD05_LT_HIKARU_P,    // 【レジェンドシーフ】南条光＋
    DD05_EH_SATO,        // 【えんじぇるはぁと】佐藤心＋
    DD05_HK_HAMAGUTI,    // 【秘伝☆くのいち】浜口あやめ
    DD05_KG_KIMURA,      // 【華夜紅炎】木村夏樹＋
    DD05_OS_MOMOSE,      // 【お約束サンオイル】百瀬莉緒
    DD05_JM_TOYOKAWA,    // 【ジューシーミイラ娘】豊川風花
    DD05_LV_HAZAMA,      // 【ロジカル・ヴァンパイア】硲道夫＋
    DD05_HT_MAITA,       // 【ハッピーティーチャー】舞田類
    DD05_HP_YUKIPO,      // 【箱入りぷちどる】ゆきぽ
    DD05_BESTP,          // ベストパートナー
    DD05_ANTIA,          // アンチエイジング
    DD05_KYUHEN,         // 急変
    DD05_NAGAREBOSHI,    // ♪流れ星キセキ♪
    DD05_AR_HARUKA,      // 【愛されリボン】天海春香
    DD04_SK_KANA_2,      // 【戦士の心】矢吹可奈
    DD04_TR_KANA_2,      // 【トラブルルーキー】矢吹可奈
};