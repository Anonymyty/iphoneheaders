/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:29:27 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MessageUI/MessageUI-Structs.h>
@class NSString;

@interface MFReformattedAddress : NSObject {

	NSString* _address;
	NSRange _middleTruncationRange;

}

@property (nonatomic,readonly) NSString * localPart; 
@property (nonatomic,readonly) NSString * domainPart; 
@property (assign,nonatomic) NSRange middleTruncationRange;              //@synthesize middleTruncationRange=_middleTruncationRange - In the implementation block
-(void)dealloc;
-(id)description;
-(id)attributedStringWithFontSize:(double)arg1 maximumWidth:(double)arg2 options:(unsigned long long)arg3 ;
-(id)initWithAddress:(id)arg1 ;
-(double)widthWithFontSize:(double)arg1 maximumWidth:(double)arg2 options:(unsigned long long)arg3 ;
-(NSString *)localPart;
-(void)setMiddleTruncationRange:(NSRange)arg1 ;
-(NSRange)middleTruncationRange;
-(NSString *)domainPart;
@end

