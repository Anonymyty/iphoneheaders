/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:27:11 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/DuetKnowledgeBase/Monitors/DuetKnowledgeMonitor.bundle/DuetKnowledgeMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDate;


@protocol _DKHistoricalMonitor <_DKMonitor>
@property (nonatomic,copy) id historicalHandler; 
@property (nonatomic,readonly) NSDate * lastUpdate; 
@required
-(void)setHistoricalHandler:(/*^block*/id)arg1;
-(id)historicalHandler;
-(void)update;
-(NSDate *)lastUpdate;

@end

