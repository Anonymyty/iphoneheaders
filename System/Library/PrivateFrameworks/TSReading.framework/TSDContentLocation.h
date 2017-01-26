/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 4:32:24 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TSDContentLocation : NSObject <NSCopying> {

	double _viewScale;
	CGPoint _unscaledPoint;

}

@property (assign,nonatomic) CGPoint unscaledPoint;              //@synthesize unscaledPoint=_unscaledPoint - In the implementation block
@property (assign,nonatomic) double viewScale;                   //@synthesize viewScale=_viewScale - In the implementation block
+(id)contentLocationWithUnscaledPoint:(CGPoint)arg1 viewScale:(double)arg2 ;
+(id)contentLocationInterpolatingFromLocation:(id)arg1 toLocation:(id)arg2 fraction:(double)arg3 ;
+(id)contentLocation;
-(double)viewScale;
-(CGPoint)unscaledPoint;
-(void)setUnscaledPoint:(CGPoint)arg1 ;
-(void)setViewScale:(double)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
