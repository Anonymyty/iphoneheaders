/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:30 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUUID, NSDate, NSMutableData, NSDictionary;

@interface SDActivityKey : NSObject {

	BOOL _validKey;
	unsigned short _lastUsedCounter;
	NSUUID* _keyIdentifier;
	NSDate* _dateCreated;
	NSMutableData* _keyData;

}

@property (nonatomic,retain) NSUUID * keyIdentifier;                           //@synthesize keyIdentifier=_keyIdentifier - In the implementation block
@property (nonatomic,retain) NSDate * dateCreated;                             //@synthesize dateCreated=_dateCreated - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictRepresentation; 
@property (assign,nonatomic) unsigned short lastUsedCounter;                   //@synthesize lastUsedCounter=_lastUsedCounter - In the implementation block
@property (assign,getter=isValidKey,nonatomic) BOOL validKey;                  //@synthesize validKey=_validKey - In the implementation block
@property (nonatomic,retain) NSMutableData * keyData;                          //@synthesize keyData=_keyData - In the implementation block
-(unsigned short)lastUsedCounter;
-(id)initWithDictRepresentation:(id)arg1 ;
-(void)setKeyIdentifier:(NSUUID *)arg1 ;
-(void)setLastUsedCounter:(unsigned short)arg1 ;
-(BOOL)isValidKey;
-(void)setValidKey:(BOOL)arg1 ;
-(NSUUID *)keyIdentifier;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSDictionary *)dictRepresentation;
-(NSDate *)dateCreated;
-(void)setDateCreated:(NSDate *)arg1 ;
-(void)setKeyData:(NSMutableData *)arg1 ;
-(NSMutableData *)keyData;
@end
