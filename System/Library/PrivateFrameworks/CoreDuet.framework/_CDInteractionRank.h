/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:40:28 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet;

@interface _CDInteractionRank : NSObject {

	double _score;
	NSSet* _reasons;

}

@property (assign) double score;                 //@synthesize score=_score - In the implementation block
@property (retain) NSSet * reasons;              //@synthesize reasons=_reasons - In the implementation block
-(void)setReasons:(NSSet *)arg1 ;
-(void)setScore:(double)arg1 ;
-(NSSet *)reasons;
-(double)score;
@end
