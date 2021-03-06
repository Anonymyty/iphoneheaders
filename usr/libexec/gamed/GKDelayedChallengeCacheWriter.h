/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:12 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/gamed
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <gamed/gamed-Structs.h>
#import <gamed/GKDatabaseWriter.h>

@class GKDatabaseConnection, NSDictionary, NSString;

@interface GKDelayedChallengeCacheWriter : NSObject <GKDatabaseWriter> {

	int _requestType;
	GKDatabaseConnection* _connection;
	NSDictionary* _gameDescriptor;

}

@property (nonatomic,retain) GKDatabaseConnection * connection;                        //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSDictionary * gameDescriptor;                            //@synthesize gameDescriptor=_gameDescriptor - In the implementation block
@property (assign,nonatomic) int requestType;                                          //@synthesize requestType=_requestType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) GKDatabaseConnection * databaseConnection; 
+(id)writerWithDatabaseConnection:(id)arg1 forChallengeRequestType:(int)arg2 gameDescriptor:(id)arg3 ;
-(void)writeToDatabase:(sqlite3Ref)arg1 statementStore:(id)arg2 withInsertSQL:(id)arg3 updateSQL:(id)arg4 bindOperation:(/*^block*/id)arg5 ;
-(void)writeResources:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)requestsInsertSQL;
-(GKDatabaseConnection *)databaseConnection;
-(void)bindParametersForRequestsStatement:(sqlite3_stmtRef)arg1 playerID:(id)arg2 ;
-(id)initWithDatabaseConnection:(id)arg1 forChallengeRequestType:(int)arg2 gameDescriptor:(id)arg3 ;
-(id)challengesInsertSQL;
-(void)bindParametersForStatement:(sqlite3_stmtRef)arg1 forIssuingChallenge:(id)arg2 requestsRowID:(long long)arg3 ;
-(void)bindParametersForStatement:(sqlite3_stmtRef)arg1 forAbortingChallenge:(id)arg2 requestsRowID:(long long)arg3 ;
-(void)dealloc;
-(GKDatabaseConnection *)connection;
-(void)setConnection:(GKDatabaseConnection *)arg1 ;
-(void)setRequestType:(int)arg1 ;
-(int)requestType;
-(NSDictionary *)gameDescriptor;
-(void)setGameDescriptor:(NSDictionary *)arg1 ;
@end

