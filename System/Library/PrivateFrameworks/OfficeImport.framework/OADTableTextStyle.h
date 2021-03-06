/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:50:31 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class OADFontReference, OADColor;

@interface OADTableTextStyle : NSObject {

	OADFontReference* mFontReference;
	OADColor* mColor;
	int mBold;
	int mItalic;

}
+(id)defaultStyle;
+(id)defaultColor;
+(id)defaultFontReference;
+(int)defaultBold;
+(int)defaultItalic;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)color;
-(void)setColor:(id)arg1 ;
-(int)bold;
-(int)italic;
-(void)setFontReference:(id)arg1 ;
-(void)setBold:(int)arg1 ;
-(void)setItalic:(int)arg1 ;
-(id)shallowCopy;
-(void)applyOverridesFrom:(id)arg1 ;
-(id)fontReference;
@end

