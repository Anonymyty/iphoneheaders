/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:58:02 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebContentAnalysis/WebContentAnalysis-Structs.h>
#import <WebContentAnalysis/WFLSMMap.h>

@interface WFLSMScoreNormalizedMap : WFLSMMap {

	float* maxScore;
	float* minScore;

}
-(void)dealloc;
-(id)initWithMap:(LSMMapRef)arg1 ;
-(id)evaluate:(id)arg1 ;
@end
