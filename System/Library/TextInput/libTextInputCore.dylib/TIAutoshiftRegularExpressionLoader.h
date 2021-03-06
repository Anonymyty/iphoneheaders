/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:14:38 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/TextInput/libTextInputCore.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSRegularExpression, NSString;

@interface TIAutoshiftRegularExpressionLoader : NSObject {

	NSRegularExpression* _regex;
	NSString* _sentenceDelimitingCharacters;
	NSString* _sentenceTrailingCharacters;
	NSString* _nextSentencePrefixCharacters;

}

@property (nonatomic,retain) NSRegularExpression * regex;                            //@synthesize regex=_regex - In the implementation block
@property (nonatomic,readonly) NSString * sentenceDelimitingCharacters;              //@synthesize sentenceDelimitingCharacters=_sentenceDelimitingCharacters - In the implementation block
@property (nonatomic,readonly) NSString * sentenceTrailingCharacters;                //@synthesize sentenceTrailingCharacters=_sentenceTrailingCharacters - In the implementation block
@property (nonatomic,readonly) NSString * nextSentencePrefixCharacters;              //@synthesize nextSentencePrefixCharacters=_nextSentencePrefixCharacters - In the implementation block
+(id)loaderWithSentenceDelimiters:(id)arg1 trailingChars:(id)arg2 prefixChars:(id)arg3 ;
-(void)dealloc;
-(NSString *)sentenceDelimitingCharacters;
-(NSString *)sentenceTrailingCharacters;
-(void)setRegex:(NSRegularExpression *)arg1 ;
-(NSRegularExpression *)regex;
-(id)initWithSentenceDelimiters:(id)arg1 trailingChars:(id)arg2 prefixChars:(id)arg3 ;
-(void)startBackgroundLoad;
-(NSString *)nextSentencePrefixCharacters;
@end

