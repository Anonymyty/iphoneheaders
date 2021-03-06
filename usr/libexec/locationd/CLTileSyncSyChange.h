/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:20 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <locationd/SYChange.h>
#import <locationd/SYObject.h>

@class NSString, NSDictionary;

@interface CLTileSyncSyChange : NSObject <SYChange, SYObject> {

	char _aud;
	NSString* _syncKey;
	NSDictionary* _properties;
	NSDictionary* _context;

}

@property (retain) NSString * syncKey;                                   //@synthesize syncKey=_syncKey - In the implementation block
@property (retain) NSDictionary * properties;                            //@synthesize properties=_properties - In the implementation block
@property (retain) NSDictionary * context;                               //@synthesize context=_context - In the implementation block
@property (assign) char aud;                                             //@synthesize aud=_aud - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * objectIdentifier; 
@property (nonatomic,readonly) NSString * sequencer; 
@property (nonatomic,readonly) long long changeType; 
-(char)aud;
-(void)setAud:(char)arg1 ;
-(void)dealloc;
-(NSDictionary *)context;
-(void)setContext:(NSDictionary *)arg1 ;
-(NSDictionary *)properties;
-(void)setProperties:(NSDictionary *)arg1 ;
-(NSString *)syncKey;
-(void)setChangeType:(long long)arg1 ;
-(long long)changeType;
-(void)setSyncKey:(NSString *)arg1 ;
-(void)setObjectIdentifier:(NSString *)arg1 ;
-(id)syncId;
-(NSString *)sequencer;
-(NSString *)objectIdentifier;
@end

