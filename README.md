# C_Dictionary
C言語でデータ構造（ハッシュ）を作りました。欠陥品です。  
keyとvalueを持つデータが入っている外部ファイルを読み込み、第二引数でunsignedint型の範囲で参照して値を返します。  
第一引数にファイルを渡さず、unsignedint型の範囲で整数値を渡すと、デフォルトの辞書（numbers.dict）を参照して値を返します。

parse.c結構イケてると思う...

<使用方法>.  
makeで実行ファイルc_dictが生成されます。  
第一引数に正の整数値をぶち込んで実行してください、英語に翻訳されて帰ってきます。  
辞書ファイルをお持ちの方は第一引数に辞書のファイルパス、第二引数に正の整数値をぶち込んでください。  
