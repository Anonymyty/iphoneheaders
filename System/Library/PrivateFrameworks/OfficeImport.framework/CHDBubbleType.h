/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:50:38 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/CHDChartType.h>

@interface CHDBubbleType : CHDChartType {

	BOOL mShowNegativeBubbles;
	BOOL mSizeRepresentsRadius;
	int mBubbleScale;

}
-(id)initWithChart:(id)arg1 ;
-(BOOL)is3DType;
-(int)defaultLabelPosition;
-(void)setBubbleScale:(int)arg1 ;
-(void)setShowNegBubbles:(BOOL)arg1 ;
-(void)setSizeRepresentsRadius:(BOOL)arg1 ;
-(int)bubbleScale;
-(BOOL)isSizeRepresentingRadius;
-(BOOL)isShowNegBubbles;
@end
