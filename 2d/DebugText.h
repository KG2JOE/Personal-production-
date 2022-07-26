#pragma once

#include<d3d12.h>
#include<d3dx12.h>
#include<dxgi1_6.h>
#include<wrl.h>
#include"Sprite.h"
class DebugText
{
public: // 定数の宣言    
    static const int maxCharCount = 256;    // 最大文字数
    static const int fontWidth = 9;         // フォント画像内1文字分の横幅
    static const int fontHeight = 18;       // フォント画像内1文字分の縦幅
    static const int fontLineCount = 14;    // フォント画像内1行分の文字数

public: // メンバ関数
    void Initialize(ID3D12Device* dev, int window_width, int window_height, UINT texnumber, const SpriteCommon& spriteCommon);

    void Print(const SpriteCommon& spriteCommon, const std::string& text, float x, float y, float scale = 1.0f);

    void DrawAll(ID3D12GraphicsCommandList* cmdList, const SpriteCommon& spriteCommon, ID3D12Device* dev);

private: // メンバ変数     
    // スプライトデータの配列
    Sprite sprites[maxCharCount];
    // スプライトデータ配列の添え字番号
    int spriteIndex = 0;
};

