/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:55 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TSTLayoutSpaceBezierPathCacheKey : NSObject <NSCopying> {

	BOOL _reoriginToZero;
	double _inset;
	SCD_Struct_TS548 _gridRange;
	CGAffineTransform _transform;

}

@property (assign,nonatomic) SCD_Struct_TS548 gridRange;               //@synthesize gridRange=_gridRange - In the implementation block
@property (assign,nonatomic) CGAffineTransform transform;              //@synthesize transform=_transform - In the implementation block
@property (assign,nonatomic) double inset;                             //@synthesize inset=_inset - In the implementation block
@property (assign,nonatomic) BOOL reoriginToZero;                      //@synthesize reoriginToZero=_reoriginToZero - In the implementation block
-(BOOL)reoriginToZero;
-(SCD_Struct_TS548)gridRange;
-(void)setReoriginToZero:(BOOL)arg1 ;
-(void)setGridRange:(SCD_Struct_TS548)arg1 ;
-(void)setInset:(double)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(CGAffineTransform)transform;
-(double)inset;
@end
