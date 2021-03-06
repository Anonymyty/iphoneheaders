/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:23:55 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/AccessibilityBundles/GAXBackboardServer.bundle/GAXBackboardServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GAXBackboardServer/GAXBackboardServer-Structs.h>
@class NSMutableArray, AXAccessQueueTimer;

@interface GAXAccessibilityFeatureManager : NSObject {

	BOOL _restoring;
	SCD_Struct_GA0 _overrideAXFeatureSet;
	NSMutableArray* _updateQueue;
	AXAccessQueueTimer* _updateTimer;

}

@property (nonatomic,readonly) BOOL hasAccessibilityTripleClickOptions; 
@property (assign,getter=isRestoring,nonatomic) BOOL restoring;                      //@synthesize restoring=_restoring - In the implementation block
@property (assign,nonatomic) SCD_Struct_GA0 overrideAXFeatureSet;                    //@synthesize overrideAXFeatureSet=_overrideAXFeatureSet - In the implementation block
@property (nonatomic,retain) NSMutableArray * updateQueue;                           //@synthesize updateQueue=_updateQueue - In the implementation block
@property (nonatomic,retain) AXAccessQueueTimer * updateTimer;                       //@synthesize updateTimer=_updateTimer - In the implementation block
-(void)restoreAccessibilityFeatures;
-(BOOL)hasAccessibilityTripleClickOptions;
-(void)overrideAccessibiltyFeaturesWithFeatureSet:(SCD_Struct_GA0)arg1 ;
-(SCD_Struct_GA0)overrideAXFeatureSet;
-(SCD_Struct_GA0)_loadUserPreferredSet;
-(SCD_Struct_GA0)_currentFeatureSet;
-(void)_processNextUpdateBlockInQueue;
-(id)_updateBlocksForFeatureSet:(SCD_Struct_GA0)arg1 ;
-(void)setOverrideAXFeatureSet:(SCD_Struct_GA0)arg1 ;
-(BOOL)_hasSavedUserPreferredFeatures;
-(id)_accessibilityTripleClickOptions;
-(void)_saveCurrentFeatureSetAsUserPreferredSet;
-(void)dealloc;
-(id)init;
-(AXAccessQueueTimer *)updateTimer;
-(void)setUpdateTimer:(AXAccessQueueTimer *)arg1 ;
-(NSMutableArray *)updateQueue;
-(void)setUpdateQueue:(NSMutableArray *)arg1 ;
-(BOOL)isRestoring;
-(void)setRestoring:(BOOL)arg1 ;
@end

