/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:54:44 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
@class MRTextRenderer, MRMarimbaLayer, MPText;

@interface MRMarimbaLayoutManager : NSObject {

	MRTextRenderer* _textRenderer;
	MRMarimbaLayer* _marimbaLayer;
	MPText* _text;

}

@property (nonatomic,retain) MRMarimbaLayer * marimbaLayer;              //@synthesize marimbaLayer=_marimbaLayer - In the implementation block
@property (nonatomic,retain) MPText * text;                              //@synthesize text=_text - In the implementation block
-(CGRect)currentRectForEditedText;
-(MRMarimbaLayer *)marimbaLayer;
-(void)setMarimbaLayer:(MRMarimbaLayer *)arg1 ;
-(id)textRenderer;
-(void)dealloc;
-(id)init;
-(MPText *)text;
-(void)setText:(MPText *)arg1 ;
-(CGPoint)shadowOffset;
-(long long)lineCount;
-(void)updateWithString:(id)arg1 ;
-(id)_renderer;
@end
