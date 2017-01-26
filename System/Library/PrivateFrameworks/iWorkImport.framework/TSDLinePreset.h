/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:48 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TSDLineEnd, TSDStroke;

@interface TSDLinePreset : NSObject {

	TSDLineEnd* mHeadLineEnd;
	TSDLineEnd* mTailLineEnd;
	TSDStroke* mStroke;

}

@property (nonatomic,copy,readonly) TSDLineEnd * headLineEnd; 
@property (nonatomic,copy,readonly) TSDLineEnd * tailLineEnd; 
@property (nonatomic,copy,readonly) TSDStroke * stroke; 
+(id)lineWithStroke:(id)arg1 headLineEnd:(id)arg2 tailLineEnd:(id)arg3 ;
-(id)initWithStroke:(id)arg1 headLineEnd:(id)arg2 tailLineEnd:(id)arg3 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(TSDStroke *)stroke;
-(TSDLineEnd *)headLineEnd;
-(TSDLineEnd *)tailLineEnd;
@end
