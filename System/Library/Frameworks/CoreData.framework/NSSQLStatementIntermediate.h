/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:28:01 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSSQLIntermediate.h>

@class NSSQLEntity, NSString, NSSQLWhereIntermediate, NSSQLLimitIntermediate, NSSQLOrderIntermediate;

@interface NSSQLStatementIntermediate : NSSQLIntermediate {

	NSSQLEntity* _governingEntity;
	NSString* _governingAlias;
	NSString* _correlationToken;
	NSSQLWhereIntermediate* _whereClause;
	NSSQLLimitIntermediate* _limitClause;
	NSSQLOrderIntermediate* _orderIntermediate;

}
-(id)governingAliasForKeypathExpression:(id)arg1 ;
-(id)governingEntityForKeypathExpression:(id)arg1 ;
-(void)setLimitIntermediate:(id)arg1 ;
-(id)whereIntermediate;
-(id)governingAlias;
-(void)setWhereIntermediate:(id)arg1 ;
-(void)setOrderIntermediate:(id)arg1 ;
-(id)initWithEntity:(id)arg1 alias:(id)arg2 inScope:(id)arg3 ;
-(id)limitIntermediate;
-(BOOL)keypathExpressionIsSafeLHSForIn:(id)arg1 ;
-(id)governingEntity;
-(void)setGoverningAlias:(id)arg1 ;
-(void)setCorrelationToken:(id)arg1 ;
-(void)setGoverningEntity:(id)arg1 ;
-(id)orderIntermediate;
-(void)dealloc;
@end

