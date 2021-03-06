/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:22:40 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunesstored/itunesstored-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface ArrayHash : NSObject <NSCopying> {

	NSArray* _array;

}

@property (readonly) NSArray * array;              //@synthesize array=_array - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSArray *)array;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithArray:(id)arg1 ;
@end

