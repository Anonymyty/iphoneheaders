/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:57:03 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VectorKit/VectorKit-Structs.h>
@class VKMapView, NSString;

@interface VKPerformanceTest : NSObject {

	VKMapView* _mapView;
	BOOL _running;
	int _loopCounter;
	int _resultCount;
	VKPerformanceTestResult_struct* _results;
	NSString* _outputHeader;

}
+(void)runWithMapView:(id)arg1 outputHeader:(id)arg2 ;
-(void)dealloc;
-(void)runTest:(int)arg1 step:(int)arg2 ;
-(void)tick:(int)arg1 ;
-(void)printResults;
-(id)initWithMapView:(id)arg1 outputHeader:(id)arg2 ;
-(void)loop;
-(void)abort;
@end
