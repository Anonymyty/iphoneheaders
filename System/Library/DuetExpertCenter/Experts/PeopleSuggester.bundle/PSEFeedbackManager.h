/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:27:10 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/DuetExpertCenter/Experts/PeopleSuggester.bundle/PeopleSuggester
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _CDInteractionStore, NSMutableDictionary;

@interface PSEFeedbackManager : NSObject {

	_CDInteractionStore* _interactionStore;
	NSMutableDictionary* _resultsBySource;

}

@property (nonatomic,retain) NSMutableDictionary * resultsBySource;              //@synthesize resultsBySource=_resultsBySource - In the implementation block
+(id)sharedInstance;
-(NSMutableDictionary *)resultsBySource;
-(void)setResultsBySource:(NSMutableDictionary *)arg1 ;
-(id)init;
-(void)receiveFeedback:(id)arg1 ;
@end

