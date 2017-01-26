/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:20:15 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/News.app/Frameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface SXComponentTextRules : NSObject <NSCopying> {

	BOOL _shouldHyphenate;
	BOOL _isSelectable;
	BOOL _allowsScrollPositionRestore;
	double _fontResizingTresholdFactor;
	double _fontSizeConstant;
	double _lineHeightConstant;
	double _dropCapConstant;
	long long _selectionFlow;

}

@property (assign,nonatomic) double fontResizingTresholdFactor;              //@synthesize fontResizingTresholdFactor=_fontResizingTresholdFactor - In the implementation block
@property (assign,nonatomic) double fontSizeConstant;                        //@synthesize fontSizeConstant=_fontSizeConstant - In the implementation block
@property (assign,nonatomic) double lineHeightConstant;                      //@synthesize lineHeightConstant=_lineHeightConstant - In the implementation block
@property (assign,nonatomic) double dropCapConstant;                         //@synthesize dropCapConstant=_dropCapConstant - In the implementation block
@property (assign,nonatomic) BOOL shouldHyphenate;                           //@synthesize shouldHyphenate=_shouldHyphenate - In the implementation block
@property (assign,nonatomic) BOOL isSelectable;                              //@synthesize isSelectable=_isSelectable - In the implementation block
@property (assign,nonatomic) BOOL allowsScrollPositionRestore;               //@synthesize allowsScrollPositionRestore=_allowsScrollPositionRestore - In the implementation block
@property (assign,nonatomic) long long selectionFlow;                        //@synthesize selectionFlow=_selectionFlow - In the implementation block
+(id)smallTextRules;
+(id)defaultTextRules;
+(id)bodyTextRules;
+(id)headingTextRules;
-(BOOL)allowsScrollPositionRestore;
-(void)setShouldHyphenate:(BOOL)arg1 ;
-(void)setFontResizingTresholdFactor:(double)arg1 ;
-(void)setFontSizeConstant:(double)arg1 ;
-(void)setAllowsScrollPositionRestore:(BOOL)arg1 ;
-(void)setSelectionFlow:(long long)arg1 ;
-(double)fontResizingTresholdFactor;
-(double)fontSizeConstant;
-(double)lineHeightConstant;
-(void)setLineHeightConstant:(double)arg1 ;
-(double)dropCapConstant;
-(void)setDropCapConstant:(double)arg1 ;
-(long long)selectionFlow;
-(BOOL)shouldHyphenate;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isSelectable;
-(void)setIsSelectable:(BOOL)arg1 ;
@end
