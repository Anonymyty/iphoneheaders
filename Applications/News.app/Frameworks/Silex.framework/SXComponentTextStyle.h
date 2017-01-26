/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:20:15 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/News.app/Frameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/SXTextStyle.h>

@class SXDropCapStyle, SXTextStyle;

@interface SXComponentTextStyle : SXTextStyle

@property (nonatomic,readonly) long long textAlignment; 
@property (nonatomic,readonly) long long lineHeight; 
@property (nonatomic,readonly) double relativeLineHeight; 
@property (nonatomic,readonly) long long exactLineHeight; 
@property (nonatomic,readonly) SXDropCapStyle * dropCapStyle; 
@property (nonatomic,readonly) long long hyphenation; 
@property (nonatomic,readonly) SXTextStyle * linkStyle; 
@property (nonatomic,readonly) long long paragraphSpacingBefore; 
@property (nonatomic,readonly) long long paragraphSpacingAfter; 
@property (nonatomic,readonly) long long firstLineIndent; 
@property (nonatomic,readonly) BOOL hangingPunctuation; 
-(BOOL)hangingPunctuation;
-(long long)firstLineIndent;
-(long long)paragraphSpacingAfter;
-(long long)paragraphSpacingBefore;
-(SXTextStyle *)linkStyle;
-(long long)hyphenation;
-(SXDropCapStyle *)dropCapStyle;
-(long long)exactLineHeight;
-(double)relativeLineHeight;
-(long long)lineHeight;
-(long long)textAlignment;
-(long long)textAlignmentWithValue:(id)arg1 withType:(int)arg2 ;
-(long long)lineHeightWithValue:(id)arg1 withType:(int)arg2 ;
-(long long)exactLineHeightWithValue:(id)arg1 withType:(int)arg2 ;
-(double)relativeLineHeightWithValue:(id)arg1 withType:(int)arg2 ;
-(long long)hyphenationWithValue:(id)arg1 withType:(int)arg2 ;
@end
