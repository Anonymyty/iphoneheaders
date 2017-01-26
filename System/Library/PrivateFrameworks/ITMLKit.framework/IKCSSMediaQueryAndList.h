/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:47:25 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKCSSMediaQueryList.h>

@class NSMutableArray, NSString;

@interface IKCSSMediaQueryAndList : IKCSSMediaQueryList {

	NSMutableArray* _queryList;
	BOOL _negated;
	NSString* _type;

}

@property (nonatomic,retain) NSString * type;              //@synthesize type=_type - In the implementation block
@property (assign) BOOL negated;                           //@synthesize negated=_negated - In the implementation block
-(unsigned long long)count;
-(id)init;
-(id)description;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(id)subQueryAtIndex:(unsigned long long)arg1 ;
-(void)addQuery:(id)arg1 ;
-(id)expressionList;
-(BOOL)negated;
-(void)setNegated:(BOOL)arg1 ;
-(BOOL)evaluate;
@end
