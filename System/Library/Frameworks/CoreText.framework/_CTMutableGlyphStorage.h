/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:28:21 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreText.framework/CoreText
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreText/CoreText-Structs.h>
#import <CoreText/_CTGlyphStorage.h>
#import <libobjc.A.dylib/_CTGlyphStorageAdvanceLookup.h>

@class CTGlyphStorageInterface;

@interface _CTMutableGlyphStorage : _CTGlyphStorage <_CTGlyphStorageAdvanceLookup> {

	CTGlyphStorageInterface* _interface;

}
-(void)setProps:(unsigned)arg1 atIndex:(long long)arg2 ;
-(void)initGlyphStackWithCapacity:(long long)arg1 ;
-(void)pushGlyphAtIndex:(long long)arg1 ;
-(void)popGlyphAtIndex:(long long)arg1 ;
-(long long)attachmentCountAtIndex:(long long)arg1 ;
-(CGPoint)originAtIndex:(long long)arg1 ;
-(void)setStringIndex:(long long)arg1 atIndex:(long long)arg2 ;
-(void)setAttachmentCount:(long long)arg1 atIndex:(long long)arg2 ;
-(void)puntStringIndicesInRange:(SCD_Struct_CT0)arg1 by:(long long)arg2 ;
-(id)copyWithRange:(SCD_Struct_CT0)arg1 ;
-(void*)refCon;
-(void)setOrigin:(CGPoint)arg1 atIndex:(long long)arg2 ;
-(void)setGlyph:(unsigned short)arg1 atIndex:(long long)arg2 ;
-(void)setAdvance:(CGSize)arg1 atIndex:(long long)arg2 ;
-(void)insertGlyphsAtRange:(SCD_Struct_CT0)arg1 ;
-(void)swapGlyphsAtIndex:(long long)arg1 withIndex:(long long)arg2 ;
-(void)moveGlyphsFromRange:(SCD_Struct_CT0)arg1 toIndex:(long long)arg2 ;
-(CGSize)customAdvanceForIndex:(long long)arg1 ;
-(void)disposeGlyphStack;
-(void)sync;
-(id)initWithInterface:(id)arg1 ;
@end

