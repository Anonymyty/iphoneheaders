/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:28:53 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameplayKit/GameplayKit-Structs.h>
#import <GameplayKit/GKGraph.h>

@class NSMutableArray, NSArray;

@interface GKObstacleGraph : GKGraph {

	NSMutableArray* _sourceObstacles;
	GKCObstacleGraph* _cObstacleGraph;

}

@property (nonatomic,readonly) NSArray * obstacles; 
@property (nonatomic,readonly) float bufferRadius; 
+(id)graphWithObstacles:(id)arg1 bufferRadius:(float)arg2 ;
-(GKCGraph*)makeCGraph;
-(id)initWithObstacles:(id)arg1 bufferRadius:(float)arg2 ;
-(GKCObstacleGraph*)cObstacleGraph;
-(NSArray *)obstacles;
-(id)mutObstacles;
-(float)bufferRadius;
-(void)connectNodeUsingObstacles:(id)arg1 ;
-(void)connectNodeUsingObstacles:(id)arg1 ignoringObstacles:(id)arg2 ;
-(void)connectNodeUsingObstacles:(id)arg1 ignoringBufferRadiusOfObstacles:(id)arg2 ;
-(void)addObstacles:(id)arg1 ;
-(void)removeAllObstacles;
-(void)removeObstacles:(id)arg1 ;
-(id)nodesForObstacle:(id)arg1 ;
-(void)lockConnectionFromNode:(id)arg1 toNode:(id)arg2 ;
-(void)unlockConnectionFromNode:(id)arg1 toNode:(id)arg2 ;
-(BOOL)isConnectionLockedFromNode:(id)arg1 toNode:(id)arg2 ;
@end

