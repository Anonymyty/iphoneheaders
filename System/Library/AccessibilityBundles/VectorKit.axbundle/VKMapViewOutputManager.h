/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:24:46 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/AccessibilityBundles/VectorKit.axbundle/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface VKMapViewOutputManager : NSObject {

	NSMutableArray* _outputQueue;

}

@property (nonatomic,retain) NSMutableArray * outputQueue;              //@synthesize outputQueue=_outputQueue - In the implementation block
+(id)sharedOutputManager;
-(unsigned long long)outputQueueCount;
-(NSMutableArray *)outputQueue;
-(void)clearOutputQueue;
-(void)setOutputQueue:(NSMutableArray *)arg1 ;
-(void)queueOutput:(id)arg1 ;
-(void)_handleAccessibilityAnnouncementDidFinish:(id)arg1 ;
-(void)dealloc;
-(id)init;
@end

