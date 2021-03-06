/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:13 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/gamed
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface GKDatabaseConnectionFactory : NSObject {

	NSString* _databasePath;

}

@property (nonatomic,copy) NSString * databasePath;              //@synthesize databasePath=_databasePath - In the implementation block
+(id)directoryForEnvironment:(long long)arg1 ;
+(id)pathForDatabaseName:(id)arg1 environment:(long long)arg2 ;
+(id)factoryWithDatabaseName:(id)arg1 environment:(long long)arg2 ;
-(id)connectionForReaderWithName:(id)arg1 ;
-(id)connectionForWriterWithName:(id)arg1 ;
-(void)dealloc;
-(id)initWithPath:(id)arg1 ;
-(void)setDatabasePath:(NSString *)arg1 ;
-(NSString *)databasePath;
@end

