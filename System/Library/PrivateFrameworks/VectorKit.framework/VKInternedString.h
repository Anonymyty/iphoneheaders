/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:57:02 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <Foundation/NSString.h>

@class NSString;

@interface VKInternedString : NSString {

	NSString* original;

}
+(id)stringWithString:(id)arg1 ;
+(void)initialize;
-(void)dealloc;
-(BOOL)isEqualToString:(id)arg1 ;
-(unsigned long long)hash;
-(id)substringFromIndex:(unsigned long long)arg1 ;
-(unsigned long long)length;
-(id)substringWithRange:(NSRange)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithString:(id)arg1 ;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(id)substringToIndex:(unsigned long long)arg1 ;
-(long long)compare:(id)arg1 options:(unsigned long long)arg2 range:(NSRange)arg3 locale:(id)arg4 ;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
@end

