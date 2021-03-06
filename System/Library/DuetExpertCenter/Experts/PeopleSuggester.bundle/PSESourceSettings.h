/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:27:10 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/DuetExpertCenter/Experts/PeopleSuggester.bundle/PeopleSuggester
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PSESourceSettings : NSObject {

	BOOL _isEnabled;
	BOOL _requirePriorOutgoingInteraction;
	BOOL _push;
	Class _sourceClass;
	unsigned long long _rank;
	unsigned long long _maxNumberOfPeople;

}

@property (readonly) Class sourceClass;                                 //@synthesize sourceClass=_sourceClass - In the implementation block
@property (readonly) BOOL isEnabled;                                    //@synthesize isEnabled=_isEnabled - In the implementation block
@property (readonly) unsigned long long rank;                           //@synthesize rank=_rank - In the implementation block
@property (readonly) BOOL requirePriorOutgoingInteraction;              //@synthesize requirePriorOutgoingInteraction=_requirePriorOutgoingInteraction - In the implementation block
@property (readonly) unsigned long long maxNumberOfPeople;              //@synthesize maxNumberOfPeople=_maxNumberOfPeople - In the implementation block
@property (readonly) BOOL push;                                         //@synthesize push=_push - In the implementation block
-(BOOL)requirePriorOutgoingInteraction;
-(Class)sourceClass;
-(unsigned long long)maxNumberOfPeople;
-(id)init;
-(long long)compare:(id)arg1 ;
-(BOOL)isEnabled;
-(id)initWithSettings:(id)arg1 ;
-(unsigned long long)rank;
-(BOOL)push;
@end

