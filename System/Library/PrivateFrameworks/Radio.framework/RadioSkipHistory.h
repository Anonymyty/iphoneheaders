/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:52:59 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Radio/RadioManagedObjectWrapperProtocol.h>

@class NSManagedObject, RadioModel, NSString, NSArray;

@interface RadioSkipHistory : NSObject <RadioManagedObjectWrapperProtocol> {

	BOOL _databaseBacked;
	NSManagedObject* _managedObject;
	RadioModel* _model;
	NSString* _skipIdentifier;
	NSArray* _skipTimestamps;
	NSString* _stationHash;
	long long _stationID;

}

@property (nonatomic,copy) NSString * skipIdentifier;                                    //@synthesize skipIdentifier=_skipIdentifier - In the implementation block
@property (nonatomic,copy) NSString * stationHash;                                       //@synthesize stationHash=_stationHash - In the implementation block
@property (assign,nonatomic) long long stationID;                                        //@synthesize stationID=_stationID - In the implementation block
@property (nonatomic,copy) NSArray * skipTimestamps;                                     //@synthesize skipTimestamps=_skipTimestamps - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isDatabaseBacked,nonatomic,readonly) BOOL databaseBacked;              //@synthesize databaseBacked=_databaseBacked - In the implementation block
@property (nonatomic,readonly) NSManagedObject * managedObject;                          //@synthesize managedObject=_managedObject - In the implementation block
@property (nonatomic,readonly) RadioModel * model;                                       //@synthesize model=_model - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(RadioModel *)model;
-(long long)stationID;
-(NSManagedObject *)managedObject;
-(NSString *)stationHash;
-(NSString *)skipIdentifier;
-(void)setSkipIdentifier:(NSString *)arg1 ;
-(void)setSkipTimestamps:(NSArray *)arg1 ;
-(NSArray *)skipTimestamps;
-(void)_radioModelWasDeletedNotification:(id)arg1 ;
-(BOOL)isDatabaseBacked;
-(id)initWithModel:(id)arg1 managedObject:(id)arg2 ;
-(void)setStationHash:(NSString *)arg1 ;
-(void)setStationID:(long long)arg1 ;
@end
